void TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_Color_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_GameObject__c *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_596ADD6 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596ADD6 = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  *(_QWORD *)&this->fields.TYPE_SPRITE_POS_Y = 0x74C278CCCDLL;
  v4 = (struct UnityEngine_Color_array *)sub_2213B20(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fallEffectObjList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19, v20);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int size; // w22
  int32_t i; // w20
  struct System_Collections_Generic_List_GameObject__o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x21
  __int64 v10; // x2

  if ( (byte_596ADD3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADD3 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    fallEffectObjList = this->fields.fallEffectObjList;
    this->fields.isSkip = 1;
    if ( fallEffectObjList )
    {
      size = fallEffectObjList->fields._size;
      if ( size >= 1 )
      {
        for ( i = 0; i != size; ++i )
        {
          v6 = this->fields.fallEffectObjList;
          if ( !v6 )
            sub_2213CDC(0, method);
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v6,
                   i,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v10);
            UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Item, 0);
          }
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596ADCC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TreasureBoxDialogComponent_EndClose__);
    byte_596ADCC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void TreasureBoxDialogComponent__EndClose(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
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

  TreasureBoxDialogComponent__Init(this, method);
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


void TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TreasureBoxDialogComponent__OnClickCloseButton(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_596ADCB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TreasureBoxDialogComponent_OnClickCloseButton__);
    byte_596ADCB = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  if ( this->fields.isShowPointReward )
    v4 = 8;
  else
    v4 = 1;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(skipCollider, v6);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0);
}


void TreasureBoxDialogComponent__OnClickSwitchShowMode(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UILabel_o *viewChangeButtonLabel; // x0
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v13; // w20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596ADD4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
    byte_596ADD4 = 1;
  }
  v3 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_19;
    if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) != 0 )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
      if ( !viewChangeButtonLabel )
        goto LABEL_19;
      goto LABEL_13;
    }
LABEL_21:
    sub_2213CE4(viewChangeButtonLabel);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_19;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_21;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
  if ( !viewChangeButtonLabel )
LABEL_19:
    sub_2213CDC(viewChangeButtonLabel, v5);
