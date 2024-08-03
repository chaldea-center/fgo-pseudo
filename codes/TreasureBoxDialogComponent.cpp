void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A00749 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color___TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A00749 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v6, v7, v8);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fallEffectObjList, (int32_t)v11, v12, v13);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *fallEffectObjList; // x0
  int size; // w22
  int32_t v7; // w20
  Il2CppObject *Item; // x21

  if ( (byte_4A00745 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A00745 = 1;
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
        v7 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   fallEffectObjList,
                   v7,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Item, 0LL);
          }
          if ( size == ++v7 )
            break;
          fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_1B64324(0LL);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A0073E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_TreasureBoxDialogComponent_EndClose__, v6);
    byte_4A0073E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall TreasureBoxDialogComponent__EndClose(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TreasureBoxDialogComponent__Init(this, method);
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


void __fastcall TreasureBoxDialogComponent__Init(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_4A0073D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_TreasureBoxDialogComponent_OnClickCloseButton__, v3);
    byte_4A0073D = 1;
  }
  v4 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(skipCollider);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v9; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A00746 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B640C8(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__, v5);
    byte_4A00746 = 1;
  }
  v6 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_18:
    sub_1B64324(viewChangeButtonLabel);
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
    sub_1B6432C(viewChangeButtonLabel, v9);
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
  v18.fields.a = *p_r;
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  UILabel__set_effectColor(viewChangeButtonLabel, v18, 0LL);
  viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
  v17 = 0;
  while ( v17 < SLODWORD(viewChangeButtonLabel->fields.m_CancellationTokenSource) )
  {
    viewChangeButtonLabel = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)viewChangeButtonLabel,
                                           v17,
                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
        ++v17;
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
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x22
  __int64 viewChangeButton; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Array_o **v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *Component_object; // x27
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_object__o *v64; // x27
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x1
  __int64 v68; // x2
  System_Collections_Generic_List_object__o *v69; // x27
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t size; // w2
  int32_t v73; // w3
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int v75; // w9
  int32_t dialogType; // w8
  int32_t eventId; // w23
  Il2CppObject *MasterData_object; // x24
  GiftEntity_array *GiftListById; // x26
  System_String_o *v80; // x0
  UILabel_o *v81; // x28
  Il2CppObject *v82; // x27
  System_String_o *v83; // x0
  UILabel_o *titleNextItemLabel; // x28
  UILabel_o *titleAtLabel; // x28
  UISprite_o *eventPointBg; // x27
  int64_t v87; // x27
  __int64 v88; // x1
  GiftEntity_o *v89; // x8
  EventRewardEntity_o *v90; // x23
  int32_t v91; // w24
  const MethodInfo *v92; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v94; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x23
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  System_Int32_array *v101; // x25
  int v102; // w21
  __int64 v103; // x26
  UILabel_o *v104; // x27
  __int64 v105; // x8
  int32_t v106; // w25
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x25
  UILabel_o *getNumLabel; // x25
  __int64 v110; // x8
  System_String_o *v111; // x27
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v116; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v118; // x27
  Il2CppObject *v119; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v121; // w8
  UILabel_o *v122; // x23
  __int64 v123; // x1
  __int64 v124; // x2
  int32_t iconId; // w20
  System_Action_o *v126; // x21
  const MethodInfo *v127; // x4
  System_Action_o *v128; // x20
  struct System_Action_o *v129; // [xsp+8h] [xbp-78h]
  __int64 v130; // [xsp+10h] [xbp-70h] BYREF
  int v131; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0073C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, giftIds);
    sub_1B640C8(&AtlasManager_TypeInfo, v15);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v16);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v17);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75728136, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v21);
    sub_1B640C8(&DataManager_TypeInfo, v22);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v23);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v24);
    sub_1B640C8(&int___TypeInfo, v25);
    sub_1B640C8(&int_TypeInfo, v26);
    sub_1B640C8(&long_TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v29);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v30);
    sub_1B640C8(&LocalizationManager_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B640C8(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, v33);
    sub_1B640C8(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, v34);
    sub_1B640C8(&TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo, v35);
    sub_1B640C8(&StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v36);
    sub_1B640C8(&StringLiteral_13357/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v37);
    sub_1B640C8(&StringLiteral_13355/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v38);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v39);
    sub_1B640C8(&StringLiteral_13360/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v40);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v41);
    sub_1B640C8(&StringLiteral_13356/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v42);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v43);
    sub_1B640C8(&StringLiteral_23972/*"treasurechest_img_bg_reward"*/, v44);
    sub_1B640C8(&StringLiteral_13359/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v45);
    sub_1B640C8(&StringLiteral_13361/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v46);
    sub_1B640C8(&StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v47);
    sub_1B640C8(&StringLiteral_13358/*"TREASURE_BOX_EVENT_POINT"*/, v48);
    byte_4A0073C = 1;
  }
  v49 = sub_1B64314(TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo, giftIds, pointRewards);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_105;
  *(_QWORD *)(v49 + 16) = this;
  v129 = closeCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 16), (int32_t)this, v51, v52);
  *(_QWORD *)(v49 + 24) = giftIds;
  v53 = (System_Array_o **)(v49 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 24), (int32_t)giftIds, v54, v55);
  *(_QWORD *)(v49 + 32) = pointRewards;
  v56 = v49 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)pointRewards, v57, v58);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_105;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_object,
                       (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_105;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v64 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v64, v65, v66);
  v69 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v67,
                                                       v68);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultIconHideObjList, (int32_t)v69, v70, v71);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    v75 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v75;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
  }
  dialogType = this->fields.dialogType;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_13357/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v94, (Il2CppObject *)eventItemName, 0LL);
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
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v132.fields.z = 0.0;
                      v132.fields.y = (float)(this->fields.height + 10);
                      v132.fields.x = (float)this->fields.width;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v132, 0LL);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v96, 0LL);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0LL);
                          if ( viewChangeButton )
                          {
                            v97 = (UnityEngine_GameObject_o *)viewChangeButton;
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
                                                            v97,
                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v98 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)viewChangeButton,
                                          0LL);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v98, 0, 0LL);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0LL);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v99 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)viewChangeButton,
                                              0LL);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v99, 0, 0LL);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0LL);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v100 = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)viewChangeButton,
                                                     0LL);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v100, 1, 0LL);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
      v101 = 0LL;
      v102 = 0;
      goto LABEL_100;
    }
    eventId = treasureBoxEnt->fields.eventId;
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)viewChangeButton,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)viewChangeButton,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !viewChangeButton )
      goto LABEL_105;
    GiftListById = GiftMaster__GetGiftListById(
                     (GiftMaster_o *)viewChangeButton,
                     treasureBoxEnt->fields.extraGiftId,
                     0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_13358/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
    v81 = this->fields.titleLabel;
    v82 = (Il2CppObject *)v80;
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_13360/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v83, v82, 0LL);
    if ( !v81 )
      goto LABEL_105;
    UILabel__set_text(v81, (System_String_o *)viewChangeButton, 0LL);
    titleNextItemLabel = this->fields.titleNextItemLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( !titleNextItemLabel )
      goto LABEL_105;
    UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
    titleAtLabel = this->fields.titleAtLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13359/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
    if ( !titleAtLabel )
      goto LABEL_105;
    UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)this->fields.atNameLabel;
    if ( !viewChangeButton )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v82, 0LL);
    viewChangeButton = (__int64)this->fields.pointRewardRoot;
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
    eventPointBg = this->fields.eventPointBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
    viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( !MasterData_object
      || (v87 = viewChangeButton,
          viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)MasterData_object,
                                        eventId,
                                        viewChangeButton,
                                        0LL),
          !GiftListById) )
    {
LABEL_105:
      sub_1B64324(viewChangeButton);
    }
    if ( GiftListById->max_length )
    {
      v89 = GiftListById->m_Items[0];
      if ( v89 )
      {
        if ( v61 )
        {
          v90 = (EventRewardEntity_o *)viewChangeButton;
          viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        v61,
                                        v89->fields.objectId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( viewChangeButton )
          {
            v91 = *(_DWORD *)(viewChangeButton + 40);
            AtlasManager__SetItem(this->fields.eventPointSprite, v91, 0LL);
            AtlasManager__SetItem(this->fields.titleIcon, v91, 0LL);
            TreasureBoxDialogComponent__SetNextItemLabel(this, v87, v90, v92);
            goto LABEL_60;
          }
        }
      }
      goto LABEL_105;
    }
