void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Color_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x1

  if ( (byte_4B11336 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9);
    byte_4B11336 = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  v10 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v10;
  sub_1BCA784(&this->fields.viewChangeButtonLabelEffectColors, v10);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  sub_1BCA784(&this->fields.fallEffectObjList, v14);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v15);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__ClickSkip(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *fallEffectObjList; // x0
  int size; // w22
  int32_t v10; // w20
  __int64 v11; // x1
  Il2CppObject *Item; // x21
  __int64 v13; // x1

  if ( (byte_4B11332 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B11332 = 1;
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
        v10 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   fallEffectObjList,
                   v10,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
            UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
          }
          if ( size == ++v10 )
            break;
          fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_1BCAA3C(0LL, v13);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B1132B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TreasureBoxDialogComponent_EndClose__, v5, v6);
    byte_4B1132B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickCloseButton(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_4B1132A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_TreasureBoxDialogComponent_OnClickCloseButton__, v4, v5);
    byte_4B1132A = 1;
  }
  v6 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(skipCollider, v8);
  }
  CommonUI__CloseTreasureBoxDialog((CommonUI_o *)skipCollider, this->fields.closeCallbackFunc, 0LL);
}


void __fastcall TreasureBoxDialogComponent__OnClickSwitchShowMode(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v13; // x1
  _BOOL4 isShowPossessionNum; // w8
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w10
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v21; // w20
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11333 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__, v8, v9);
    byte_4B11333 = 1;
  }
  v10 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_18:
    sub_1BCAA3C(viewChangeButtonLabel, v13);
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
    sub_1BCAA44(viewChangeButtonLabel, v13);
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
  v22.fields.a = *p_r;
  v22.fields.b = *p_a;
  v22.fields.g = *p_b;
  v22.fields.r = *p_g;
  UILabel__set_effectColor(viewChangeButtonLabel, v22, 0LL);
  viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
  if ( !viewChangeButtonLabel )
    goto LABEL_18;
  v21 = 0;
  while ( v21 < SLODWORD(viewChangeButtonLabel->fields.m_CancellationTokenSource) )
  {
    viewChangeButtonLabel = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)viewChangeButtonLabel,
                                           v21,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButtonLabel )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButtonLabel,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButtonLabel = (UILabel_o *)this->fields.resultItemObjList;
        ++v21;
        if ( viewChangeButtonLabel )
          continue;
      }
    }
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  Il2CppObject *v83; // x22
  __int64 viewChangeButton; // x0
  __int64 v85; // x1
  System_Array_o **p_monitor; // x24
  Il2CppObject *v87; // x23
  __int64 v88; // x1
  Il2CppObject *Component_object; // x27
  __int64 v90; // x1
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x25
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_List_object__o *v96; // x27
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Collections_Generic_List_object__o *v100; // x27
  __int64 v101; // x1
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v104; // w9
  int32_t dialogType; // w8
  int32_t eventId; // w23
  Il2CppObject *MasterData_object; // x24
  __int64 v108; // x1
  GiftEntity_array *GiftListById; // x26
  System_String_o *v110; // x0
  UILabel_o *v111; // x28
  Il2CppObject *v112; // x27
  System_String_o *v113; // x0
  UILabel_o *titleNextItemLabel; // x28
  UILabel_o *titleAtLabel; // x28
  __int64 v116; // x1
  UISprite_o *eventPointBg; // x27
  int64_t v118; // x27
  GiftEntity_o *v119; // x8
  EventRewardEntity_o *v120; // x23
  int32_t v121; // w24
  const MethodInfo *v122; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v124; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x23
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_GameObject_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  System_Int32_array *v131; // x25
  int v132; // w21
  __int64 v133; // x26
  __int64 v134; // x1
  UILabel_o *v135; // x27
  __int64 v136; // x8
  int32_t v137; // w25
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x25
  UILabel_o *getNumLabel; // x25
  __int64 v141; // x8
  System_String_o *v142; // x27
  Il2CppObject *v143; // x0
  System_String_o *v144; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v147; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v149; // x27
  Il2CppObject *v150; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v152; // w8
  UILabel_o *v153; // x23
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  int32_t iconId; // w20
  System_Action_o *v158; // x21
  const MethodInfo *v159; // x4
  System_Action_o *v160; // x20
  struct System_Action_o *v161; // [xsp+8h] [xbp-78h]
  __int64 v162; // [xsp+10h] [xbp-70h] BYREF
  int v163; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11329 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, giftIds, pointRewards);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v27, v28);
    sub_1BCA7E0(&DataManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v33, v34);
    sub_1BCA7E0(&int___TypeInfo, v35, v36);
    sub_1BCA7E0(&int_TypeInfo, v37, v38);
    sub_1BCA7E0(&long_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v45, v46);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, v51, v52);
    sub_1BCA7E0(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, v53, v54);
    sub_1BCA7E0(&TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_13589/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_13587/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_13592/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_13588/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_13591/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_13593/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_13590/*"TREASURE_BOX_EVENT_POINT"*/, v81, v82);
    byte_4B11329 = 1;
  }
  v83 = (Il2CppObject *)sub_1BCAA2C(
                          TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo,
                          giftIds,
                          pointRewards,
                          *(_QWORD *)&type);
  System_Object___ctor(v83, 0LL);
  if ( !v83 )
    goto LABEL_105;
  v83[1].klass = (Il2CppClass *)this;
  v161 = closeCallback;
  sub_1BCA784(&v83[1], this);
  v83[1].monitor = giftIds;
  p_monitor = (System_Array_o **)&v83[1].monitor;
  sub_1BCA784(&v83[1].monitor, giftIds);
  v83[2].klass = (Il2CppClass *)pointRewards;
  v87 = v83 + 2;
  sub_1BCA784(&v83[2], pointRewards);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_105;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v88);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_object,
                       (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_105;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v96 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v93,
                                                       v94,
                                                       v95);
  System_Collections_Generic_List_object____ctor(
    v96,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v96;
  sub_1BCA784(&this->fields.resultItemObjList, v96);
  v100 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GameObject__TypeInfo,
                                                        v97,
                                                        v98,
                                                        v99);
  System_Collections_Generic_List_object____ctor(
    v100,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v100;
  sub_1BCA784(&this->fields.resultIconHideObjList, v100);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    v104 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v104;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
  }
  dialogType = this->fields.dialogType;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101);
    v124 = LocalizationManager__Get((System_String_o *)StringLiteral_13589/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v124, (Il2CppObject *)eventItemName, 0LL);
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
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v164.fields.z = 0.0;
                      v164.fields.y = (float)(this->fields.height + 10);
                      v164.fields.x = (float)this->fields.width;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v164, 0LL);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v126, 0LL);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0LL);
                          if ( viewChangeButton )
                          {
                            v127 = (UnityEngine_GameObject_o *)viewChangeButton;
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
                                                            v127,
                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v128 = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)viewChangeButton,
                                           0LL);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v128, 0, 0LL);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0LL);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v129 = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)viewChangeButton,
                                               0LL);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v129, 0, 0LL);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0LL);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v130 = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)viewChangeButton,
                                                     0LL);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v130, 1, 0LL);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
      v131 = 0LL;
      v132 = 0;
      goto LABEL_100;
    }
    eventId = treasureBoxEnt->fields.eventId;
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)viewChangeButton,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardMaster___);
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)viewChangeButton,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !viewChangeButton )
      goto LABEL_105;
    GiftListById = GiftMaster__GetGiftListById(
                     (GiftMaster_o *)viewChangeButton,
                     treasureBoxEnt->fields.extraGiftId,
                     0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_13590/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
    v111 = this->fields.titleLabel;
    v112 = (Il2CppObject *)v110;
    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_13592/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v113, v112, 0LL);
    if ( !v111 )
      goto LABEL_105;
    UILabel__set_text(v111, (System_String_o *)viewChangeButton, 0LL);
    titleNextItemLabel = this->fields.titleNextItemLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( !titleNextItemLabel )
      goto LABEL_105;
    UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
    titleAtLabel = this->fields.titleAtLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13591/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
    if ( !titleAtLabel )
      goto LABEL_105;
    UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)this->fields.atNameLabel;
    if ( !viewChangeButton )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v112, 0LL);
    viewChangeButton = (__int64)this->fields.pointRewardRoot;
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
    eventPointBg = this->fields.eventPointBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v116);
    AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
    viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( !MasterData_object
      || (v118 = viewChangeButton,
          viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)MasterData_object,
                                        eventId,
                                        viewChangeButton,
                                        0LL),
          !GiftListById) )
    {
LABEL_105:
      sub_1BCAA3C(viewChangeButton, v85);
    }
    if ( GiftListById->max_length )
    {
      v119 = GiftListById->m_Items[0];
      if ( v119 )
      {
        if ( v92 )
        {
          v120 = (EventRewardEntity_o *)viewChangeButton;
          viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        v92,
                                        v119->fields.objectId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( viewChangeButton )
          {
            v121 = *(_DWORD *)(viewChangeButton + 40);
            AtlasManager__SetItem(this->fields.eventPointSprite, v121, 0LL);
            AtlasManager__SetItem(this->fields.titleIcon, v121, 0LL);
            TreasureBoxDialogComponent__SetNextItemLabel(this, v118, v120, v122);
            goto LABEL_60;
          }
        }
      }
      goto LABEL_105;
    }