LABEL_13:
  v14.fields.a = *p_a;
  v14.fields.b = *p_b;
  v14.fields.g = *p_g;
  v14.fields.r = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v14, 0);
  viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
  if ( !viewChangeButtonLabel )
    goto LABEL_19;
  v13 = 0;
  while ( v13 < SLODWORD(viewChangeButtonLabel->fields.m_CancellationTokenSource) )
  {
    viewChangeButtonLabel = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)viewChangeButtonLabel,
                                           v13,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0);
        viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
        ++v13;
        if ( viewChangeButtonLabel )
          continue;
      }
    }
    goto LABEL_19;
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
  __int64 v14; // x20
  __int64 viewChangeButton; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Array_o **v23; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *Component_object; // x27
  __int64 v40; // x1
  __int64 v41; // x2
  TreasureBoxEntity_o *v42; // x22
  GiftEntity_array *GiftListById; // x28
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x29
  unsigned int v46; // w20
  Il2CppClass **v47; // x8
  Il2CppClass *v48; // x27
  Il2CppObject *v49; // x21
  System_Collections_Generic_List_GameObject__c *v50; // x0
  System_Collections_Generic_List_object__o *v51; // x26
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_List_object__o *v58; // x26
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *size; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int v72; // w9
  int32_t dialogType; // w8
  TreasureBoxEntity_o *v74; // x28
  int32_t eventId; // w23
  Il2CppObject *monitor; // x24
  UILabel_o *v77; // x25
  System_String_o *v78; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  System_String_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  UISprite_o *eventPointBg; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x0
  int32_t v89; // w23
  EventRewardEntity_o *v90; // x25
  const MethodInfo *v91; // x3
  __int64 v92; // x1
  __int64 v93; // x2
  UILabel_o *v94; // x25
  __int64 v95; // x2
  Il2CppObject *v96; // x25
  int32_t v97; // w26
  UISprite_o *totalEventPointIcon; // x28
  UILabel_o *getTitleLabel; // x26
  System_String_o *v100; // x0
  UILabel_o *getNumLabel; // x26
  System_String_o *v102; // x28
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  int64_t v105; // x26
  UILabel_o *totalTitleLabel; // x27
  System_String_o *v107; // x0
  UILabel_o *totalNumLabel; // x25
  System_String_o *v109; // x27
  Il2CppObject *v110; // x0
  __int64 v111; // x25
  System_Array_o *v112; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v114; // w8
  __int64 v115; // x2
  UILabel_o *v116; // x23
  int v117; // w20
  UILabel_o *titleLabel; // x23
  System_String_o *v119; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x23
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  int32_t iconId; // w20
  System_Action_o *v127; // x21
  const MethodInfo *v128; // x4
  System_Action_o *v129; // x20
  struct System_Action_o *v131; // [xsp+8h] [xbp-88h]
  Il2CppObject *object; // [xsp+10h] [xbp-80h]
  int64_t v133; // [xsp+18h] [xbp-78h] BYREF
  int v134; // [xsp+24h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596ADCA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    sub_2213A60(&Method_DataManager_GetMaster_EventRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__0__);
    sub_2213A60(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__1__);
    sub_2213A60(&TreasureBoxDialogComponent___c__DisplayClass57_0_TypeInfo);
    sub_2213A60(&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_2213A60(&StringLiteral_14077/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_14075/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_14079/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_14076/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_25517/*"treasurechest_img_bg_reward"*/);
    sub_2213A60(&StringLiteral_14078/*"TREASURE_BOX_EVENT_POINT_REWARD"*/);
    sub_2213A60(&StringLiteral_14080/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    byte_596ADCA = 1;
  }
  entity = 0;
  v14 = sub_2213CCC(TreasureBoxDialogComponent___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  if ( !v14 )
    goto LABEL_106;
  *(_QWORD *)(v14 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = giftIds;
  v23 = (System_Array_o **)(v14 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)giftIds, v24, v25, v26, v27, v28, v29);
  object = (Il2CppObject *)v14;
  *(_QWORD *)(v14 + 32) = pointRewards;
  v30 = v14 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)pointRewards, v31, v32, v33, v34, v35, v36);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_106;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37, v38);
  viewChangeButton = AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  if ( !treasureBoxEnt )
    goto LABEL_106;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v41);
  v131 = closeCallback;
  viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_106;
  v42 = treasureBoxEnt;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)viewChangeButton, treasureBoxEnt->fields.extraGiftId, 0);
  viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_106;
  max_length = GiftListById->max_length;
  if ( max_length >= 1 )
  {
    v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton;
    v46 = 0;
    while ( v46 < max_length )
    {
      v47 = &GiftListById->obj.klass + (int)v46;
      v48 = v47[4];
      if ( !v48 )
        goto LABEL_106;
      viewChangeButton = GiftEntity__checkGiftType((GiftEntity_o *)v47[4], 2, 0);
      if ( (viewChangeButton & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_106;
        viewChangeButton = DataMasterBase_object__object__int___TryGetEntity(
                             v45,
                             &entity,
                             (int32_t)v48->_1.namespaze,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (viewChangeButton & 1) != 0 )
        {
          v49 = entity;
          if ( !entity )
            goto LABEL_106;
          if ( LODWORD(entity[3].klass) == 14 )
            goto LABEL_23;
        }
      }
      max_length = GiftListById->max_length;
      if ( (int)++v46 >= max_length )
        goto LABEL_22;
    }
LABEL_107:
    sub_2213CE4(viewChangeButton);
  }
LABEL_22:
  v49 = 0;
  v48 = 0;
LABEL_23:
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  v50 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_WORD *)&this->fields.isSkip = 0;
  this->fields.isShowPointReward = 0;
  v51 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v51;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultIconHideObjList,
    (int32_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = (System_String_o *)(unsigned int)fallEffectObjList->fields._size;
    v72 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v72;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, (int32_t)size, 0);
  }
  dialogType = this->fields.dialogType;
  v74 = treasureBoxEnt;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, size);
    v119 = LocalizationManager__Get((System_String_o *)StringLiteral_14077/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0);
    viewChangeButton = (__int64)System_String__Format(v119, (Il2CppObject *)eventItemName, 0);
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
            (*(void (__fastcall **)(__int64, _QWORD, double, double, float, float))(*(_QWORD *)viewChangeButton + 600LL))(
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
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v136.fields.z = 0.0;
                      v136.fields.x = (float)this->fields.width;
                      v136.fields.y = (float)(this->fields.height + 10);
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v136, 0);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v121, 0);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0);
                          if ( viewChangeButton )
                          {
                            v122 = (UnityEngine_GameObject_o *)viewChangeButton;
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
                                                            v122,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v123 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)viewChangeButton,
                                           0);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v123, 0, 0);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v124 = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)viewChangeButton,
                                               0);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v124, 0, 0);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v125 = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)viewChangeButton,
                                                     0);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v125, 1, 0);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                              if ( viewChangeButton )
                                              {
                                                UIWidget__set_height(
                                                  (UIWidget_o *)viewChangeButton,
                                                  this->fields.height,
                                                  0);
                                                goto LABEL_99;
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
LABEL_99:
      v111 = 0;
      v117 = 0;
      goto LABEL_100;
    }
    if ( v49 )
    {
      eventId = treasureBoxEnt->fields.eventId;
      monitor = (Il2CppObject *)v49[1].monitor;
      v77 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, size);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_14079/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0);
      viewChangeButton = (__int64)System_String__Format(v78, monitor, 0);
      if ( v77 )
      {
        UILabel__set_text(v77, (System_String_o *)viewChangeButton, 0);
        titleNextItemLabel = this->fields.titleNextItemLabel;
        viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
        if ( titleNextItemLabel )
        {
          UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0);
          titleAtLabel = this->fields.titleAtLabel;
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_14078/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0);
          viewChangeButton = (__int64)System_String__Format(v81, monitor, 0);
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
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v82, v83);
                AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
                AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
                EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v85, v86);
                viewChangeButton = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRewardMaster___);
                if ( viewChangeButton )
                {
                  NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                            (EventRewardMaster_o *)viewChangeButton,
                                            eventId,
                                            EventPointNoGroup,
                                            0);
                  v89 = (int32_t)v49[2].monitor;
                  v90 = NextEventRewardEntity;
                  AtlasManager__SetItem(this->fields.eventPointSprite, v89, 0);
                  AtlasManager__SetItem(this->fields.titleIcon, v89, 0);
                  TreasureBoxDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v90, v91);
                  goto LABEL_99;
                }
              }
            }
          }
        }
      }
    }
