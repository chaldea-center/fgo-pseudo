void __fastcall TreasureBoxDialogComponent___ctor(TreasureBoxDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x21

  if ( (byte_4B322BA & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Color___TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4B322BA = 1;
  }
  this->fields.TYPE_SPRITE_POS_Y = -62.2;
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1BD3500(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1BD33FC(&this->fields.viewChangeButtonLabelEffectColors);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1BD33FC(&this->fields.fallEffectObjList);
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
  __int64 v9; // x1

  if ( (byte_4B322B6 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    byte_4B322B6 = 1;
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
                   (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)Item, 0LL);
          }
          if ( size == ++v7 )
            break;
          fallEffectObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
          if ( !fallEffectObjList )
            sub_1BD36B4(0LL, v9);
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
  System_Action_o *v6; // x20

  if ( (byte_4B322AF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&Method_TreasureBoxDialogComponent_EndClose__, v5);
    byte_4B322AF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BD33FC(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TreasureBoxDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BD33FC(p_closeCallbackFunc);
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
    sub_1BD36B4(0LL, v4);
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
  __int64 v6; // x1
  UnityEngine_Collider_o *skipCollider; // x0

  if ( (byte_4B322AE & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BD3458(&Method_TreasureBoxDialogComponent_OnClickCloseButton__, v3);
    byte_4B322AE = 1;
  }
  v4 = Method_TreasureBoxDialogComponent_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_TreasureBoxDialogComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(skipCollider, v6);
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

  if ( (byte_4B322B7 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BD3458(&Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__, v5);
    byte_4B322B7 = 1;
  }
  v6 = Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BD3470(Method_TreasureBoxDialogComponent_OnClickSwitchShowMode__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BD343C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_18:
    sub_1BD36B4(viewChangeButtonLabel, v9);
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
    sub_1BD36BC(viewChangeButtonLabel, v9);
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
                                           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButtonLabel )
    {
      viewChangeButtonLabel = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)viewChangeButtonLabel,
                                             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  Il2CppObject *v49; // x22
  __int64 viewChangeButton; // x0
  __int64 v51; // x1
  System_Array_o **p_monitor; // x24
  Il2CppObject *v53; // x23
  Il2CppObject *Component_object; // x27
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x25
  System_Collections_Generic_List_object__o *v57; // x27
  System_Collections_Generic_List_object__o *v58; // x27
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v61; // w9
  int32_t dialogType; // w8
  int32_t eventId; // w23
  Il2CppObject *MasterData_object; // x24
  GiftEntity_array *GiftListById; // x26
  System_String_o *v66; // x0
  UILabel_o *v67; // x28
  Il2CppObject *v68; // x27
  System_String_o *v69; // x0
  UILabel_o *titleNextItemLabel; // x28
  UILabel_o *titleAtLabel; // x28
  UISprite_o *eventPointBg; // x27
  int64_t v73; // x27
  GiftEntity_o *v74; // x8
  EventRewardEntity_o *v75; // x23
  int32_t v76; // w24
  const MethodInfo *v77; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v79; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x23
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  System_Int32_array *v86; // x25
  int v87; // w21
  __int64 v88; // x26
  UILabel_o *v89; // x27
  __int64 v90; // x8
  int32_t v91; // w25
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x25
  UILabel_o *getNumLabel; // x25
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x8
  System_String_o *v99; // x27
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v104; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v106; // x27
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  Il2CppObject *v110; // x0
  int32_t maxItemDrawNum; // w9
  int32_t v112; // w8
  UILabel_o *v113; // x23
  int32_t iconId; // w20
  System_Action_o *v115; // x21
  const MethodInfo *v116; // x4
  System_Action_o *v117; // x20
  struct System_Action_o *v118; // [xsp+8h] [xbp-78h]
  __int64 v119; // [xsp+10h] [xbp-70h] BYREF
  int v120; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B322AD & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, giftIds);
    sub_1BD3458(&AtlasManager_TypeInfo, v15);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v16);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, v17);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76991584, v18);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventRewardMaster___, v19);
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v21);
    sub_1BD3458(&DataManager_TypeInfo, v22);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v23);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v24);
    sub_1BD3458(&int___TypeInfo, v25);
    sub_1BD3458(&int_TypeInfo, v26);
    sub_1BD3458(&long_TypeInfo, v27);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Clear__, v28);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v29);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v30);
    sub_1BD3458(&LocalizationManager_TypeInfo, v31);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1BD3458(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, v33);
    sub_1BD3458(&Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, v34);
    sub_1BD3458(&TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo, v35);
    sub_1BD3458(&StringLiteral_13629/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v36);
    sub_1BD3458(&StringLiteral_13608/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, v37);
    sub_1BD3458(&StringLiteral_13606/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, v38);
    sub_1BD3458(&StringLiteral_855/*"+"*/, v39);
    sub_1BD3458(&StringLiteral_13611/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, v40);
    sub_1BD3458(&StringLiteral_24352/*"treasurechest_btn"*/, v41);
    sub_1BD3458(&StringLiteral_13607/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, v42);
    sub_1BD3458(&StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v43);
    sub_1BD3458(&StringLiteral_24358/*"treasurechest_img_bg_reward"*/, v44);
    sub_1BD3458(&StringLiteral_13610/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, v45);
    sub_1BD3458(&StringLiteral_13612/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, v46);
    sub_1BD3458(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v47);
    sub_1BD3458(&StringLiteral_13609/*"TREASURE_BOX_EVENT_POINT"*/, v48);
    byte_4B322AD = 1;
  }
  v49 = (Il2CppObject *)sub_1BD36A4(TreasureBoxDialogComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor(v49, 0LL);
  if ( !v49 )
    goto LABEL_105;
  v49[1].klass = (Il2CppClass *)this;
  v118 = closeCallback;
  sub_1BD33FC(&v49[1]);
  v49[1].monitor = giftIds;
  p_monitor = (System_Array_o **)&v49[1].monitor;
  sub_1BD33FC(&v49[1].monitor);
  v49[2].klass = (Il2CppClass *)pointRewards;
  v53 = v49 + 2;
  sub_1BD33FC(&v49[2]);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_105;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = AtlasManager__SetEventUI(
                       (UISprite_o *)Component_object,
                       (System_String_o *)StringLiteral_24352/*"treasurechest_btn"*/,
                       0LL);
  if ( !treasureBoxEnt )
    goto LABEL_105;
  AtlasManager__SetItem(this->fields.titleIcon, treasureBoxEnt->fields.iconId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
  this->fields.dialogType = type;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v57 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v57;
  sub_1BD33FC(&this->fields.resultItemObjList);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_1BD33FC(&this->fields.resultIconHideObjList);
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    v61 = fallEffectObjList->fields._version + 1;
    fallEffectObjList->fields._size = 0;
    fallEffectObjList->fields._version = v61;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
  }
  dialogType = this->fields.dialogType;
  if ( !dialogType )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_13608/*"TREASURE_BOX_EVENT_ITEM_LINEUP_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v79, (Il2CppObject *)eventItemName, 0LL);
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
                                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( viewChangeButton )
                    {
                      v121.fields.z = 0.0;
                      v121.fields.y = (float)(this->fields.height + 10);
                      v121.fields.x = (float)this->fields.width;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)viewChangeButton, v121, 0LL);
                      viewChangeButton = (__int64)this->fields.scrollView;
                      if ( viewChangeButton )
                      {
                        v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
                        viewChangeButton = (__int64)GameObjectExtensions__GetParent(v81, 0LL);
                        if ( viewChangeButton )
                        {
                          viewChangeButton = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)viewChangeButton,
                                                        0LL);
                          if ( viewChangeButton )
                          {
                            v82 = (UnityEngine_GameObject_o *)viewChangeButton;
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
                                                            v82,
                                                            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
                              if ( viewChangeButton )
                              {
                                UIWidget__set_height((UIWidget_o *)viewChangeButton, this->fields.height, 0LL);
                                viewChangeButton = (__int64)this->fields.scrollView;
                                if ( viewChangeButton )
                                {
                                  v83 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)viewChangeButton,
                                          0LL);
                                  viewChangeButton = (__int64)GameObjectExtensions__GetChild(v83, 0, 0LL);
                                  if ( viewChangeButton )
                                  {
                                    UnityEngine_Transform__set_localPosition(
                                      (UnityEngine_Transform_o *)viewChangeButton,
                                      this->fields.gridPos,
                                      0LL);
                                    viewChangeButton = (__int64)this->fields.scrollBar;
                                    if ( viewChangeButton )
                                    {
                                      v84 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)viewChangeButton,
                                              0LL);
                                      viewChangeButton = (__int64)GameObjectExtensions__GetChild(v84, 0, 0LL);
                                      if ( viewChangeButton )
                                      {
                                        viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)viewChangeButton,
                                                                      (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                                        if ( viewChangeButton )
                                        {
                                          UIWidget__set_height(
                                            (UIWidget_o *)viewChangeButton,
                                            this->fields.height - 10,
                                            0LL);
                                          viewChangeButton = (__int64)this->fields.scrollBar;
                                          if ( viewChangeButton )
                                          {
                                            v85 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)viewChangeButton,
                                                    0LL);
                                            viewChangeButton = (__int64)GameObjectExtensions__GetChild(v85, 1, 0LL);
                                            if ( viewChangeButton )
                                            {
                                              viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)viewChangeButton,
                                                                            (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
      v86 = 0LL;
      v87 = 0;
      goto LABEL_100;
    }
    eventId = treasureBoxEnt->fields.eventId;
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)viewChangeButton,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventRewardMaster___);
    viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)viewChangeButton,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !viewChangeButton )
      goto LABEL_105;
    GiftListById = GiftMaster__GetGiftListById(
                     (GiftMaster_o *)viewChangeButton,
                     treasureBoxEnt->fields.extraGiftId,
                     0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13609/*"TREASURE_BOX_EVENT_POINT"*/, 0LL);
    v67 = this->fields.titleLabel;
    v68 = (Il2CppObject *)v66;
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_13611/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
    viewChangeButton = (__int64)System_String__Format(v69, v68, 0LL);
    if ( !v67 )
      goto LABEL_105;
    UILabel__set_text(v67, (System_String_o *)viewChangeButton, 0LL);
    titleNextItemLabel = this->fields.titleNextItemLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( !titleNextItemLabel )
      goto LABEL_105;
    UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
    titleAtLabel = this->fields.titleAtLabel;
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13610/*"TREASURE_BOX_EVENT_POINT_REWARD"*/, 0LL);
    if ( !titleAtLabel )
      goto LABEL_105;
    UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
    viewChangeButton = (__int64)this->fields.atNameLabel;
    if ( !viewChangeButton )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v68, 0LL);
    viewChangeButton = (__int64)this->fields.pointRewardRoot;
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
    eventPointBg = this->fields.eventPointBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
    viewChangeButton = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( !MasterData_object
      || (v73 = viewChangeButton,
          viewChangeButton = (__int64)EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)MasterData_object,
                                        eventId,
                                        viewChangeButton,
                                        0LL),
          !GiftListById) )
    {
LABEL_105:
      sub_1BD36B4(viewChangeButton, v51);
    }
    if ( GiftListById->max_length )
    {
      v74 = GiftListById->m_Items[0];
      if ( v74 )
      {
        if ( v56 )
        {
          v75 = (EventRewardEntity_o *)viewChangeButton;
          viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        v56,
                                        v74->fields.objectId,
                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( viewChangeButton )
          {
            v76 = *(_DWORD *)(viewChangeButton + 40);
            AtlasManager__SetItem(this->fields.eventPointSprite, v76, 0LL);
            AtlasManager__SetItem(this->fields.titleIcon, v76, 0LL);
            TreasureBoxDialogComponent__SetNextItemLabel(this, v73, v75, v77);
            goto LABEL_60;
          }
        }
      }
      goto LABEL_105;
    }