LABEL_106:
    sub_1B6432C(viewChangeButton, v88);
  }
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)viewChangeButton,
                                treasureBoxEnt->fields.extraGiftId,
                                0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_105;
  v103 = viewChangeButton;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this->fields.skipCollider, 1, 0LL);
  if ( !*v53 )
    goto LABEL_105;
  viewChangeButton = (__int64)this->fields.getPointRoot;
  this->fields.maxPlayCnt = (int32_t)(*v53)[1].monitor;
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v104 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13356/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !v104 )
    goto LABEL_105;
  UILabel__set_text(v104, (System_String_o *)viewChangeButton, 0LL);
  if ( !v103 )
    goto LABEL_105;
  if ( !*(_DWORD *)(v103 + 24) )
    goto LABEL_106;
  v105 = *(_QWORD *)(v103 + 32);
  if ( !v105 )
    goto LABEL_105;
  if ( !v61 )
    goto LABEL_105;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                v61,
                                *(_DWORD *)(v105 + 24),
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_105;
  v106 = *(_DWORD *)(viewChangeButton + 40);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v106, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v106, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13355/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_105;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  if ( !*(_DWORD *)(v103 + 24) )
    goto LABEL_106;
  v110 = *(_QWORD *)(v103 + 32);
  if ( !v110 )
    goto LABEL_105;
  v111 = (System_String_o *)viewChangeButton;
  v131 = this->fields.maxPlayCnt * *(_DWORD *)(v110 + 28);
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  v113 = System_String__Format(v111, v112, 0LL);
  viewChangeButton = (__int64)System_String__Concat_61375396((System_String_o *)StringLiteral_861/*"+"*/, v113, 0LL);
  if ( !getNumLabel )
    goto LABEL_105;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(treasureBoxEnt->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v116 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13361/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_105;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v130 = v116;
  v119 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v130);
  viewChangeButton = (__int64)System_String__Format(v118, v119, 0LL);
  if ( !totalNumLabel )
    goto LABEL_105;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = sub_1B64170(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_105;
  v101 = (System_Int32_array *)viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_106;
  *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
  System_Array__Copy_62330756(*v53, 0, (System_Array_o *)viewChangeButton, 1, this->fields.maxPlayCnt, 0LL);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v121 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v121;
  if ( v121 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
  }
  if ( *(_QWORD *)v56 && *(_QWORD *)(*(_QWORD *)v56 + 24LL) )
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
                                  (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75728136);
    if ( !viewChangeButton )
      goto LABEL_105;
    if ( !*(_DWORD *)(viewChangeButton + 24) )
      goto LABEL_106;
    v122 = *(UILabel_o **)(viewChangeButton + 32);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !v122 )
      goto LABEL_105;
    UILabel__set_text(v122, (System_String_o *)viewChangeButton, 0LL);
  }
  v102 = 1;