LABEL_106:
    sub_2213CDC(viewChangeButton, v16);
  }
  viewChangeButton = (__int64)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0);
  if ( !*v23 )
    goto LABEL_106;
  viewChangeButton = (__int64)this->fields.getPointRoot;
  this->fields.maxPlayCnt = (int32_t)(*v23)[1].monitor;
  if ( !viewChangeButton )
    goto LABEL_106;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v94 = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92, v93);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14076/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0);
  if ( !v94 )
    goto LABEL_106;
  UILabel__set_text(v94, (System_String_o *)viewChangeButton, 0);
  if ( !v49 )
    goto LABEL_106;
  v96 = (Il2CppObject *)v49[1].monitor;
  v97 = (int32_t)v49[2].monitor;
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v95);
  AtlasManager__SetItem(totalEventPointIcon, v97, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v97, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  getTitleLabel = this->fields.getTitleLabel;
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_14075/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0);
  viewChangeButton = (__int64)System_String__Format(v100, v96, 0);
  if ( !getTitleLabel )
    goto LABEL_106;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  if ( !v48 )
    goto LABEL_106;
  v102 = (System_String_o *)viewChangeButton;
  v134 = this->fields.maxPlayCnt * HIDWORD(v48->_1.namespaze);
  v103 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v134);
  v104 = System_String__Format(v102, v103, 0);
  viewChangeButton = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_861/*"+"*/, v104, 0);
  if ( !getNumLabel )
    goto LABEL_106;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  v74 = v42;
  v105 = UserEventPointMaster__GetEventPointNoGroup(v42->fields.eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_14080/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0);
  viewChangeButton = (__int64)System_String__Format(v107, v96, 0);
  if ( !totalTitleLabel )
    goto LABEL_106;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v133 = v105;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v133);
  viewChangeButton = (__int64)System_String__Format(v109, v110, 0);
  if ( !totalNumLabel )
    goto LABEL_106;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = sub_2213B20(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_106;
  v111 = viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_107;
  v112 = *v23;
  *(_DWORD *)(v111 + 32) = v42->fields.extraGiftId;
  System_Array__Copy_77291440(v112, 0, (System_Array_o *)v111, 1, this->fields.maxPlayCnt, 0);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v114 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v114;
  if ( v114 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_106;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
    if ( !viewChangeButton )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0);
  }
  if ( *(_QWORD *)v30 && *(_QWORD *)(*(_QWORD *)v30 + 24LL) )
  {
    viewChangeButton = (__int64)this->fields.closeButton;
    if ( viewChangeButton )
    {
      viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
      if ( viewChangeButton )
      {
        viewChangeButton = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)viewChangeButton,
                                      1,
                                      (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
        if ( viewChangeButton )
        {
          if ( !*(_DWORD *)(viewChangeButton + 24) )
            goto LABEL_107;
          v116 = *(UILabel_o **)(viewChangeButton + 32);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v115);
          viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
          if ( v116 )
          {
            UILabel__set_text(v116, (System_String_o *)viewChangeButton, 0);
            v117 = 1;
            this->fields.isShowPointReward = 1;
            goto LABEL_100;
          }
        }
      }
    }
    goto LABEL_106;
  }
  v117 = 1;