LABEL_106:
    sub_1BCAA44(viewChangeButton, v85);
  }
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)viewChangeButton,
                                treasureBoxEnt->fields.extraGiftId,
                                0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_105;
  v133 = viewChangeButton;
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
  v135 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v134);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13588/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !v135 )
    goto LABEL_105;
  UILabel__set_text(v135, (System_String_o *)viewChangeButton, 0LL);
  if ( !v133 )
    goto LABEL_105;
  if ( !*(_DWORD *)(v133 + 24) )
    goto LABEL_106;
  v136 = *(_QWORD *)(v133 + 32);
  if ( !v136 )
    goto LABEL_105;
  if ( !v92 )
    goto LABEL_105;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                v92,
                                *(_DWORD *)(v136 + 24),
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_105;
  v137 = *(_DWORD *)(viewChangeButton + 40);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v85);
  AtlasManager__SetItem(totalEventPointIcon, v137, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v137, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13587/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_105;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  if ( !*(_DWORD *)(v133 + 24) )
    goto LABEL_106;
  v141 = *(_QWORD *)(v133 + 32);
  if ( !v141 )
    goto LABEL_105;
  v142 = (System_String_o *)viewChangeButton;
  v163 = this->fields.maxPlayCnt * *(_DWORD *)(v141 + 28);
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v163);
  v144 = System_String__Format(v142, v143, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v144, 0LL);
  if ( !getNumLabel )
    goto LABEL_105;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(treasureBoxEnt->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v147 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13593/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_105;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v149 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v162 = v147;
  v150 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v162);
  viewChangeButton = (__int64)System_String__Format(v149, v150, 0LL);
  if ( !totalNumLabel )
    goto LABEL_105;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = sub_1BCA888(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_105;
  v131 = (System_Int32_array *)viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_106;
  *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
  System_Array__Copy_63356916(*p_monitor, 0, (System_Array_o *)viewChangeButton, 1, this->fields.maxPlayCnt, 0LL);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v152 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v152;
  if ( v152 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
  }
  if ( v87->klass && v87->klass->_1.namespaze )
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
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
    if ( !viewChangeButton )
      goto LABEL_105;
    if ( !*(_DWORD *)(viewChangeButton + 24) )
      goto LABEL_106;
    v153 = *(UILabel_o **)(viewChangeButton + 32);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !v153 )
      goto LABEL_105;
    UILabel__set_text(v153, (System_String_o *)viewChangeButton, 0LL);
  }
  v132 = 1;