LABEL_100:
  this->fields.closeCallbackFunc = v129;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)v129, size, v73);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v102 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v126 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v123, v124);
    System_Action___ctor(
      v126,
      (Il2CppObject *)v49,
      Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__,
      0LL);
    TreasureBoxDialogComponent__SetResultData(this, v101, iconId, v126, v127);
  }
  else
  {
    v128 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v123, v124);
    System_Action___ctor(
      v128,
      (Il2CppObject *)v49,
      Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v128, 0, 0LL);
  }
}


void __fastcall TreasureBoxDialogComponent__SetIcon(
        TreasureBoxDialogComponent_o *this,
        GiftEntity_o *gift,
        BattleDropItem_o *pointRewards,
        const MethodInfo *method)
{
  TreasureBoxDialogComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t *p_originalNum; // x20
  int32_t originalNum; // t1
  int32_t *p_type; // x9
  int32_t *p_num; // x8
  int32_t *p_objectId; // x10
  int v16; // w24
  int32_t v17; // w22
  int32_t v18; // w21
  Il2CppObject *prefabResultItem; // x20
  TreasureBoxDialogComponent_o *v20; // x20
  __int64 v21; // x1
  TreasureBoxDialogComponent_o *v22; // x23
  int32_t v23; // w3
  ItemIconComponent_o *v24; // x23
  TreasureBoxDialogComponent_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A00743 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (TreasureBoxDialogComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A00743 = 1;
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
  v16 = *p_num;
  v17 = *p_type;
  v18 = *p_objectId;
  prefabResultItem = (Il2CppObject *)v6->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           prefabResultItem,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v20 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  v22 = this;
  if ( !byte_49F7111 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7111 = 1;
  }
  if ( !v22 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v22,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_31;
  v33.fields.x = v6->fields.iconScale;
  v33.fields.y = v33.fields.x;
  v33.fields.z = v33.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v20,
                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v23 = v16 <= 1 ? -1 : v16;
  v24 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v17, v18, v23, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v25, v24, v18, v26);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  v29 = *(_QWORD *)&this->fields.m_CachedPtr;
  v30 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v29 )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = v29 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v32 + 32) = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v20, v27, v28);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_31:
    sub_1B64324(this);
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
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x8
  GiftMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  const MethodInfo *v13; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  TreasureBoxDialogComponent_o *v15; // x22
  unsigned __int64 v16; // x24

  v6 = this;
  if ( (byte_4A00742 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, giftIds);
    this = (TreasureBoxDialogComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A00742 = 1;
  }
  if ( pointRewards )
  {
    if ( !giftIds )
    {
      v8 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        while ( v9 < (unsigned int)v8 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v9], method);
          LODWORD(v8) = pointRewards->max_length;
          if ( (__int64)++v9 >= (int)v8 )
            goto LABEL_9;
        }
LABEL_23:
        sub_1B6432C(this, giftIds);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_1B64324(this);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v10 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = (GiftMaster_o *)this;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_23;
        if ( !v11 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v11, giftIds->m_Items[v12 + 1], 0LL);
        if ( !this )
          goto LABEL_24;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v15 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
LABEL_21:
        LODWORD(v10) = giftIds->max_length;
        if ( (__int64)++v12 >= (int)v10 )
          return;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)m_CancellationTokenSource )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v15->fields.basePanel + v16), 0LL, v13);
        LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
        if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *nextItemNameLabel; // x0
  char v16; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v19; // x1
  int64_t v20; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A00744 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, userEventPoint);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_1B640C8(&StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_1B640C8(&StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_4A00744 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v19 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B64324(nextItemNameLabel);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v20 = eventRewardEnt->fields.point - userEventPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  nextItemNameLabel = System_String__Format(v13, v14, 0LL);
  if ( !v12 )
    goto LABEL_20;
  UILabel__set_text(v12, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v16 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v16 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v19 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v19, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00747 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A00747 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1B64324(Instance);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  unsigned __int64 v16; // x29
  int v17; // w8
  __int64 v18; // x25
  unsigned int v19; // w19
  Il2CppObject *prefabResultItem; // x26
  int32_t *v21; // x28
  UnityEngine_GameObject_o *v22; // x26
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x27
  ItemIconComponent_o *v25; // x27
  int32_t v26; // w3
  TreasureBoxDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  Il2CppObject *v35; // x27
  UnityEngine_GameObject_o *v36; // x27
  UnityEngine_Transform_o *transform; // x28
  int v38; // s0
  ItemIconComponent_o *v41; // x26
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  __int64 v48; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0073F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A0073F = 1;
  }
  if ( resultIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_54:
      sub_1B64324(Instance);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v15 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      v48 = Instance;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)v15 )
          goto LABEL_55;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v16 + 1], 0LL);
        if ( !Instance )
          goto LABEL_54;
        v17 = *(_DWORD *)(Instance + 24);
        v18 = Instance;
        if ( v17 >= 1 )
          break;