LABEL_106:
    sub_1BD36BC(viewChangeButton, v51);
  }
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !viewChangeButton )
    goto LABEL_105;
  viewChangeButton = (__int64)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)viewChangeButton,
                                treasureBoxEnt->fields.extraGiftId,
                                0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_105;
  v88 = viewChangeButton;
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
  v89 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13607/*"TREASURE_BOX_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !v89 )
    goto LABEL_105;
  UILabel__set_text(v89, (System_String_o *)viewChangeButton, 0LL);
  if ( !v88 )
    goto LABEL_105;
  if ( !*(_DWORD *)(v88 + 24) )
    goto LABEL_106;
  v90 = *(_QWORD *)(v88 + 32);
  if ( !v90 )
    goto LABEL_105;
  if ( !v56 )
    goto LABEL_105;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                v56,
                                *(_DWORD *)(v90 + 24),
                                (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_105;
  v91 = *(_DWORD *)(viewChangeButton + 40);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v91, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v91, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24358/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13606/*"TREASURE_BOX_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_105;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  if ( !*(_DWORD *)(v88 + 24) )
    goto LABEL_106;
  v98 = *(_QWORD *)(v88 + 32);
  if ( !v98 )
    goto LABEL_105;
  v99 = (System_String_o *)viewChangeButton;
  v120 = this->fields.maxPlayCnt * *(_DWORD *)(v98 + 28);
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120, v95, v96, v97);
  v101 = System_String__Format(v99, v100, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62525248((System_String_o *)StringLiteral_855/*"+"*/, v101, 0LL);
  if ( !getNumLabel )
    goto LABEL_105;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(treasureBoxEnt->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v104 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13612/*"TREASURE_BOX_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_105;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v119 = v104;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v119, v107, v108, v109);
  viewChangeButton = (__int64)System_String__Format(v106, v110, 0LL);
  if ( !totalNumLabel )
    goto LABEL_105;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = sub_1BD3500(int___TypeInfo, (unsigned int)(this->fields.maxPlayCnt + 1));
  if ( !viewChangeButton )
    goto LABEL_105;
  v86 = (System_Int32_array *)viewChangeButton;
  if ( !*(_DWORD *)(viewChangeButton + 24) )
    goto LABEL_106;
  *(_DWORD *)(viewChangeButton + 32) = treasureBoxEnt->fields.extraGiftId;
  System_Array__Copy_63480944(*p_monitor, 0, (System_Array_o *)viewChangeButton, 1, this->fields.maxPlayCnt, 0LL);
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v112 = this->fields.maxPlayCnt + 1;
  this->fields.maxPlayCnt = v112;
  if ( v112 <= maxItemDrawNum )
  {
    viewChangeButton = (__int64)this->fields.scrollBar;
    if ( !viewChangeButton )
      goto LABEL_105;
    viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
    if ( !viewChangeButton )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 0, 0LL);
  }
  if ( v53->klass && v53->klass->_1.namespaze )
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
                                  (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76991584);
    if ( !viewChangeButton )
      goto LABEL_105;
    if ( !*(_DWORD *)(viewChangeButton + 24) )
      goto LABEL_106;
    v113 = *(UILabel_o **)(viewChangeButton + 32);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13629/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !v113 )
      goto LABEL_105;
    UILabel__set_text(v113, (System_String_o *)viewChangeButton, 0LL);
  }
  v87 = 1;
LABEL_100:
  this->fields.closeCallbackFunc = v118;
  sub_1BD33FC(&this->fields.closeCallbackFunc);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  if ( v87 )
  {
    iconId = treasureBoxEnt->fields.iconId;
    v115 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v115, v49, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__0__, 0LL);
    TreasureBoxDialogComponent__SetResultData(this, v86, iconId, v115, v116);
  }
  else
  {
    v117 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v117, v49, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__1__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v117, 0, 0LL);
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
  TreasureBoxDialogComponent_o *v21; // x23
  int32_t v22; // w3
  ItemIconComponent_o *v23; // x23
  TreasureBoxDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B322B4 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, gift);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    this = (TreasureBoxDialogComponent_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B322B4 = 1;
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
                                           (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_31;
  v20 = this;
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v6->fields.listRoot, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  v21 = this;
  if ( !byte_4B31941 )
  {
    this = (TreasureBoxDialogComponent_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, gift);
    byte_4B31941 = 1;
  }
  if ( !v21 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v21,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_31;
  v30.fields.x = v6->fields.iconScale;
  v30.fields.y = v30.fields.x;
  v30.fields.z = v30.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0LL);
  this = (TreasureBoxDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v20,
                                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !this )
    goto LABEL_31;
  v22 = v16 <= 1 ? -1 : v16;
  v23 = (ItemIconComponent_o *)this;
  ItemIconComponent__SetGift_38924152((ItemIconComponent_o *)this, v17, v18, v22, 0, 0LL);
  TreasureBoxDialogComponent__SetPossession(v24, v23, v18, v25);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
  this = (TreasureBoxDialogComponent_o *)v6->fields.resultItemObjList;
  if ( !this )
    goto LABEL_31;
  v26 = *(_QWORD *)&this->fields.m_CachedPtr;
  v27 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v26 )
    goto LABEL_31;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v20,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v29 + 32) = v20;
    sub_1BD33FC(v29 + 32);
  }
  this = (TreasureBoxDialogComponent_o *)v6->fields.listRoot;
  if ( !this
    || (this = (TreasureBoxDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_31:
    sub_1BD36B4(this, gift);
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
  if ( (byte_4B322B3 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, giftIds);
    this = (TreasureBoxDialogComponent_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B322B3 = 1;
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
        sub_1BD36BC(this, giftIds);
      }
    }
  }
LABEL_9:
  if ( giftIds && !pointRewards )
  {
    this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
LABEL_24:
      sub_1BD36B4(this, giftIds);
    this = (TreasureBoxDialogComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v19; // x1
  char v20; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v23; // x1
  int64_t v24; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B322B5 & 1) == 0 )
  {
    sub_1BD3458(&long_TypeInfo, userEventPoint);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_1BD3458(&StringLiteral_2967/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_1BD3458(&StringLiteral_2965/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v10);
    sub_1BD3458(&StringLiteral_1/*""*/, v11);
    byte_4B322B5 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2965/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v23 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BD36B4(nextItemNameLabel, v19);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v24 = eventRewardEnt->fields.point - userEventPoint;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v14, v15, v16);
  nextItemNameLabel = System_String__Format(v13, v17, 0LL);
  if ( !v12 )
    goto LABEL_20;
  UILabel__set_text(v12, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v20 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v20 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v23 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v23, 0LL);
}