LABEL_100:
  this->fields.closeCallbackFunc = v131;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)v131,
    size,
    v66,
    v67,
    v68,
    v69,
    v70);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  if ( v117 )
  {
    iconId = v74->fields.iconId;
    v127 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v127, object, Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__0__, 0);
    TreasureBoxDialogComponent__SetResultData(this, (System_Int32_array *)v111, iconId, v127, v128);
  }
  else
  {
    v129 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v129, object, Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__1__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v129, 0, 0, 0);
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
  int32_t *p_objectId; // x10
  int32_t *p_num; // x8
  int32_t *p_type; // x9
  int v12; // w24
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *prefabResultItem; // x20
  TreasureBoxDialogComponent_o *v16; // x20
  TreasureBoxDialogComponent_o *v17; // x23
  int v18; // w8
  ItemIconComponent_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_596ADD1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (TreasureBoxDialogComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADD1 = 1;
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
  p_objectId = p_originalNum - 7;
  if ( originalNum <= 0 )
    p_num = p_originalNum - 2;
  else
    p_num = p_originalNum;
  p_type = p_originalNum - 8;
LABEL_11:
  v12 = *p_num;
  v13 = *p_type;
  v14 = *p_objectId;
  prefabResultItem = (Il2CppObject *)v6->fields.prefabResultItem;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift, pointRewards);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           prefabResultItem,
                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v16 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  v17 = this;
  if ( !byte_5969AE0 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
  v30.fields.x = v6->fields.iconScale;
  v30.fields.y = v30.fields.x;
  v30.fields.z = v30.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v16,
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v18 = v12 <= 1 ? -1 : v12;
  v19 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)this, v13, v14, v18, 0, 0);
  ItemIconComponent__SetCondensedScale(v19, v6->fields.CounterLabelMaxWidth, 0);
  ItemIconComponent__CalcSetPossession(v19, v13, v14, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  m_CachedPtr = this->fields.m_CachedPtr;
  v27 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v29 + 32) = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v16, v20, v21, v22, v23, v24, v25);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
  {
LABEL_31:
    sub_2213CDC(this, gift);
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
  TreasureBoxDialogComponent_o *v6; // x19
  il2cpp_array_size_t v7; // x8
  unsigned __int64 v8; // x20
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  GiftMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  const MethodInfo *v13; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  TreasureBoxDialogComponent_o *v15; // x22
  unsigned __int64 v16; // x24

  v6 = this;
  if ( (byte_596ADD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    this = (TreasureBoxDialogComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ADD0 = 1;
  }
  if ( giftIds || !pointRewards )
  {
    if ( giftIds && !pointRewards )
    {
      this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
LABEL_25:
        sub_2213CDC(this, v9);
      this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
      max_length = giftIds->max_length;
      if ( (int)max_length >= 1 )
      {
        v11 = (GiftMaster_o *)this;
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)max_length )
            goto LABEL_24;
          if ( !v11 )
            goto LABEL_25;
          this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v11, giftIds->m_Items[v12], 0);
          if ( !this )
            goto LABEL_25;
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v15 = this;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
LABEL_22:
          LODWORD(max_length) = giftIds->max_length;
          if ( (__int64)++v12 >= (int)max_length )
            return;
        }
        v16 = 0;
        while ( v16 < (unsigned int)m_CancellationTokenSource )
        {
          TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v15->fields.basePanel + v16), 0, v13);
          LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
          if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
            goto LABEL_22;
        }
LABEL_24:
        sub_2213CE4(this);
      }
    }
  }
  else
  {
    v7 = pointRewards->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0;
      while ( v8 < (unsigned int)v7 )
      {
        TreasureBoxDialogComponent__SetIcon(v6, 0, pointRewards->m_Items[v8], method);
        LODWORD(v7) = pointRewards->max_length;
        if ( (__int64)++v8 >= (int)v7 )
          return;
      }
      goto LABEL_24;
    }
  }
}