LABEL_100:
  this->fields.closeCallbackFunc = v161;
  sub_1BCA784(&this->fields.closeCallbackFunc, v161);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v132 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v158 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v154, v155, v156);
    System_Action___ctor(v158, v83, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, 0LL);
    TreasureBoxDialogComponent__SetResultData(this, v131, iconId, v158, v159);
  }
  else
  {
    v160 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v154, v155, v156);
    System_Action___ctor(v160, v83, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v160, 0, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t *p_originalNum; // x20
  int32_t originalNum; // t1
  int32_t *p_type; // x9
  int32_t *p_num; // x8
  int32_t *p_objectId; // x10
  int v20; // w24
  int32_t v21; // w22
  int32_t v22; // w21
  Il2CppObject *prefabResultItem; // x20
  TreasureBoxDialogComponent_o *v24; // x20
  __int64 v25; // x2
  TreasureBoxDialogComponent_o *v26; // x23
  int32_t v27; // w3
  ItemIconComponent_o *v28; // x23
  TreasureBoxDialogComponent_o *v29; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B11330 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift, pointRewards);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    this = (TreasureBoxDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B11330 = 1;
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
  v20 = *p_num;
  v21 = *p_type;
  v22 = *p_objectId;
  prefabResultItem = (Il2CppObject *)v6->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           prefabResultItem,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v24 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
  v26 = this;
  if ( !byte_4B109C1 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, gift, v25);
    byte_4B109C1 = 1;
  }
  if ( !v26 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v26,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
  if ( !this )
    goto LABEL_31;
  v35.fields.x = v6->fields.iconScale;
  v35.fields.y = v35.fields.x;
  v35.fields.z = v35.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v24,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v27 = v20 <= 1 ? -1 : v20;
  v28 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, v21, v22, v27, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v29, v28, v22, v30);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  v31 = *(_QWORD *)&this->fields.m_CachedPtr;
  v32 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v31 )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v34 + 32) = v24;
    sub_1BCA784(v34 + 32, v24);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(this, gift);
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
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x8
  GiftMaster_o *v12; // x21
  unsigned __int64 v13; // x23
  const MethodInfo *v14; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  TreasureBoxDialogComponent_o *v16; // x22
  unsigned __int64 v17; // x24

  v6 = this;
  if ( (byte_4B1132F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, giftIds, pointRewards);
    this = (TreasureBoxDialogComponent_o *)sub_1BCA7E0(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v7,
                                             v8);
    byte_4B1132F = 1;
  }
  if ( pointRewards )
  {
    if ( !giftIds )
    {
      v9 = *(_QWORD *)&pointRewards->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        while ( v10 < (unsigned int)v9 )
        {
          TreasureBoxDialogComponent__SetIcon(v6, 0LL, pointRewards->m_Items[v10], method);
          LODWORD(v9) = pointRewards->max_length;
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_9;
        }
LABEL_23:
        sub_1BCAA44(this, giftIds);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_1BCAA3C(this, giftIds);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    v11 = *(_QWORD *)&giftIds->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = (GiftMaster_o *)this;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v11 )
          goto LABEL_23;
        if ( !v12 )
          goto LABEL_24;
        this = (TreasureBoxDialogComponent_o *)GiftMaster__GetGiftListById(v12, giftIds->m_Items[v13 + 1], 0LL);
        if ( !this )
          goto LABEL_24;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v16 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
LABEL_21:
        LODWORD(v11) = giftIds->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          return;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)m_CancellationTokenSource )
      {
        TreasureBoxDialogComponent__SetIcon(v6, *((GiftEntity_o **)&v16->fields.basePanel + v17), 0LL, v14);
        LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
        if ( (__int64)++v17 >= (int)m_CancellationTokenSource )
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
  System_String_o *nextItemNameLabel; // x0
  __int64 v22; // x1
  char v23; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v26; // x1
  int64_t v27; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B11331 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, userEventPoint, eventRewardEnt);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B11331 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v26 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(nextItemNameLabel, v22);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v18 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v27 = eventRewardEnt->fields.point - userEventPoint;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
  nextItemNameLabel = System_String__Format(v19, v20, 0LL);
  if ( !v18 )
    goto LABEL_20;
  UILabel__set_text(v18, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v23 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v23 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v26 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B11334 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
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
  __int64 v18; // x2
  __int64 Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  unsigned __int64 v22; // x29
  int v23; // w8
  __int64 v24; // x25
  unsigned int v25; // w19
  Il2CppObject *prefabResultItem; // x26
  int32_t *v27; // x28
  UnityEngine_GameObject_o *v28; // x26
  __int64 v29; // x2
  UnityEngine_Transform_o *v30; // x27
  ItemIconComponent_o *v31; // x27
  int32_t v32; // w3
  TreasureBoxDialogComponent_o *v33; // x0
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  __int64 v39; // x1
  Il2CppObject *v40; // x27
  UnityEngine_GameObject_o *v41; // x27
  UnityEngine_Transform_o *transform; // x28
  int v43; // s0
  ItemIconComponent_o *v46; // x26
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  __int64 v51; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1132C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds, *(_QWORD *)&treasureIconId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1132C = 1;
  }
  if ( resultIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_54:
      sub_1BCAA3C(Instance, v20);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    v21 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      v51 = Instance;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v21 )
          goto LABEL_55;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, resultIds->m_Items[v22 + 1], 0LL);
        if ( !Instance )
          goto LABEL_54;
        v23 = *(_DWORD *)(Instance + 24);
        v24 = Instance;
        if ( v23 >= 1 )
          break;
