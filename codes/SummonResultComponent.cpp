void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_49FAE89 & 1) == 0 )
  {
    sub_1B64870(&SummonResultComponent_TypeInfo, v1);
    byte_49FAE89 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BA2DF0;
  v3 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BA3DF0;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = xmmword_BA3E00;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = xmmword_BA2A10;
  v3->SPRITE_SIZE_NORMAL_SPECIAL_BONUS = 26;
  *(_QWORD *)&v3->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 0x20000002F0LL;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0
  _QWORD *v6; // x0
  int32_t v7; // w19
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_49FAE88 & 1) == 0 )
  {
    sub_1B64870(&Method_SummonResultComponent_CheckLimitOver__, method);
    sub_1B64870(&StringLiteral_5467/*"END_SUMMON"*/, v3);
    sub_1B64870(&StringLiteral_8221/*"LIMIT_OVER"*/, v4);
    byte_49FAE88 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8221/*"LIMIT_OVER"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5467/*"END_SUMMON"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 0;
  }
  v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  ServantStatusBattleListViewItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FAE80 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAE80 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (ServantStatusBattleListViewItem_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1B64814(p_blocker, 0, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49FAE85 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, flg);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_SummonResultComponent__DialogCallBack_b__71_0__, v6);
    byte_49FAE85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__71_0__, 0LL);
  if ( !v9 )
    sub_1B64ACC(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonResultComponent__SetBonusGiftDisplay(
        SummonResultComponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        int32_t giftResultType,
        int32_t giftBonusType,
        bool adjustTitleLabel,
        const MethodInfo *method)
{
  SummonResultComponent_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
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
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool v29; // zf
  System_Collections_Generic_List_object__o *v30; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v33; // x8
  ItemIconComponent_o *v34; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v36; // x8
  ItemIconComponent_o *v37; // x8
  struct ItemIconComponent_array *v38; // x8
  struct ItemIconComponent_array *v39; // x8
  ItemIconComponent_o *v40; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v42; // x0
  int32_t ManaMax; // w23
  int32_t v44; // w26
  UnityEngine_GameObject_o *v45; // x0
  SummonResultComponent_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x21
  UILabel_o *v48; // x21
  UILabel_o *v49; // x21
  System_String_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v55; // x0
  UILabel_o *v56; // x20
  const MethodInfo *v57; // x1
  struct ItemIconComponent_array *v58; // x8
  __int64 v59; // x24
  int max_length; // w9
  unsigned int v61; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v63; // x8
  __int64 v64; // x8
  struct ItemIconComponent_array *v65; // x8
  ItemIconComponent_o *v66; // x22
  struct ItemIconComponent_array *v67; // x8
  bool v68; // w1
  struct ItemIconComponent_array *v69; // x8
  UnityEngine_GameObject_o *v70; // x0
  SummonResultComponent_c *v71; // x8
  UnityEngine_GameObject_o *v72; // x22
  struct SummonResultComponent_StaticFields *v73; // x8
  __int64 v74; // x9
  UILabel_o *v75; // x21
  UILabel_o *v76; // x21
  System_String_o *v77; // x22
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int *v81; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v83; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v85; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v87; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v89; // x21
  _QWORD *v90; // x22
  __int64 v91; // x8
  __int64 v92; // x0
  __int64 v93; // x0
  System_String_o *v94; // x0
  _QWORD *v95; // x22
  System_String_o *v96; // x21
  __int64 v97; // x8
  __int64 v98; // x0
  __int64 v99; // x0
  const MethodInfo *v100; // x1
  UnityEngine_GameObject_o *v101; // x0
  SummonResultComponent_c *v102; // x8
  UnityEngine_GameObject_o *v103; // x22
  struct SummonResultComponent_StaticFields *v104; // x8
  __int64 v105; // x9
  UILabel_o *v106; // x21
  System_String_o *v107; // x22
  _QWORD *v108; // x23
  __int64 v109; // x8
  __int64 v110; // x0
  __int64 v111; // x0
  Il2CppObject *v112; // x0
  int v113; // [xsp+Ch] [xbp-54h] BYREF
  int v114; // [xsp+18h] [xbp-48h] BYREF
  int v115; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_49FAE7D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_object___, giftIds);
    sub_1B64870(&BalanceConfig_TypeInfo, v11);
    sub_1B64870(&Method_DataManager_GetMaster_GiftMaster___, v12);
    sub_1B64870(&DataManager_TypeInfo, v13);
    sub_1B64870(&int_TypeInfo, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v16);
    sub_1B64870(&LocalizationManager_TypeInfo, v17);
    sub_1B64870(&SummonResultComponent_TypeInfo, v18);
    sub_1B64870(&StringLiteral_12279/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v19);
    sub_1B64870(&StringLiteral_12281/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v20);
    sub_1B64870(&StringLiteral_12283/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v21);
    sub_1B64870(&StringLiteral_12294/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, v22);
    sub_1B64870(&StringLiteral_12295/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v23);
    sub_1B64870(&StringLiteral_12280/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v24);
    sub_1B64870(&StringLiteral_12293/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, v25);
    this = (SummonResultComponent_o *)sub_1B64870(&StringLiteral_12282/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v26);
    byte_49FAE7D = 1;
  }
  summonCtrl = v10->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_156;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_156;
  if ( giftIds && giftBonusType && gachaParamData->fields.gachaType != 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0LL);
    v29 = giftBonusType == 2;
    v30 = (System_Collections_Generic_List_object__o *)this;
    if ( v29 )
    {
      if ( !this )
        goto LABEL_156;
      extraGiftIconComponents = v10->fields.extraGiftIconComponents;
      if ( !extraGiftIconComponents )
        goto LABEL_156;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) <= (signed int)extraGiftIconComponents->max_length )
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v58 = v10->fields.extraGiftIconComponents;
        if ( !v58 )
          goto LABEL_156;
        v59 = 4LL;
        while ( 1 )
        {
          max_length = v58->max_length;
          v61 = v59 - 4;
          if ( (int)v59 - 4 >= max_length )
            break;
          if ( v61 >= max_length )
            goto LABEL_157;
          this = (SummonResultComponent_o *)*((_QWORD *)&v58->obj.klass + v59);
          if ( !this )
            goto LABEL_156;
          if ( (signed int)v61 >= v30->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0LL);
            v69 = v10->fields.extraGiftIconComponents;
            if ( !v69 )
              goto LABEL_156;
            if ( v61 >= v69->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v69->obj.klass + v59);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v68 = 0;
          }
          else
          {
            backImg = (UIWidget_o *)this->fields.backImg;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !backImg )
              goto LABEL_156;
            UIWidget__set_width(
              backImg,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v63 = v10->fields.extraGiftIconComponents;
            if ( !v63 )
              goto LABEL_156;
            if ( v61 >= v63->max_length )
              goto LABEL_157;
            v64 = *((_QWORD *)&v63->obj.klass + v59);
            if ( !v64 )
              goto LABEL_156;
            this = *(SummonResultComponent_o **)(v64 + 40);
            if ( !this )
              goto LABEL_156;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v65 = v10->fields.extraGiftIconComponents;
            if ( !v65 )
              goto LABEL_156;
            if ( v61 >= v65->max_length )
              goto LABEL_157;
            v66 = (ItemIconComponent_o *)*((_QWORD *)&v65->obj.klass + v59);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v30,
                                                v61,
                                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v66 )
              goto LABEL_156;
            ItemIconComponent__SetGift(v66, (GiftEntity_o *)this, -1, 0, 0LL);
            v67 = v10->fields.extraGiftIconComponents;
            if ( !v67 )
              goto LABEL_156;
            if ( v61 >= v67->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v67->obj.klass + v59);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v68 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v68, 0LL);
          v58 = v10->fields.extraGiftIconComponents;
          ++v59;
          if ( !v58 )
            goto LABEL_156;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v83 = SummonResultComponent_TypeInfo;
        size = v30->fields._size;
        v85 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v83 = SummonResultComponent_TypeInfo;
        }
        static_fields = v83->static_fields;
        v87 = 44LL;
        if ( size == 1 )
          v87 = 40LL;
        GameObjectExtensions__SetLocalPositionX(
          v85,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v87),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12294/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v90 = Method_System_Array_Empty_object___;
        v91 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v91 )
        {
          sub_1BB67A8(Method_System_Array_Empty_object___);
          v91 = v90[7];
        }
        v92 = *(_QWORD *)(v91 + 16);
        if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
          v92 = sub_1BB674C(v92);
        if ( !*(_DWORD *)(v92 + 224) )
          j_il2cpp_runtime_class_init_0(v92);
        v93 = *(_QWORD *)(v90[7] + 16LL);
        if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
          v93 = sub_1BB674C(v93);
        this = (SummonResultComponent_o *)System_String__Format_61398084(
                                            v89,
                                            **(System_Object_array ***)(v93 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v95 = Method_System_Array_Empty_object___;
        v96 = v94;
        v97 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v97 )
        {
          sub_1BB67A8(Method_System_Array_Empty_object___);
          v97 = v95[7];
        }
        v98 = *(_QWORD *)(v97 + 16);
        if ( (*(_BYTE *)(v98 + 309) & 1) == 0 )
          v98 = sub_1BB674C(v98);
        if ( !*(_DWORD *)(v98 + 224) )
          j_il2cpp_runtime_class_init_0(v98);
        v99 = *(_QWORD *)(v95[7] + 16LL);
        if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
          v99 = sub_1BB674C(v99);
        this = (SummonResultComponent_o *)System_String__Format_61398084(
                                            v96,
                                            **(System_Object_array ***)(v99 + 184),
                                            0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      else
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsgLb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsgLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12295/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v100);
      return;
    }
    v33 = v10->fields.extraGiftIconComponents;
    if ( !v33 )
      goto LABEL_156;
    if ( !v33->max_length )
      goto LABEL_157;
    v34 = v33->m_Items[0];
    if ( !v34 )
      goto LABEL_156;
    iconSprite = (UIWidget_o *)v34->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_156;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v36 = v10->fields.extraGiftIconComponents;
    if ( !v36 )
      goto LABEL_156;
    if ( !v36->max_length )
      goto LABEL_157;
    v37 = v36->m_Items[0];
    if ( !v37 )
      goto LABEL_156;
    this = (SummonResultComponent_o *)v37->fields.iconSprite;
    if ( !this )
      goto LABEL_156;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v38 = v10->fields.extraGiftIconComponents;
    if ( !v38 )
      goto LABEL_156;
    if ( !v38->max_length )
      goto LABEL_157;
    this = (SummonResultComponent_o *)v38->m_Items[0];
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v39 = v10->fields.extraGiftIconComponents;
    if ( !v39 )
      goto LABEL_156;
    if ( !v39->max_length )
LABEL_157:
      sub_1B64AD4(this, giftIds);
    if ( !v30 )
      goto LABEL_156;
    v40 = v39->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v30,
                                        0,
                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v40 )
      goto LABEL_156;
    ItemIconComponent__SetGift(v40, (GiftEntity_o *)this, -1, 0, 0LL);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v42 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      ManaMax = v42->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v44 = v10->fields.summonBeforeMana;
          v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v46 = SummonResultComponent_TypeInfo;
          v47 = v45;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v46 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v47,
            (float)v46->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0LL);
          v48 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12283/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v48 )
          {
            UILabel__set_text(v48, (System_String_o *)this, 0LL);
            v49 = v10->fields.extraGiftMsg2Lb;
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12281/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v30,
                                                0,
                                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v44;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v44 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v30,
                                                    0,
                                                    (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v115 = m_CancellationTokenSource_high;
              v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v51, v52, v53);
              this = (SummonResultComponent_o *)System_String__Format(v50, v55, 0LL);
              if ( v49 )
              {
                UILabel__set_text(v49, (System_String_o *)this, 0LL);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v56 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v56 )
                {
                  UILabel__set_fontSize(v56, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0LL);
LABEL_154:
                    SummonResultComponent__SetBonusGiftPosition(v10, v57);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_1B64ACC(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v102 = SummonResultComponent_TypeInfo;
      v103 = v101;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v102 = SummonResultComponent_TypeInfo;
      }
      v104 = v102->static_fields;
      v105 = 48LL;
      if ( adjustTitleLabel )
        v105 = 52LL;
      GameObjectExtensions__SetLocalPositionX(v103, (float)*(int *)((char *)&v104->TUTORIAL_BACK_ARROW_WAY + v105), 0LL);
      v106 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v108 = Method_System_Array_Empty_object___;
      v109 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v109 )
      {
        sub_1BB67A8(Method_System_Array_Empty_object___);
        v109 = v108[7];
      }
      v110 = *(_QWORD *)(v109 + 16);
      if ( (*(_BYTE *)(v110 + 309) & 1) == 0 )
        v110 = sub_1BB674C(v110);
      if ( !*(_DWORD *)(v110 + 224) )
        j_il2cpp_runtime_class_init_0(v110);
      v111 = *(_QWORD *)(v108[7] + 16LL);
      if ( (*(_BYTE *)(v111 + 309) & 1) == 0 )
        v111 = sub_1BB674C(v111);
      this = (SummonResultComponent_o *)System_String__Format_61398084(
                                          v107,
                                          **(System_Object_array ***)(v111 + 184),
                                          0LL);
      if ( !v106 )
        goto LABEL_156;
      UILabel__set_text(v106, (System_String_o *)this, 0LL);
      v76 = v10->fields.extraGiftMsg2Lb;
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v30,
                                          0,
                                          (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v81 = &v114;
      v114 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v71 = SummonResultComponent_TypeInfo;
      v72 = v70;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v71 = SummonResultComponent_TypeInfo;
      }
      v73 = v71->static_fields;
      v74 = 32LL;
      if ( adjustTitleLabel )
        v74 = 36LL;
      GameObjectExtensions__SetLocalPositionX(v72, (float)*(int *)((char *)&v73->TUTORIAL_BACK_ARROW_WAY + v74), 0LL);
      v75 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12283/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v75 )
        goto LABEL_156;
      UILabel__set_text(v75, (System_String_o *)this, 0LL);
      v76 = v10->fields.extraGiftMsg2Lb;
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v30,
                                          0,
                                          (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v81 = &v113;
      v113 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v81, v78, v79, v80);
    this = (SummonResultComponent_o *)System_String__Format(v77, v112, 0LL);
    if ( v76 )
    {
      UILabel__set_text(v76, (System_String_o *)this, 0LL);
      goto LABEL_154;
    }
    goto LABEL_156;
  }
}


void __fastcall SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v6; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v10; // s8
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  __int64 v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v18; // w20
  UIWidget_o *v19; // x20
  struct UILabel_o *v20; // x8

  if ( (byte_49FAE7E & 1) == 0 )
  {
    sub_1B64870(&SummonResultComponent_TypeInfo, method);
    byte_49FAE7E = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v6 = this->fields.extraGiftTitleLb;
  if ( !v6 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v6->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v10 = (float)(LocalPositionX + (float)((float)mWidth * 0.5)) + -1.0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B64AD4(extraGiftTitleLb, method);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, v10 + (float)*(int *)(v14 + 168), 0LL);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1B64ACC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v18 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + 1.0) + (float)((float)v20->fields.mWidth * 0.5),
    0LL);
}


void __fastcall SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v6; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v10; // s8
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  __int64 v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v18; // w20
  UIWidget_o *v19; // x20
  struct UILabel_o *v20; // x8

  if ( (byte_49FAE7F & 1) == 0 )
  {
    sub_1B64870(&SummonResultComponent_TypeInfo, method);
    byte_49FAE7F = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v6 = this->fields.extraGiftTitleLb;
  if ( !v6 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v6->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v10 = LocalPositionX + (float)((float)mWidth * 0.5);
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B64AD4(extraGiftTitleLb, method);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, (float)(v10 + (float)*(int *)(v14 + 168)) + 2.0, 0LL);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1B64ACC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v18 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + (float)((float)v20->fields.mWidth * 0.5)) + 2.0,
    0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__71_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_49FAE8A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_49FAE8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1B64ACC(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  bool result; // w0

  if ( (byte_49FAE81 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_49FAE81 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B64ACC(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v9,
               (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v8 == v9 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v9;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w0
  int v9; // w22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_49FAE86 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_1/*""*/, v3);
    byte_49FAE86 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( childCount >= 1 )
  {
    v6 = childCount + 1;
    while ( 1 )
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v6 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_26:
    sub_1B64ACC(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v9 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69135916(v10, 0LL);
    }
    while ( --v9 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0LL);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)fstGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  GachaInfos_array *v9; // x26
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v34; // x1
  __int64 changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x20
  float v45; // s9
  int maxPerLine; // s11
  System_Collections_Generic_List_int__o *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  int v50; // w8
  __int64 v51; // x22
  GachaInfos_o **m_Items; // x23
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_array *v54; // x24
  GachaInfos_o *v55; // x25
  UnityEngine_GameObject_o *targetGo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v58; // x26
  UnityEngine_Transform_o *v59; // x27
  const MethodInfo *v60; // x2
  int32_t objectId; // w28
  bool v62; // w27
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v64; // x0
  const MethodInfo *v65; // x3
  _QWORD *v66; // x8
  bool v67; // zf
  SummonResultInfoComponent_ClickDelegate_o *v68; // x28
  const MethodInfo *v69; // x6
  int32_t sellQp; // w26
  int32_t summonBeforeQp; // w27
  int QpMax; // w8
  int32_t sellMana; // w26
  int32_t summonBeforeMana; // w27
  int UserItemMax; // w8
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  float v79; // s12
  float v80; // s11
  float v81; // s8
  float v82; // s3
  float v83; // s0
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v85; // x1
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v87; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__61_0; // x24
  Il2CppObject *v90; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x5
  float v96; // s8
  struct UIGrid_o *v97; // x8
  GachaExtraGifts_o *v98; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v101; // x0
  System_Collections_Generic_IEnumerable_int__o *v102; // x1
  bool v103; // w4
  System_Collections_Generic_HashSet_int__o *v104; // x22
  __int64 v105; // x8
  __int64 v106; // x20
  int32_t v107; // w23
  int32_t v108; // w24
  GachaExtraGifts_o *v109; // x27
  System_Int32_array *v110; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+10h] [xbp-A0h]
  char v112; // [xsp+1Ch] [xbp-94h]
  __int64 v113; // [xsp+28h] [xbp-88h] BYREF
  System_Nullable_int__o v114; // 0:x0.8
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_49FAE7B & 1) == 0 )
  {
    sub_1B64870(&System_Action_ItemIconComponent__TypeInfo, resultList);
    sub_1B64870(&BalanceConfig_TypeInfo, v11);
    sub_1B64870(&Method_BasicHelper_ForEach_ItemIconComponent___, v12);
    sub_1B64870(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v13);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v14);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_Collider___, v15);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v16);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B64870(&LocalizationManager_TypeInfo, v23);
    sub_1B64870(&Method_System_Nullable_int__GetValueOrDefault__, v24);
    sub_1B64870(&Method_System_Nullable_int___ctor__, v25);
    sub_1B64870(&Method_System_Nullable_int__get_HasValue__, v26);
    sub_1B64870(&Method_SummonResultComponent_showResCcDetail__, v27);
    sub_1B64870(&Method_SummonResultComponent_showResSvtDetail__, v28);
    sub_1B64870(&SummonResultComponent_TypeInfo, v29);
    sub_1B64870(&Method_SummonResultComponent___c__initGachaResultList_b__61_0__, v30);
    sub_1B64870(&SummonResultComponent___c_TypeInfo, v31);
    sub_1B64870(&StringLiteral_12295/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v32);
    sub_1B64870(&StringLiteral_12317/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v33);
    sub_1B64870(&StringLiteral_1/*""*/, v34);
    byte_49FAE7B = 1;
  }
  changeSceneBtnInfo = (__int64)this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v37, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v38, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v39, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_144;
    cellWidth = fstGrid->fields.cellWidth;
    p_scdGrid = &this->fields.scdGrid;
    scdGrid = this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_144;
    v110 = extraGiftIds;
    v45 = scdGrid->fields.cellWidth;
    maxPerLine = fstGrid->fields.maxPerLine;
    v47 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v47,
      (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v47;
    p_befSvtList = &this->fields.befSvtList;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v47, v48, v49);
    v50 = v9->max_length;
    if ( v50 >= 1 )
    {
      v112 = 0;
      v51 = 0LL;
      m_Items = v9->m_Items;
      while ( (unsigned int)v51 < v50 )
      {
        if ( (unsigned int)v51 >= 6 )
          p_fstGrid = &this->fields.scdGrid;
        else
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (__int64)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_144;
        v54 = v9;
        v55 = m_Items[v51];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = (__int64)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        targetGo,
                                        transform,
                                        0LL,
                                        0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        v58 = (UnityEngine_GameObject_o *)changeSceneBtnInfo;
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                        0LL);
        v59 = (UnityEngine_Transform_o *)changeSceneBtnInfo;
        if ( !byte_49F9206 )
        {
          changeSceneBtnInfo = sub_1B64870(&UnityEngine_Vector3_TypeInfo, resultList);
          byte_49F9206 = 1;
        }
        if ( !v59 )
          goto LABEL_144;
        UnityEngine_Transform__set_localScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        if ( !v55 )
          goto LABEL_144;
        if ( v55->fields.isNew
          && (objectId = v55->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v60)) )
        {
          changeSceneBtnInfo = (__int64)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_144;
          v76 = *(_QWORD *)(changeSceneBtnInfo + 16);
          v77 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(changeSceneBtnInfo + 28);
          if ( !v76 )
            goto LABEL_144;
          v78 = *(int *)(changeSceneBtnInfo + 24);
          if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
              objectId,
              *(const MethodInfo_34921B8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
            v62 = 0;
          }
          else
          {
            v62 = 0;
            *(_DWORD *)(changeSceneBtnInfo + 24) = v78 + 1;
            *(_DWORD *)(v76 + 4 * v78 + 32) = objectId;
          }
        }
        else
        {
          v62 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v55->fields.type, 0LL);
        v64 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1B64ABC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v66 = &Method_SummonResultComponent_showResCcDetail__;
        v67 = !IsCommandCode;
        v68 = v64;
        if ( v67 )
          v66 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v64, (Il2CppObject *)this, *v66, v65);
        if ( v55->fields.sellMana || v55->fields.sellQp )
        {
          v68 = 0LL;
          v112 = 1;
        }
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        v58,
                                        (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v55,
          v62,
          v68,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v69);
        changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        sellQp = v55->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        QpMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 4LL);
        if ( summonBeforeQp + sellQp >= QpMax )
        {
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
            QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
          }
        }
        else
        {
          QpMax = this->fields.summonBeforeQp + v55->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v55->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 68LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          v9 = v54;
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          v9 = v54;
          UserItemMax = this->fields.summonBeforeMana + v55->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v50 = v9->max_length;
        if ( (int)++v51 >= v50 )
          goto LABEL_64;
      }