void TreasureBoxDialogComponent__SetNextItemLabel(
        TreasureBoxDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x22
  System_String_o *v10; // x23
  Il2CppObject *v11; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v13; // x1
  bool isQp; // w8
  System_String_o *v15; // x1
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  int64_t v18; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596ADD2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_2213A60(&StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596ADD2 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint, eventRewardEnt);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
          UILabel__set_text((UILabel_o *)nextItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v9 = this->fields.atLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v18 = eventRewardEnt->fields.point - userEventPoint;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v18);
  nextItemNameLabel = System_String__Format(v10, v11, 0);
  if ( !v9 )
    goto LABEL_21;
  UILabel__set_text(v9, nextItemNameLabel, 0);
  isQp = EventRewardEntity__isQp(eventRewardEnt, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemLabel;
  if ( !isQp )
  {
    if ( nextItemNameLabel )
    {
      UILabel__set_text((UILabel_o *)nextItemNameLabel, countText, 0);
      nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
      if ( nextItemNameLabel )
      {
        v15 = nameText;
        goto LABEL_20;
      }
    }
LABEL_21:
    sub_2213CDC(nextItemNameLabel, v13);
  }
  if ( !nextItemNameLabel )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)nextItemNameLabel, countText, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( !nextItemNameLabel )
    goto LABEL_21;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v15, 0);
}


void TreasureBoxDialogComponent__SetResultData(
        TreasureBoxDialogComponent_o *this,
        System_Int32_array *resultIds,
        int32_t treasureIconId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x29
  __int64 v11; // x2
  int v12; // w8
  __int64 v13; // x25
  unsigned int v14; // w19
  Il2CppObject *prefabResultItem; // x26
  int32_t *v16; // x28
  UnityEngine_GameObject_o *v17; // x26
  UnityEngine_Transform_o *v18; // x27
  int v19; // w8
  ItemIconComponent_o *v20; // x27
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x27
  UnityEngine_GameObject_o *v34; // x27
  UnityEngine_Transform_o *transform; // x28
  ItemIconComponent_o *v36; // x26
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  __int64 v47; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596ADCD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ADCD = 1;
  }
  if ( resultIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_53:
      sub_2213CDC(Instance, v8);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    max_length = resultIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      v47 = Instance;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          goto LABEL_54;
        if ( !Instance )
          goto LABEL_53;
        Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v10], 0);
        if ( !Instance )
          goto LABEL_53;
        v12 = *(_DWORD *)(Instance + 24);
        v13 = Instance;
        if ( v12 >= 1 )
          break;
LABEL_50:
        Instance = v47;
        ++v10;
        LODWORD(max_length) = resultIds->max_length;
        if ( (__int64)v10 >= (int)max_length )
          goto LABEL_51;
      }
      v14 = 0;
      while ( v14 < v12 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v16 = *(int32_t **)(v13 + 8LL * (int)v14 + 32);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v11);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_53;
        v17 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_53;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v17, 0);
        v18 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_5969AE0 )
        {
          Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v18 )
          goto LABEL_53;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v17, 0);
        if ( !Instance )
          goto LABEL_53;
        v50.fields.x = this->fields.iconScale;
        v50.fields.y = v50.fields.x;
        v50.fields.z = v50.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v50, 0);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v17,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v16 )
          goto LABEL_53;
        v19 = v16[7];
        v20 = (ItemIconComponent_o *)Instance;
        if ( v19 <= 1 )
          v19 = -1;
        if ( !v10 )
          v19 *= LODWORD(resultIds->max_length) - 1;
        if ( !Instance )
          goto LABEL_53;
        ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v16[5], v16[6], v19, 0, 0);
        ItemIconComponent__SetCondensedScale(v20, this->fields.CounterLabelMaxWidth, 0);
        ItemIconComponent__CalcSetPossession(v20, v16[5], v16[6], 0);
        Instance = (__int64)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_53;
        v27 = *(_QWORD *)(Instance + 16);
        v28 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v27 )
          goto LABEL_53;
        v29 = *(int *)(Instance + 24);
        if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v17,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = v27 + 8 * v29;
          *(_DWORD *)(Instance + 24) = v29 + 1;
          *(_QWORD *)(v30 + 32) = v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)v17, v21, v22, v23, v24, v25, v26);
        }
        v33 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              v33,
                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_53;
        v34 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_53;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0);
        transform = UnityEngine_GameObject__get_transform(v34, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v17, 0);
        if ( !Instance )
          goto LABEL_53;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
        if ( !transform )
          goto LABEL_53;
        UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v34, 0);
        if ( !Instance )
          goto LABEL_53;
        v51.fields.x = this->fields.iconScale;
        v51.fields.y = v51.fields.x;
        v51.fields.z = v51.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v51, 0);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v34,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_53;
        v36 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 1, 0);
        UnityEngine_GameObject__SetActive(v34, 1, 0);
        ItemIconComponent__setTypeSpritePositionY(v36, this->fields.TYPE_SPRITE_POS_Y, 0);
        Instance = (__int64)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_53;
        v43 = *(_QWORD *)(Instance + 16);
        v44 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v43 )
          goto LABEL_53;
        v45 = *(int *)(Instance + 24);
        if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v34,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = v43 + 8 * v45;
          *(_DWORD *)(Instance + 24) = v45 + 1;
          *(_QWORD *)(v46 + 32) = v34;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v34, v37, v38, v39, v40, v41, v42);
        }
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_53;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_53;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = (__int64)this->fields.iconListRoot;
        if ( !Instance )
          goto LABEL_53;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_53;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v12 = *(_DWORD *)(v13 + 24);
        if ( (int)++v14 >= v12 )
          goto LABEL_50;
      }