LABEL_51:
        Instance = v51;
        ++v22;
        LODWORD(v21) = resultIds->max_length;
        if ( (__int64)v22 >= (int)v21 )
          goto LABEL_52;
      }
      v25 = 0;
      while ( v25 < v23 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v27 = *(int32_t **)(v24 + 8LL * (int)v25 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v28 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
        v30 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4B109C1 )
        {
          Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v29);
          byte_4B109C1 = 1;
        }
        if ( !v30 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v54.fields.x = this->fields.iconScale;
        v54.fields.y = v54.fields.x;
        v54.fields.z = v54.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v54, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v28,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v27 )
          goto LABEL_54;
        v31 = (ItemIconComponent_o *)Instance;
        if ( v27[7] <= 1 )
          v32 = -1;
        else
          v32 = v27[7];
        if ( !v22 )
          v32 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_54;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v27[5], v27[6], v32, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v33, v31, v27[6], v34);
        Instance = (__int64)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_54;
        v35 = *(_QWORD *)(Instance + 16);
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v35 )
          goto LABEL_54;
        v37 = *(int *)(Instance + 24);
        if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v28,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = v35 + 8 * v37;
          *(_DWORD *)(Instance + 24) = v37 + 1;
          *(_QWORD *)(v38 + 32) = v28;
          sub_1BCA784(v38 + 32, v28);
        }
        v40 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              v40,
                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v41 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v41, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v28, 0LL);
        if ( !Instance )
          goto LABEL_54;
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !transform )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v55.fields.x = this->fields.iconScale;
        v55.fields.y = v55.fields.x;
        v55.fields.z = v55.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v55, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v41,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_54;
        v46 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 0LL);
        UnityEngine_GameObject__SetActive(v41, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v46, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = (__int64)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_54;
        v47 = *(_QWORD *)(Instance + 16);
        v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v47 )
          goto LABEL_54;
        v49 = *(int *)(Instance + 24);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v41,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * v49;
          *(_DWORD *)(Instance + 24) = v49 + 1;
          *(_QWORD *)(v50 + 32) = v41;
          sub_1BCA784(v50 + 32, v41);
        }
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_54;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v23 = *(_DWORD *)(v24 + 24);
        if ( (int)++v25 >= v23 )
          goto LABEL_51;
      }