LABEL_51:
        Instance = v48;
        ++v16;
        LODWORD(v15) = resultIds->max_length;
        if ( (__int64)v16 >= (int)v15 )
          goto LABEL_52;
      }
      v19 = 0;
      while ( v19 < v17 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v21 = *(int32_t **)(v18 + 8LL * (int)v19 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v22 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        v24 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_49F7111 )
        {
          Instance = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
          byte_49F7111 = 1;
        }
        if ( !v24 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v51.fields.x = this->fields.iconScale;
        v51.fields.y = v51.fields.x;
        v51.fields.z = v51.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v51, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v22,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v21 )
          goto LABEL_54;
        v25 = (ItemIconComponent_o *)Instance;
        if ( v21[7] <= 1 )
          v26 = -1;
        else
          v26 = v21[7];
        if ( !v16 )
          v26 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_54;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Instance, v21[5], v21[6], v26, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v27, v25, v21[6], v28);
        Instance = (__int64)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_54;
        v31 = *(_QWORD *)(Instance + 16);
        v32 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v31 )
          goto LABEL_54;
        v33 = *(int *)(Instance + 24);
        if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v22,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * v33;
          *(_DWORD *)(Instance + 24) = v33 + 1;
          *(_QWORD *)(v34 + 32) = v22;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)v22, v29, v30);
        }
        v35 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              v35,
                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v36 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v36, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_54;
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !transform )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v52.fields.x = this->fields.iconScale;
        v52.fields.y = v52.fields.x;
        v52.fields.z = v52.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v52, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v36,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_54;
        v41 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v36, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v41, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = (__int64)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_54;
        v44 = *(_QWORD *)(Instance + 16);
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v44 )
          goto LABEL_54;
        v46 = *(int *)(Instance + 24);
        if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v36,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * v46;
          *(_DWORD *)(Instance + 24) = v46 + 1;
          *(_QWORD *)(v47 + 32) = v36;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v36, v42, v43);
        }
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_54;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = (__int64)this->fields.iconListRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_54;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v17 = *(_DWORD *)(v18 + 24);
        if ( (int)++v19 >= v17 )
          goto LABEL_51;
      }