LABEL_54:
      sub_2213CE4(Instance);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596ADCE & 1) == 0 )
  {
    sub_2213A60(&TreasureBoxDialogComponent__StartDisp_d__61_TypeInfo);
    byte_596ADCE = 1;
  }
  v3 = sub_2213CCC(TreasureBoxDialogComponent__StartDisp_d__61_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596ADCF & 1) == 0 )
  {
    sub_2213A60(&TreasureBoxDialogComponent__StartRewardAction_d__62_TypeInfo);
    byte_596ADCF = 1;
  }
  v5 = sub_2213CCC(TreasureBoxDialogComponent__StartRewardAction_d__62_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)rewardAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596ADD5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADD5 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  int32_t playCnt; // w8
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w23
  __int64 v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  int32_t v34; // w22
  System_Collections_Generic_List_object__o *v35; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *started; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int klass_high; // w8
  int32_t maxPlayCnt; // w9
  unsigned int v47; // w21
  UIProgressBar_o *v48; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int v57; // w8
  UnityEngine_WaitForSeconds_o *v58; // x20
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w21
  int32_t v66; // w19
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *current; // x19
  __int64 v70; // x1
  __int64 v71; // x2
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v73; // x20
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_596ADDA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TreasureBoxDialogComponent_RewardAction_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596ADDA = 1;
  }
  _1__state = this->fields.__1__state;
  listRewardAction_5__2 = 0;
  _4__this = this->fields.__4__this;
  memset(&v81, 0, sizeof(v81));
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state == 1 )
      {
        this->fields.__1__state = -1;
        goto LABEL_20;
      }
    }
    else
    {
      this->fields.__1__state = -1;
      v58 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v58, 0.3, 0);
      this->fields.__2__current = (Il2CppObject *)v58;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      this->fields.__1__state = 1;
      LOBYTE(listRewardAction_5__2) = 1;
    }
  }
  else
  {
    if ( _1__state == 2 )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      if ( listRewardAction_5__2 )
        goto LABEL_12;
      goto LABEL_37;
    }
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.iconListRoot;
        if ( listRewardAction_5__2 )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                 (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
          if ( listRewardAction_5__2 )
          {
            klass_high = HIDWORD(listRewardAction_5__2[1].klass);
            maxPlayCnt = _4__this->fields.maxPlayCnt;
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.scrollBar;
            v47 = maxPlayCnt % klass_high ? maxPlayCnt / klass_high + 1 : maxPlayCnt / klass_high;
            if ( listRewardAction_5__2 )
            {
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
              if ( listRewardAction_5__2 )
              {
                v48 = (UIProgressBar_o *)listRewardAction_5__2;
                value = UIProgressBar__get_value((UIProgressBar_o *)listRewardAction_5__2, 0);
                UIProgressBar__set_value(v48, (float)(1.0 / (float)(vcvts_n_f32_s32(v47, 1u) + -1.0)) + value, 0);
                this->fields.__2__current = 0;
                p__2__current = &this->fields.__2__current;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v51, v52, v53, v54, v55, v56);
                v57 = 4;
                goto LABEL_78;
              }
            }
          }
        }
      }
      goto LABEL_37;
    }
    if ( _1__state != 4 )
      return (char)listRewardAction_5__2;
    this->fields.__1__state = -1;
    while ( 1 )
    {
      this->fields._listRewardAction_5__2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2, 0, v2, v3, v4, v5, v6, v7);