LABEL_55:
      sub_1BCAA44(Instance, v20);
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
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B1132D & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo, method, v2);
    byte_4B1132D = 1;
  }
  v5 = sub_1BCAA2C(TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B1132E & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo, rewardAction, method);
    byte_4B1132E = 1;
  }
  v6 = sub_1BCAA2C(TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo, rewardAction, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_1BCA784(v6 + 40, rewardAction);
  return (System_Collections_IEnumerator_o *)v6;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B11335 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11335 = 1;
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
  __int64 v3; // x3
  TreasureBoxDialogComponent__StartDisp_d__59_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
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
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v36; // x20
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v40; // w21
  UIProgressBar_o *v41; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v44; // w8
  System_Collections_Generic_List_object__o *v45; // x22
  TreasureBoxDialogComponent__StartDisp_d__59_o **p_listRewardAction_5__2; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  int v49; // w23
  __int64 v50; // x22
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 _2__current_low; // x10
  __int64 v54; // x8
  int _2__current; // w9
  int32_t v56; // w22
  TreasureBoxDialogComponent__StartDisp_d__59_o *v57; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v59; // x2
  System_Collections_IEnumerator_o *started; // x0
  __int64 v61; // x2
  __int64 v62; // x3
  int32_t playCnt; // w8
  int32_t v64; // w21
  int32_t v65; // w19
  __int64 v66; // x1
  Il2CppObject *current; // x19
  __int64 v68; // x1
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v70; // x20
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B1133A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v31, v32);
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v33, v34);
    byte_4B1133A = 1;
  }
  memset(&v71, 0, sizeof(v71));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v36 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v36, 0.3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v36;
      sub_1BCA784(&v4->fields.__2__current, v36);
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
                                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.scrollBar;
      v40 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v41 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v41, (float)(1.0 / (float)((float)((float)v40 * 0.5) + -1.0)) + value, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL);
      v44 = 4;
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
    sub_1BCA784(&v4->fields._listRewardAction_5__2, 0LL);