LABEL_145:
      sub_1B64AD4(changeSceneBtnInfo, resultList);
    }
    v112 = 0;
LABEL_64:
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    v79 = (float)max_length;
    v80 = (float)maxPerLine;
    v81 = (float)max_length <= v80 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    extraGiftIds = v110;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v82 = v79 <= v80 ? v79 : v80;
    v115.fields.x = (float)(cellWidth * -0.5) * (float)(v82 + -1.0);
    v115.fields.y = v81;
    v115.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v115, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)*p_scdGrid;
    if ( !*p_scdGrid )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v83 = (float)(v79 - v80) + -1.0;
    if ( v79 <= v80 )
      v83 = -1.0;
    v116.fields.x = (float)(v45 * -0.5) * v83;
    v116.fields.y = -62.0;
    v116.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v116, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.scdGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.autoSaleMsg;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    if ( (v112 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_144;
      v85 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (__int64)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (__int64)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_144;
      v85 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v85, 0LL);
  }
  changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  if ( !extraGiftMsgLb )
    goto LABEL_144;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  v87 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v87 = SummonResultComponent___c_TypeInfo;
  }
  _9__61_0 = (System_Action_object__o *)v87->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      v87 = SummonResultComponent___c_TypeInfo;
    }
    v90 = (Il2CppObject *)v87->static_fields->__9;
    _9__61_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__61_0, v90, Method_SummonResultComponent___c__initGachaResultList_b__61_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Action_ItemIconComponent__o *)_9__61_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v92, v93);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__61_0,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_ItemIconComponent___);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  if ( extraGiftIds && gachaExtraGiftList && *(_QWORD *)&extraGiftIds->max_length )
  {
    changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                    (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                    0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
    if ( extraGiftIds->max_length == 1 )
    {
      v96 = 0.0;
      if ( v9 )
      {
        v113 = 0LL;
        v114 = (System_Nullable_int__o)&v113;
        System_Nullable_int____ctor(
          v114,
          v9->max_length,
          (const MethodInfo_35D0064 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v113 )
          v96 = (float)SHIDWORD(v113);
      }
      v97 = this->fields.fstGrid;
      if ( v97 )
      {
        if ( !gachaExtraGiftList->max_length )
          goto LABEL_145;
        v98 = gachaExtraGiftList->m_Items[0];
        if ( v98 )
        {
          gachaExtraGiftBonusType = v98->fields.gachaExtraGiftBonusType;
          gachaExtraGiftResultType = v98->fields.gachaExtraGiftResultType;
          v101 = this;
          v102 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
          v103 = v96 > (float)v97->fields.maxPerLine;
LABEL_142:
          SummonResultComponent__SetBonusGiftDisplay(
            v101,
            v102,
            gachaExtraGiftResultType,
            gachaExtraGiftBonusType,
            v103,
            v95);
          goto LABEL_143;
        }
      }
      goto LABEL_144;
    }
    v104 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v104,
      (const MethodInfo_3365C88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v105 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v105 >= 1 )
    {
      v106 = 0LL;
      v107 = 0;
      v108 = 0;
      while ( (unsigned int)v106 < (unsigned int)v105 && (unsigned int)v106 < gachaExtraGiftList->max_length )
      {
        v109 = gachaExtraGiftList->m_Items[v106];
        if ( !v109 )
          goto LABEL_144;
        if ( v109->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v104 )
            goto LABEL_144;
          changeSceneBtnInfo = System_Collections_Generic_HashSet_int___Add(
                                 v104,
                                 extraGiftIds->m_Items[v106 + 1],
                                 (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          v107 = v109->fields.gachaExtraGiftBonusType;
          v108 = v109->fields.gachaExtraGiftResultType;
          v105 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v106 >= (int)v105 )
          goto LABEL_136;
      }
      goto LABEL_145;
    }
    v108 = 0;
    v107 = 0;
LABEL_136:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v101 = this;
      v102 = (System_Collections_Generic_IEnumerable_int__o *)v104;
      gachaExtraGiftResultType = v108;
      gachaExtraGiftBonusType = v107;
      v103 = 0;
      goto LABEL_142;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12295/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
    if ( !this->fields.extraGiftMsgLb )
LABEL_144:
      sub_1B64ACC(changeSceneBtnInfo, resultList);
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_143:
  SummonResultComponent__setListByType(this, this->fields.dispType, v94);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FAE87 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12085/*"SHOW_TALK"*/, method);
    byte_49FAE87 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B64ACC(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12085/*"SHOW_TALK"*/, 0LL);
  }
}


void __fastcall SummonResultComponent__setBeforeQpMana(
        SummonResultComponent_o *this,
        int32_t qp,
        int32_t mana,
        const MethodInfo *method)
{
  this->fields.summonBeforeQp = qp;
  this->fields.summonBeforeMana = mana;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setCenter(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mWidget; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_m_CachedPtr; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float v14; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mWidget->klass[1]._1.klass)(
                                               mWidget,
                                               mWidget->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1B64ACC(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v5 = (float32x2_t *)mWidget;
  v6 = 0LL;
  p_m_CachedPtr = (float *)&mWidget[1].fields.m_CachedPtr;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v8 = *(p_m_CachedPtr - 2);
    v9 = *(p_m_CachedPtr - 1);
    v10 = *p_m_CachedPtr;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0LL);
    if ( !mWidget )
      goto LABEL_11;
    v15.fields.x = v8;
    v15.fields.y = v9;
    v15.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mWidget,
                                       v15,
                                       0LL);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1B64AD4(mWidget, method);
  v14 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setListByType(
        SummonResultComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  int64_t closeInfo; // x0
  System_String_o *v39; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v41; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  struct SummonControl_o *v48; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x22
  int32_t gachaId; // w22
  __int64 v55; // x0
  __int64 v56; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v59; // x22
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UILabel_o *v63; // x23
  Il2CppObject *v64; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v67; // x8
  __int64 v68; // x0
  int v69; // w23
  SummonControl_c *v70; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v72; // w0
  Il2CppObject *v73; // x0
  Il2CppObject *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  UILabel_o *v78; // x22
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x21
  UserItemEntity_o *v81; // x0
  UILabel_o *v82; // x21
  struct UILabel_o *v83; // x21
  System_String_o *v84; // x1
  int32_t monitor_high; // w9
  UILabel_o *v86; // x21
  UILabel_o *v87; // x21
  UILabel_o *v88; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  struct SummonControl_o *v95; // x8
  struct SummonControl_o *v96; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v102; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v109; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v116; // s11
  float v117; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v119; // s14
  int32_t gachaTime; // [xsp+4h] [xbp-BCh] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *v122; // [xsp+10h] [xbp-B0h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v125; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v138; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = type;
  if ( (byte_49FAE7C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_1B64870(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1B64870(&DataManager_TypeInfo, v13);
    sub_1B64870(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_1B64870(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_1B64870(&FSUtility_TypeInfo, v16);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_1B64870(&int_TypeInfo, v18);
    sub_1B64870(&LocalizationManager_TypeInfo, v19);
    sub_1B64870(&NetworkManager_TypeInfo, v20);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B64870(&SummonControl_TypeInfo, v26);
    sub_1B64870(&SummonResultComponent_TypeInfo, v27);
    sub_1B64870(&TutorialFlag_TypeInfo, v28);
    sub_1B64870(&UserGachaMaster_TypeInfo, v29);
    sub_1B64870(&StringLiteral_12266/*"SUMMON_APPEND_END"*/, v30);
    sub_1B64870(&StringLiteral_12072/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_1B64870(&StringLiteral_12297/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_1B64870(&StringLiteral_12077/*"SHORT_SERVANT_SELL"*/, v33);
    sub_1B64870(&StringLiteral_12301/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_1B64870(&StringLiteral_12323/*"SUMMON_TICKET_END"*/, v35);
    sub_1B64870(&StringLiteral_12062/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1B64870(&StringLiteral_3859/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_49FAE7C = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  v122 = 0LL;
  entity = 0LL;
  appendEnt = 0LL;
  if ( v3 == 1 )
  {
    closeInfo = (int64_t)this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 0, 0LL);
    closeInfo = (int64_t)this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3859/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_175;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_175;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12077/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_175;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_175;
    v126.fields.r = 1.0;
    v126.fields.g = 1.0;
    v126.fields.b = 1.0;
    v126.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v126, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v127.fields.r = 1.0;
    v127.fields.g = 1.0;
    v127.fields.b = 1.0;
    v127.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v127, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v128.fields.r = 1.0;
    v128.fields.g = 1.0;
    v128.fields.b = 1.0;
    v128.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v128, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v129.fields.r = 1.0;
    v129.fields.g = 1.0;
    v129.fields.b = 1.0;
    v129.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v129, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v130, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_175;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_175;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v48 = this->fields.summonCtrl;
    if ( !v48 )
      goto LABEL_175;
    gachaParamData = v48->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_175;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v45, v46, v47);
    closeInfo = (int64_t)System_String__Format(v41, v52, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_175;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v53 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_175;
    UILabel__SetCondensedScale(v53, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
          v55 = sub_1BB674C(v55);
        v56 = *(_QWORD *)(*(_QWORD *)(v55 + 192) + 16LL);
        if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
          v56 = sub_1BB674C(v56);
        closeInfo = **(_QWORD **)(v56 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !Master_object )
          goto LABEL_175;
        closeInfo = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)Master_object, &entity, closeInfo, gachaId, 0LL);
        if ( !MasterData_object )
          goto LABEL_175;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v122,
          gachaId,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v122 )
          goto LABEL_175;
        v59 = (System_String_o *)closeInfo;
        if ( !LODWORD(v122[4].monitor) )
          goto LABEL_52;
        closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v122 || !closeInfo )
          goto LABEL_175;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      (int32_t)v122[4].monitor,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_52;
        v63 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v60, v61, v62);
        closeInfo = (int64_t)System_String__Format(v41, v64, 0LL);
        if ( !v63 )
          goto LABEL_175;
        UILabel__set_text(v63, (System_String_o *)closeInfo, 0LL);
LABEL_52:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_175;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v122,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12266/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_114:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_175;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnSpr;
            if ( !closeInfo )
              goto LABEL_175;
            v135.fields.r = 0.35547;
            v135.fields.a = 1.0;
            v135.fields.g = 0.35547;
            v135.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v135, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v136.fields.r = 0.5;
            v136.fields.g = 0.5;
            v136.fields.b = 0.5;
            v136.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v136, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v86 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v86 )
              goto LABEL_175;
            UILabel__SetCondensedScale(
              v86,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v84 = v59;
LABEL_122:
            UILabel__set_text((UILabel_o *)closeInfo, v84, 0LL);
            goto LABEL_144;
          }
        }
        else if ( entity )
        {
          if ( !v122 )
            goto LABEL_175;
          monitor_high = HIDWORD(v122[5].monitor);
          if ( monitor_high >= 1 && entity->fields.num >= monitor_high )
            goto LABEL_114;
        }
LABEL_110:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v133.fields.r = 1.0;
        v133.fields.g = 1.0;
        v133.fields.b = 1.0;
        v133.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v133, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v134.fields.r = 1.0;
        v134.fields.g = 1.0;
        v134.fields.b = 1.0;
        v134.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v134, 0LL);
LABEL_144:
        v95 = this->fields.summonCtrl;
        if ( v95 )
        {
          closeInfo = (int64_t)v95->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v96 = this->fields.summonCtrl;
            if ( v96 )
            {
              v96->fields.isResult = 1;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( TutorialFlag__IsProgressDone(2, 0LL) )
              {
                closeInfo = (int64_t)this->fields.formationBtnLabel;
                if ( closeInfo )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                  closeInfo = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
                  if ( closeInfo )
                  {
                    closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)closeInfo,
                                           (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v98, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v99, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v100 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v100, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                      if ( closeInfo )
                                      {
                                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                        break;
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
              else
              {
                touchBlocker = (Il2CppObject *)this->fields.touchBlocker;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v102 = UnityEngine_Object__Instantiate_object_(
                         touchBlocker,
                         (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v102;
                sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.blocker, (int32_t)v102, v104, v105);
                blocker = this->fields.blocker;
                v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v107, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v109 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v109 = SummonResultComponent_TypeInfo;
                }
                static_fields = v109->static_fields;
                m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  v116 = OffsetX;
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v117 = m_XMin - v116;
                    v137.fields.m_XMin = v117;
                    v137.fields.m_YMin = m_YMin;
                    v137.fields.m_Width = m_Width;
                    v137.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v137, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      v119 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v125.fields.x = TutorialBackArrowPos.fields.x - v119;
                        v125.fields.y = TutorialBackArrowPos.fields.y;
                        v138.fields.m_XMin = v117;
                        v138.fields.m_YMin = m_YMin;
                        v138.fields.m_Width = m_Width;
                        v138.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v125,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v138,
                          0LL,
                          0LL);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_175;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v67 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
          v67 = sub_1BB674C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
        v68 = *(_QWORD *)(*(_QWORD *)(v67 + 192) + 16LL);
        if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
          v68 = sub_1BB674C(v68);
        closeInfo = **(_QWORD **)(v68 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_175;
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_175;
        v69 = *(_DWORD *)(closeInfo + 24);
        v70 = SummonControl_TypeInfo;
        if ( !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v70 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v70->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v72 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                &maxNum[1],
                maxNum,
                0LL);
        if ( maxNum[1] > 0 || v72 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_175;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v87 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v87 )
            goto LABEL_175;
          UILabel__set_text(v87, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v88 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v88 )
            goto LABEL_175;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          *(_QWORD *)&type = (unsigned int)gachaParamData->fields.gachaTime;
          if ( type == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_175;
            type = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v69 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_175;
              if ( v69 < 400 )
                type = 1;
              else
                type = v69 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_175;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v90 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v91, v92, v93);
          closeInfo = (int64_t)System_String__Format(v41, v94, 0LL);
          if ( !v90 )
            goto LABEL_175;
          UILabel__set_text(v90, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v88 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v88 )
LABEL_175:
            sub_1B64ACC(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v88, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_144;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        v73 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_30D6180 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v73 )
          goto LABEL_89;
        v74 = v73;
        if ( !LODWORD(v73[4].monitor) )
          goto LABEL_89;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v74[4].monitor,
               0LL) != 9 )
          goto LABEL_89;
        v78 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v75, v76, v77);
        closeInfo = (int64_t)System_String__Format(v41, v79, 0LL);
        if ( !v78 )
          goto LABEL_175;
        UILabel__set_text(v78, (System_String_o *)closeInfo, 0LL);
LABEL_89:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v80 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v80 )
          goto LABEL_175;
        v81 = UserItemMaster__GetEntity((UserItemMaster_o *)v80, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v81 && v81->fields.num > 0 )
          goto LABEL_110;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v131.fields.r = 0.35547;
        v131.fields.a = 1.0;
        v131.fields.g = 0.35547;
        v131.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v131, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v132.fields.r = 0.5;
        v132.fields.g = 0.5;
        v132.fields.b = 0.5;
        v132.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v132, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v82 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v82 )
          goto LABEL_175;
        UILabel__SetCondensedScale(
          v82,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v83 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v83 )
          goto LABEL_175;
        v84 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v83;
        goto LABEL_122;
      default:
        goto LABEL_144;
    }
  }
  this->fields.dispType = v3;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *SelfUserGame; // x0
  __int64 v9; // x1
  int klass; // w10
  BalanceConfig_c *v11; // x0
  UILabel_o *svtTitleLb; // x20
  UILabel_o *svtNumLb; // x20
  UILabel_o *svtMaxLb; // x20
  UILabel_o *svtEqTitleLb; // x20
  UILabel_o *svtEqNumLb; // x20
  UILabel_o *svtEqMaxLb; // x20
  UILabel_o *CcNumLb; // x20
  UILabel_o *CcMaxLb; // x19
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t servantSum; // [xsp+10h] [xbp-30h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+14h] [xbp-2Ch] BYREF
  int klass_high; // [xsp+18h] [xbp-28h] BYREF
  int v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FAE82 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64870(&StringLiteral_7069/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_1B64870(&StringLiteral_7068/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_49FAE82 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v24 = klass;
  if ( !byte_49F9C6B )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, v9);
    byte_49F9C6B = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v11->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7069/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7068/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&klass_high, 0LL);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0LL),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantEquipSum, 0LL),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0LL),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&CommandCodeFrameMax, 0LL),
        !CcMaxLb) )
  {
LABEL_23:
    sub_1B64ACC(SelfUserGame, v9);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_49FAE84 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, usrSvtId);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__, v7);
    sub_1B64870(&SummonResultComponent___c__DisplayClass70_0_TypeInfo, v8);
    byte_49FAE84 = 1;
  }
  v9 = sub_1B64ABC(SummonResultComponent___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B64ACC(v10, v11);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_49FAE83 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, usrSvtId);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__, v7);
    sub_1B64870(&SummonResultComponent___c__DisplayClass69_0_TypeInfo, v8);
    byte_49FAE83 = 1;
  }
  v9 = sub_1B64ABC(SummonResultComponent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B64ACC(v10, v11);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAE8B & 1) == 0 )
  {
    sub_1B64870(&SummonResultComponent___c_TypeInfo, v1);
    byte_49FAE8B = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall SummonResultComponent___c___ctor(SummonResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c___initGachaResultList_b__61_0(
        SummonResultComponent___c_o *this,
        ItemIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm
    || (ItemIconComponent__Clear(elm, 0LL),
        (this = (SummonResultComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)elm,
                                                 0LL)) == 0LL) )
  {
    sub_1B64ACC(this, elm);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass69_0___ctor(
        SummonResultComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass69_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v9; // x19
  ServantStatusDialog_EndDelegate_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x19

  if ( (byte_49FAE8C & 1) == 0 )
  {
    sub_1B64870(&AvalonSceneManager_TypeInfo, method);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_49FAE8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v10, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30356340(v9, 8, usrSvtId, v10, 0LL, 0LL);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)v11;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_8:
    sub_1B64ACC(v11, v12);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass70_0___ctor(
        SummonResultComponent___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass70_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v12; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v14; // x19
  ServantStatusDialog_EndDelegate_o *v15; // x21
  CommonUI_o *v16; // x19

  if ( (byte_49FAE8D & 1) == 0 )
  {
    sub_1B64870(&AvalonSceneManager_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_49FAE8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_30D632C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30359664(v14, 0, (UserCommandCodeEntity_o *)Entity, v15, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v16 )
LABEL_10:
    sub_1B64ACC(Instance, v10);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}