LABEL_20:
      v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
      this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v13;
      p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2,
        (int32_t)v13,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !_4__this )
        goto LABEL_37;
      if ( _4__this->fields.maxItemDrawNum >= 1 )
      {
        v21 = 0;
        do
        {
          if ( v21 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
            break;
          v22 = sub_2213CCC(TreasureBoxDialogComponent_RewardAction_TypeInfo);
          System_Object___ctor((Il2CppObject *)v22, 0);
          if ( !v22 )
            goto LABEL_37;
          listRewardAction_5__2 = *p_listRewardAction_5__2;
          v29 = v21 + _4__this->fields.playCnt;
          *(_DWORD *)(v22 + 16) = v21;
          *(_DWORD *)(v22 + 20) = v29;
          if ( !listRewardAction_5__2 )
            goto LABEL_37;
          items = listRewardAction_5__2->fields._items;
          v31 = Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__;
          ++listRewardAction_5__2->fields._version;
          if ( !items )
            goto LABEL_37;
          size = listRewardAction_5__2->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              listRewardAction_5__2,
              (Il2CppObject *)v22,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            listRewardAction_5__2->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v22;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), v22, v23, v24, v25, v26, v27, v28);
          }
          ++v21;
        }
        while ( v21 < _4__this->fields.maxItemDrawNum );
      }
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_37;
      v34 = 0;
      _4__this->fields.playCnt += listRewardAction_5__2->fields._size;
      while ( v34 < listRewardAction_5__2->fields._size )
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v34,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( *p_listRewardAction_5__2 )
        {
          v35 = listRewardAction_5__2;
          Item = System_Collections_Generic_List_object___get_Item(
                   *p_listRewardAction_5__2,
                   v34,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          started = TreasureBoxDialogComponent__StartRewardAction(
                      _4__this,
                      (TreasureBoxDialogComponent_RewardAction_o *)Item,
                      v37);
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                                 started,
                                                                                 0);
          if ( v35 )
          {
            v35->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v35->fields._syncRoot,
              (int32_t)listRewardAction_5__2,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            listRewardAction_5__2 = *p_listRewardAction_5__2;
            ++v34;
            if ( *p_listRewardAction_5__2 )
              continue;
          }
        }
        goto LABEL_37;
      }
LABEL_12:
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             listRewardAction_5__2,
                                                                             listRewardAction_5__2->fields._size - 1,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
      if ( !listRewardAction_5__2 )
        goto LABEL_37;
      if ( !LOBYTE(listRewardAction_5__2->fields._size) )
        break;
      if ( !_4__this )
        goto LABEL_37;
      if ( _4__this->fields.isSkip )
        goto LABEL_50;
      playCnt = _4__this->fields.playCnt;
      if ( playCnt >= _4__this->fields.maxPlayCnt )
        goto LABEL_65;
      if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
      {
        scrollWait = _4__this->fields.scrollWait;
        v73 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v73, scrollWait, 0);
        this->fields.__2__current = (Il2CppObject *)v73;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v73, v74, v75, v76, v77, v78, v79);
        v57 = 3;
        goto LABEL_78;
      }
    }
    if ( !_4__this )
LABEL_37:
      sub_2213CDC(listRewardAction_5__2, method);
    if ( _4__this->fields.isSkip )
    {
LABEL_50:
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
      if ( listRewardAction_5__2 )
      {
        v65 = 0;
        while ( v65 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v65,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_83445360(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
            ++v65;
            if ( listRewardAction_5__2 )
              continue;
          }
          goto LABEL_37;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v66 = 0;
          while ( v66 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v66,
                                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0);
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v66;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_37;
          }
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( listRewardAction_5__2 )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                                   (UnityEngine_Component_o *)listRewardAction_5__2,
                                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( listRewardAction_5__2 )
            {
              UIProgressBar__set_value((UIProgressBar_o *)listRewardAction_5__2, 1.0, 0);
LABEL_65:
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
              if ( listRewardAction_5__2 )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0);
                listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultIconHideObjList;
                if ( listRewardAction_5__2 )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
                    listRewardAction_5__2,
                    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v81,
                            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v81.fields._current;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
                    {
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70, v71);
                      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v81,
                    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  LOBYTE(listRewardAction_5__2) = 0;
                  return (char)listRewardAction_5__2;
                }
              }
            }
          }
        }
      }
      goto LABEL_37;
    }
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
    v57 = 2;