LABEL_19:
    v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    v4->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v45;
    p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__59_o **)&v4->fields._listRewardAction_5__2;
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1BCA784(&v4->fields._listRewardAction_5__2, v45);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v49 = 0;
      do
      {
        if ( v49 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v50 = sub_1BCAA2C(TreasureBoxDialogComponent_RewardAction_TypeInfo, method, v47, v48);
        System_Object___ctor((Il2CppObject *)v50, 0LL);
        if ( !v50 )
          goto LABEL_59;
        *(_DWORD *)(v50 + 16) = v49;
        *(_DWORD *)(v50 + 20) = v49 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v51 = *(_QWORD *)&this->fields.__1__state;
        v52 = Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v51 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v51 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v50,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = v51 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v54 + 32) = v50;
          sub_1BCA784(v54 + 32, v50);
        }
        ++v49;
      }
      while ( v49 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v56 = 0;
      do
      {
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)this,
                                                                  v56,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v57 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v56,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        started = TreasureBoxDialogComponent__StartRewardAction(
                    _4__this,
                    (TreasureBoxDialogComponent_RewardAction_o *)Item,
                    v59);
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                  started,
                                                                  0LL);
        if ( !v57 )
          goto LABEL_59;
        v57->fields.__4__this = (struct TreasureBoxDialogComponent_o *)this;
        sub_1BCA784(&v57->fields.__4__this, this);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v56 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              LODWORD(this->fields.__2__current) - 1,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
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
        v64 = 0;
        while ( v64 < SLODWORD(this->fields.__2__current) )
        {
          this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v64,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70140136(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v4->fields._listRewardAction_5__2;
            ++v64;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v65 = 0;
          while ( v65 < SLODWORD(this->fields.__2__current) )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v65,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
              ++v65;
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
                                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
                    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v71,
                            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v71.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
                      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v71,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1BCAA3C(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v70 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v61, v62);
      UnityEngine_WaitForSeconds___ctor(v70, scrollWait, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v70;
      p__2__current = &v4->fields.__2__current;
      sub_1BCA784(p__2__current, v70);
      v44 = 3;
      goto LABEL_76;
    }
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL);
  v44 = 2;
LABEL_76:
  *((_DWORD *)p__2__current - 2) = v44;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TreasureBoxDialogComponent__StartDisp_d__59_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v14; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v15; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *v18; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v24; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v25; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v26; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v27; // x21
  int v28; // s0
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 _2__current_low; // x10
  __int64 v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  float v38; // s8
  UnityEngine_WaitForSeconds_o *v39; // x20
  Il2CppObject **v40; // x19
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1133B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v7, v8);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)sub_1BCA7E0(&StringLiteral_19059/*"ef_treasure_drop"*/, v9, v10);
    byte_4B1133B = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v4->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_39;
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)this,
                                                                        rewardAction->fields.playCnt,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v14 = v4->fields.rewardAction;
    if ( v14 )
    {
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)this,
                                                                          v14->fields.playCnt,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v15 = v4->fields.rewardAction;
          if ( v15 )
          {
            result = 0;
            v15->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v4->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = 0;
  }
  v18 = v4->fields.rewardAction;
  if ( !v18 || !_4__this )
    goto LABEL_39;
  if ( _1__state < v18->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v20 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v20, itemDispWaitTime, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v20;
    p__2__current = &v4->fields.__2__current;
    sub_1BCA784(p__2__current, v20);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v18->fields.playCnt,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                    (System_String_o *)StringLiteral_19059/*"ef_treasure_drop"*/,
                                                                    transform,
                                                                    v24);
  if ( !this )
    goto LABEL_39;
  v25 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  v26 = v4->fields.rewardAction;
  if ( !v26 )
    goto LABEL_39;
  v27 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v26->fields.playCnt,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v27 )
    goto LABEL_39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)v25,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  v41.fields.x = 1.25;
  v41.fields.y = 1.25;
  v41.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v41, 0LL);
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
      (Il2CppObject *)v25,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v34 + 32) = v25;
    sub_1BCA784(v34 + 32, v25);
  }
  v38 = _4__this->fields.itemDispWaitTime;
  v39 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v35, v36, v37);
  UnityEngine_WaitForSeconds___ctor(v39, v38, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v39;
  v40 = &v4->fields.__2__current;
  sub_1BCA784(v40, v39);
  *((_DWORD *)v40 - 2) = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TreasureBoxDialogComponent__StartRewardAction_d__60_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4B11337 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1BCA7E0(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__,
                                                                   v5,
                                                                   v6);
    byte_4B11337 = 1;
  }
  monitor = (System_Action_o *)v4[2].monitor;
  klass = (BaseDialog_o *)v4[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(monitor, v4, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__, 0LL);
    v4[2].monitor = monitor;
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1BCA784(&v4[2].monitor, monitor);
  }
  if ( !klass )
    sub_1BCAA3C(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_4B11339 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method, v2);
    byte_4B11339 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v3),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4B11338 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13116/*"StartDisp"*/, method, v2);
    byte_4B11338 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13116/*"StartDisp"*/, 0LL);
}