LABEL_55:
      sub_1B6432C(Instance, v14);
    }
LABEL_52:
    ActionExtensions__Call(callBack, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartDisp(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00740 & 1) == 0 )
  {
    sub_1B640C8(&TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo, method);
    byte_4A00740 = 1;
  }
  v4 = sub_1B64314(TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A00741 & 1) == 0 )
  {
    sub_1B640C8(&TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo, rewardAction);
    byte_4A00741 = 1;
  }
  v5 = sub_1B64314(TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo, rewardAction, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)rewardAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A00748 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00748 = 1;
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
  __int64 v2; // x2
  int32_t v3; // w3
  TreasureBoxDialogComponent__StartDisp_d__59_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v27; // w21
  UIProgressBar_o *v28; // x20
  float value; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w8
  System_Collections_Generic_List_object__o *v34; // x22
  TreasureBoxDialogComponent__StartDisp_d__59_o **p_listRewardAction_5__2; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  int v40; // w23
  __int64 v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 _2__current_low; // x10
  __int64 v47; // x8
  int _2__current; // w9
  int32_t v49; // w22
  TreasureBoxDialogComponent__StartDisp_d__59_o *v50; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v52; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  int32_t playCnt; // w8
  int32_t v58; // w21
  int32_t v59; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A0074D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v18);
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v19);
    byte_4A0074D = 1;
  }
  memset(&v65, 0, sizeof(v65));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v21 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v21, 0.3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v21, v22, v23);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v4->fields._listRewardAction_5__2;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.scrollBar;
      v27 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v28 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v28, (float)(1.0 / (float)((float)((float)v27 * 0.5) + -1.0)) + value, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v31, v32);
      v33 = 4;
      goto LABEL_76;
    case 4:
      v4->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v4->fields._listRewardAction_5__2 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, 0, v2, v3);