void __fastcall TreasureBoxDialogComponent__SetPossession(
        TreasureBoxDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B322B8 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B322B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B31D77 = 1;
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
    sub_1BD36B4(Instance, v9);
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
  UnityEngine_Transform_o *v23; // x27
  ItemIconComponent_o *v24; // x27
  int32_t v25; // w3
  TreasureBoxDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  Il2CppObject *v32; // x27
  UnityEngine_GameObject_o *v33; // x27
  UnityEngine_Transform_o *transform; // x28
  int v35; // s0
  ItemIconComponent_o *v38; // x26
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  __int64 v43; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B322B0 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, resultIds);
    sub_1BD3458(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B322B0 = 1;
  }
  if ( resultIds )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_54:
      sub_1BD36B4(Instance, v14);
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_GiftMaster___);
    v15 = *(_QWORD *)&resultIds->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      v43 = Instance;
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
        Instance = v43;
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
                              (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v22 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        v23 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4B31941 )
        {
          Instance = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v14);
          byte_4B31941 = 1;
        }
        if ( !v23 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v46.fields.x = this->fields.iconScale;
        v46.fields.y = v46.fields.x;
        v46.fields.z = v46.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v46, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v22,
                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v21 )
          goto LABEL_54;
        v24 = (ItemIconComponent_o *)Instance;
        if ( v21[7] <= 1 )
          v25 = -1;
        else
          v25 = v21[7];
        if ( !v16 )
          v25 *= resultIds->max_length - 1;
        if ( !Instance )
          goto LABEL_54;
        ItemIconComponent__SetGift_38924152((ItemIconComponent_o *)Instance, v21[5], v21[6], v25, 0, 0LL);
        TreasureBoxDialogComponent__SetPossession(v26, v24, v21[6], v27);
        Instance = (__int64)this->fields.resultItemObjList;
        if ( !Instance )
          goto LABEL_54;
        v28 = *(_QWORD *)(Instance + 16);
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v28 )
          goto LABEL_54;
        v30 = *(int *)(Instance + 24);
        if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v22,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * v30;
          *(_DWORD *)(Instance + 24) = v30 + 1;
          *(_QWORD *)(v31 + 32) = v22;
          sub_1BD33FC(v31 + 32);
        }
        v32 = (Il2CppObject *)this->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              v32,
                              (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_54;
        v33 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_54;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.iconListRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v33, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v22, 0LL);
        if ( !Instance )
          goto LABEL_54;
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
        if ( !transform )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v33, 0LL);
        if ( !Instance )
          goto LABEL_54;
        v47.fields.x = this->fields.iconScale;
        v47.fields.y = v47.fields.x;
        v47.fields.z = v47.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v47, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v33,
                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Instance )
          goto LABEL_54;
        v38 = (ItemIconComponent_o *)Instance;
        ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, treasureIconId, -1, 1, 0LL);
        UnityEngine_GameObject__SetActive(v33, 1, 0LL);
        ItemIconComponent__setTypeSpritePositionY(v38, this->fields.TYPE_SPRITE_POS_Y, 0LL);
        Instance = (__int64)this->fields.resultIconHideObjList;
        if ( !Instance )
          goto LABEL_54;
        v39 = *(_QWORD *)(Instance + 16);
        v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v39 )
          goto LABEL_54;
        v41 = *(int *)(Instance + 24);
        if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v33,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = v39 + 8 * v41;
          *(_DWORD *)(Instance + 24) = v41 + 1;
          *(_QWORD *)(v42 + 32) = v33;
          sub_1BD33FC(v42 + 32);
        }
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_54;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                              (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
      sub_1BD36BC(Instance, v14);
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

  if ( (byte_4B322B1 & 1) == 0 )
  {
    sub_1BD3458(&TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo, method);
    byte_4B322B1 = 1;
  }
  v3 = sub_1BD36A4(TreasureBoxDialogComponent__StartDisp_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall TreasureBoxDialogComponent__StartRewardAction(
        TreasureBoxDialogComponent_o *this,
        TreasureBoxDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4B322B2 & 1) == 0 )
  {
    sub_1BD3458(&TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo, rewardAction);
    byte_4B322B2 = 1;
  }
  v5 = sub_1BD36A4(TreasureBoxDialogComponent__StartRewardAction_d__60_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BD33FC(v5 + 32);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1BD33FC(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall TreasureBoxDialogComponent__get_closeBtnObject(
        TreasureBoxDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B322B9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B322B9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BD36B4(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct TreasureBoxDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v19; // x20
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v23; // w21
  UIProgressBar_o *v24; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v27; // w8
  System_Collections_Generic_List_object__o *v28; // x22
  TreasureBoxDialogComponent__StartDisp_d__59_o **p_listRewardAction_5__2; // x21
  int v30; // w23
  __int64 v31; // x22
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 _2__current_low; // x10
  __int64 v35; // x8
  int _2__current; // w9
  int32_t v37; // w22
  TreasureBoxDialogComponent__StartDisp_d__59_o *v38; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v40; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t playCnt; // w8
  int32_t v43; // w21
  int32_t v44; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v47; // x20
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4B322BE & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Count__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_1BD3458(&System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo, v14);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v15);
    sub_1BD3458(&TreasureBoxDialogComponent_RewardAction_TypeInfo, v16);
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    byte_4B322BE = 1;
  }
  memset(&v48, 0, sizeof(v48));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v19 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      sub_1BD33FC(&v2->fields.__2__current);
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
                                                                (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.scrollBar;
      v23 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v24 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v24, (float)(1.0 / (float)((float)((float)v23 * 0.5) + -1.0)) + value, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_1BD33FC(p__2__current);
      v27 = 4;
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
    sub_1BD33FC(&v2->fields._listRewardAction_5__2);
LABEL_19:
    v28 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction___ctor__);
    v2->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__o *)v28;
    p_listRewardAction_5__2 = (TreasureBoxDialogComponent__StartDisp_d__59_o **)&v2->fields._listRewardAction_5__2;
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)sub_1BD33FC(&v2->fields._listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v30 = 0;
      do
      {
        if ( v30 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v31 = sub_1BD36A4(TreasureBoxDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v31, 0LL);
        if ( !v31 )
          goto LABEL_59;
        *(_DWORD *)(v31 + 16) = v30;
        *(_DWORD *)(v31 + 20) = v30 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v32 = *(_QWORD *)&this->fields.__1__state;
        v33 = Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v32 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v31,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v35 + 32) = v31;
          sub_1BD33FC(v35 + 32);
        }
        ++v30;
      }
      while ( v30 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v37 = 0;
      do
      {
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                  (System_Collections_Generic_List_object__o *)this,
                                                                  v37,
                                                                  (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v38 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v37,
                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
        started = TreasureBoxDialogComponent__StartRewardAction(
                    _4__this,
                    (TreasureBoxDialogComponent_RewardAction_o *)Item,
                    v40);
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)UnityEngine_MonoBehaviour__StartCoroutine_70263544(
                                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                  started,
                                                                  0LL);
        if ( !v38 )
          goto LABEL_59;
        v38->fields.__4__this = (struct TreasureBoxDialogComponent_o *)this;
        sub_1BD33FC(&v38->fields.__4__this);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v37 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              LODWORD(this->fields.__2__current) - 1,
                                                              (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
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
        v43 = 0;
        while ( v43 < SLODWORD(this->fields.__2__current) )
        {
          this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v43,
                                                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_TreasureBoxDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70264164(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)v2->fields._listRewardAction_5__2;
            ++v43;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v44 = 0;
          while ( v44 < SLODWORD(this->fields.__2__current) )
          {
            this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v44,
                                                                      (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (TreasureBoxDialogComponent__StartDisp_d__59_o *)_4__this->fields.resultItemObjList;
              ++v44;
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
                                                                      (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
                    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v48,
                            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v48.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v48,
                    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1BD36B4(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v47 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v47, scrollWait, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v47;
      p__2__current = &v2->fields.__2__current;
      sub_1BD33FC(p__2__current);
      v27 = 3;
      goto LABEL_76;
    }
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_1BD33FC(p__2__current);
  v27 = 2;
LABEL_76:
  *((_DWORD *)p__2__current - 2) = v27;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_TreasureBoxDialogComponent__StartDisp_d__59_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct TreasureBoxDialogComponent_o *_4__this; // x22
  struct TreasureBoxDialogComponent_RewardAction_o *rewardAction; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v9; // x8
  struct TreasureBoxDialogComponent_RewardAction_o *v10; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct TreasureBoxDialogComponent_RewardAction_o *v13; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v20; // x20
  struct TreasureBoxDialogComponent_RewardAction_o *v21; // x8
  TreasureBoxDialogComponent__StartRewardAction_d__60_o *v22; // x21
  int v23; // s0
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 _2__current_low; // x10
  __int64 v29; // x8
  float v30; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20
  Il2CppObject **v32; // x19
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B322BF & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)sub_1BD3458(&StringLiteral_19088/*"ef_treasure_drop"*/, v5);
    byte_4B322BF = 1;
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
                                                                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v9 = v2->fields.rewardAction;
    if ( v9 )
    {
      this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                          (System_Collections_Generic_List_object__o *)this,
                                                                          v9->fields.playCnt,
                                                                          (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v10 = v2->fields.rewardAction;
          if ( v10 )
          {
            result = 0;
            v10->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_39:
    sub_1BD36B4(this, method);
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
  v13 = v2->fields.rewardAction;
  if ( !v13 || !_4__this )
    goto LABEL_39;
  if ( _1__state < v13->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v15 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v15, itemDispWaitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v15;
    p__2__current = &v2->fields.__2__current;
    sub_1BD33FC(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v13->fields.playCnt,
           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)GameObjectExtensions__GetParent(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)EventTreasureBoxPanelComponent__getEffect(
                                                                    (System_String_o *)StringLiteral_19088/*"ef_treasure_drop"*/,
                                                                    transform,
                                                                    v19);
  if ( !this )
    goto LABEL_39;
  v20 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  v21 = v2->fields.rewardAction;
  if ( !v21 )
    goto LABEL_39;
  v22 = this;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)this,
                                                                    v21->fields.playCnt,
                                                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_39;
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v22 )
    goto LABEL_39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)v20,
                                                                    0LL);
  if ( !this )
    goto LABEL_39;
  v33.fields.x = 1.25;
  v33.fields.y = 1.25;
  v33.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
  this = (TreasureBoxDialogComponent__StartRewardAction_d__60_o *)_4__this->fields.fallEffectObjList;
  if ( !this )
    goto LABEL_39;
  v26 = *(_QWORD *)&this->fields.__1__state;
  v27 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v26 )
    goto LABEL_39;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v20,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v29 + 32) = v20;
    sub_1BD33FC(v29 + 32);
  }
  v30 = _4__this->fields.itemDispWaitTime;
  v31 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v31, v30, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v31;
  v32 = &v2->fields.__2__current;
  sub_1BD33FC(v32);
  *((_DWORD *)v32 - 2) = 2;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_TreasureBoxDialogComponent__StartRewardAction_d__60_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  __int64 v3; // x1
  System_Action_o *monitor; // x21
  BaseDialog_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4B322BB & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1BD3458(
                                                                   &Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__,
                                                                   v3);
    byte_4B322BB = 1;
  }
  monitor = (System_Action_o *)v2[2].monitor;
  klass = (BaseDialog_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_TreasureBoxDialogComponent___c__DisplayClass55_0__Open_b__2__, 0LL);
    v2[2].monitor = monitor;
    this = (TreasureBoxDialogComponent___c__DisplayClass55_0_o *)sub_1BD33FC(&v2[2].monitor);
  }
  if ( !klass )
    sub_1BD36B4(this, method);
  BaseDialog__Open(klass, monitor, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__1(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureBoxDialogComponent_o *_4__this; // x0

  if ( (byte_4B322BD & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, method);
    byte_4B322BD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TreasureBoxDialogComponent__SetListData(_4__this, this->fields.giftIds, this->fields.pointRewards, v2),
        (_4__this = (TreasureBoxDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(_4__this, method);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)_4__this, 0, 0LL);
}


void __fastcall TreasureBoxDialogComponent___c__DisplayClass55_0___Open_b__2(
        TreasureBoxDialogComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4B322BC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_13135/*"StartDisp"*/, method);
    byte_4B322BC = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13135/*"StartDisp"*/, 0LL);
}