LABEL_78:
    *((_DWORD *)p__2__current - 2) = v57;
    LOBYTE(listRewardAction_5__2) = 1;
  }
  return (char)listRewardAction_5__2;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TreasureBoxDialogComponent__StartDisp_d__61_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t v5; // w9
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *v7; // x8
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v19; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v20; // x8
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v23; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v24; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v25; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__62_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 _2__current_low; // x10
  __int64 v36; // x8
  float v37; // s8
  UnityEngine_WaitForSeconds_o *v38; // x20
  MissionNaviTransitionBoardItem_o *v39; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596ADDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)sub_2213A60(&StringLiteral_19740/*"ef_treasure_drop"*/);
    byte_596ADDB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    if ( !_4__this->fields.isSkip )
    {
      rewardAction = v2->fields.rewardAction;
      _4__this->fields.canSkip = 1;
      if ( !rewardAction )
        goto LABEL_40;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_40;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        rewardAction->fields.playCnt,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    v19 = v2->fields.rewardAction;
    if ( !v19 )
      goto LABEL_40;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_40;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v19->fields.playCnt,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v20 = v2->fields.rewardAction;
    if ( !v20 )
      goto LABEL_40;
    v20->fields.isEnd = 1;
    return 0;
  }
  else
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v2->fields._i_5__2;
      v2->fields.__1__state = -1;
      v5 = i_5__2 + 1;
      v2->fields._i_5__2 = i_5__2 + 1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v5 = 0;
      v2->fields._i_5__2 = 0;
      v2->fields.__1__state = -1;
    }
    v7 = v2->fields.rewardAction;
    if ( !v7 )
      goto LABEL_40;
    if ( v5 < v7->fields.index )
    {
      if ( _4__this )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v9 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v9, itemDispWaitTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v9, v11, v12, v13, v14, v15, v16);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return 1;
      }
LABEL_40:
      sub_2213CDC(this, method);
    }
    if ( !_4__this )
      goto LABEL_40;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_40;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7->fields.playCnt,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)GameObjectExtensions__GetParent(
                                                                      (UnityEngine_GameObject_o *)Item,
                                                                      0);
    if ( !this )
      goto LABEL_40;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                      (System_String_o *)StringLiteral_19740/*"ef_treasure_drop"*/,
                                                                      transform,
                                                                      v23);
    if ( !this )
      goto LABEL_40;
    v24 = this;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)this,
                                                                      0);
    v25 = v2->fields.rewardAction;
    if ( !v25 )
      goto LABEL_40;
    v26 = this;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.resultItemObjList;
    if ( !this )
      goto LABEL_40;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v25->fields.playCnt,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !this )
      goto LABEL_40;
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)this,
                                                                      0);
    if ( !this )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !v26 )
      goto LABEL_40;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v26, localPosition, 0);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v24,
                                                                      0);
    if ( !this )
      goto LABEL_40;
    v46.fields.x = 1.25;
    v46.fields.y = 1.25;
    v46.fields.z = 1.25;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v46, 0);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__62_o *)_4__this->fields.fallEffectObjList;
    if ( !this )
      goto LABEL_40;
    v33 = *(_QWORD *)&this->fields.__1__state;
    v34 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v33 )
      goto LABEL_40;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v33 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v24,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = v33 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v36 + 32) = v24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)v24, v27, v28, v29, v30, v31, v32);
    }
    v37 = _4__this->fields.itemDispWaitTime;
    v38 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v38, v37, 0);
    v2->fields.__2__current = (Il2CppObject *)v38;
    v39 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(v39, (int32_t)v38, v40, v41, v42, v43, v44, v45);
    v39[-1].fields._BoardType_k__BackingField = 2;
    return 1;
  }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TreasureBoxDialogComponent__StartRewardAction_d__62_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  TreasureBoxDialogComponent___c__DisplayClass57_0_o *v2; // x19
  System_Action_o *_9__2; // x22
  BaseDialog_o *_4__this; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v2 = this;
  if ( (byte_596ADD7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (TreasureBoxDialogComponent___c__DisplayClass57_0_o *)sub_2213A60(&Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__2__);
    byte_596ADD7 = 1;
  }
  _9__2 = v2->fields.__9__2;
  _4__this = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_TreasureBoxDialogComponent___c__DisplayClass57_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  BaseDialog__Open(_4__this, _9__2, 0, 0, 0);
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_596ADD9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596ADD9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v2),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0);
}


void TreasureBoxDialogComponent___c__DisplayClass57_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_596ADD8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13600/*"StartDisp"*/);
    byte_596ADD8 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13600/*"StartDisp"*/, 0);
}