LABEL_19:
    v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    v4->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v34;
    p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__59_o **)&v4->fields._listRewardAction_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, (int32_t)v34, v36, v37);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v40 = 0;
      do
      {
        if ( v40 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v41 = sub_1B64314(TreasureBoxDialogComponent_RewardAction_TypeInfo, v38, v39);
        System_Object___ctor((Il2CppObject *)v41, 0LL);
        if ( !v41 )
          goto LABEL_59;
        *(_DWORD *)(v41 + 16) = v40;
        *(_DWORD *)(v41 + 20) = v40 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v44 = *(_QWORD *)&this->fields.__1__state;
        v45 = Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v44 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v41,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v47 + 32) = v41;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), v41, v42, v43);
        }
        ++v40;
      }
      while ( v40 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v49 = 0;
      do
      {
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)this,
                                                                  v49,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v50 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v49,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        started = TreasureBoxDialogComponent__StartRewardAction(
                    _4__this,
                    (TreasureBoxDialogComponent_RewardAction_o *)Item,
                    v52);
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                  started,
                                                                  0LL);
        if ( !v50 )
          goto LABEL_59;
        v50->fields.__4__this = (struct TreasureBoxDialogComponent_o *)this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.__4__this, (int32_t)this, v54, v55);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v49 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              LODWORD(this->fields.__2__current) - 1,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
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
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v4->fields._listRewardAction_5__2;
      if ( this )
      {
        v58 = 0;
        while ( v58 < SLODWORD(this->fields.__2__current) )
        {
          this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v58,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_69113628(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v4->fields._listRewardAction_5__2;
            ++v58;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v59 = 0;
          while ( v59 < SLODWORD(this->fields.__2__current) )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v59,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
              ++v59;
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
                                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
                    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v65,
                            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v65.fields._current;
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
                    &v65,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1B64324(this);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v62 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v56, v2);
      UnityEngine_WaitForSeconds___ctor(v62, scrollWait, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v62;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v62, v63, v64);
      v33 = 3;
      goto LABEL_76;
    }
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v2, v3);
  v33 = 2;
LABEL_76:
  *(_DWORD *)&p__2__current[-1].fields.isMine = v33;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_TreasureBoxDialogComponent__StartDisp_d__59_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v10; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v11; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *v14; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v22; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v23; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v24; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v25; // x21
  int v26; // s0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 _2__current_low; // x10
  __int64 v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  float v37; // s8
  UnityEngine_WaitForSeconds_o *v38; // x20
  ServantStatusBattleListViewItem_o *v39; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4A0074E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)sub_1B640C8(&StringLiteral_18792/*"ef_treasure_drop"*/, v6);
    byte_4A0074E = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v3->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        rewardAction->fields.playCnt,
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v10 = v3->fields.rewardAction;
    if ( v10 )
    {
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)this,
                                                                          v10->fields.playCnt,
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v11 = v3->fields.rewardAction;
          if ( v11 )
          {
            result = 0;
            v11->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_39:
    sub_1B64324(this);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v3->fields._i_5__2;
    v3->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v3->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v3->fields._i_5__2 = 0;
  }
  v14 = v3->fields.rewardAction;
  if ( !v14 || !_4__this )
    goto LABEL_39;
  if ( _1__state < v14->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v16 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v16, itemDispWaitTime, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v16;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)v16, v18, v19);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v14->fields.playCnt,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                    (System_String_o *)StringLiteral_18792/*"ef_treasure_drop"*/,
                                                                    transform,
                                                                    v22);
  if ( !this )
    goto LABEL_39;
  v23 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  v24 = v3->fields.rewardAction;
  if ( !v24 )
    goto LABEL_39;
  v25 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v24->fields.playCnt,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v25 )
    goto LABEL_39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)v23,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  v42.fields.x = 1.25;
  v42.fields.y = 1.25;
  v42.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v42, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.fallEffectObjList;
  if ( !this )
    goto LABEL_39;
  v31 = *(_QWORD *)&this->fields.__1__state;
  v32 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v31 )
    goto LABEL_39;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v23,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v34 + 32) = v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)v23, v29, v30);
  }
  v37 = _4__this->fields.itemDispWaitTime;
  v38 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v35, v36);
  UnityEngine_WaitForSeconds___ctor(v38, v37, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v38;
  v39 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(v39, (int32_t)v38, v40, v41);
  *(_DWORD *)&v39[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_TreasureBoxDialogComponent__StartRewardAction_d__60_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  TreasureBoxDialogComponent___c__DisplayClass55_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  BaseDialog_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A0074A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1B640C8(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__,
                                                                   v4);
    byte_4A0074A = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = (BaseDialog_o *)v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !_4__this )
    sub_1B64324(this);
  BaseDialog__Open(_4__this, _9__2, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_4A0074C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4A0074C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v2),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4A0074B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12892/*"StartDisp"*/, method);
    byte_4A0074B = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_12892/*"StartDisp"*/, 0LL);
}