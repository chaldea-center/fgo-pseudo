void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_49F8D9A & 1) == 0 )
  {
    sub_1B640C8(&SummonResultComponent_TypeInfo, v1);
    byte_49F8D9A = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BA2A80;
  v3 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BA3A80;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = xmmword_BA3A90;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = xmmword_BA26A0;
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

  if ( (byte_49F8D99 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonResultComponent_CheckLimitOver__, method);
    sub_1B640C8(&StringLiteral_5467/*"END_SUMMON"*/, v3);
    sub_1B640C8(&StringLiteral_8220/*"LIMIT_OVER"*/, v4);
    byte_49F8D99 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8220/*"LIMIT_OVER"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5467/*"END_SUMMON"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 0;
  }
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  ServantStatusBattleListViewItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8D91 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8D91 = 1;
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
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1B6406C(p_blocker, 0, v6, v7);
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
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0

  if ( (byte_49F8D96 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SummonResultComponent__DialogCallBack_b__71_0__, v6);
    byte_49F8D96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__71_0__, 0LL);
  if ( !v11 )
    sub_1B64324(v14);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
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
  __int64 v29; // x1
  bool v30; // zf
  System_Collections_Generic_List_object__o *v31; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v34; // x8
  ItemIconComponent_o *v35; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v37; // x8
  ItemIconComponent_o *v38; // x8
  struct ItemIconComponent_array *v39; // x8
  struct ItemIconComponent_array *v40; // x8
  ItemIconComponent_o *v41; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v43; // x0
  int32_t ManaMax; // w23
  int32_t v45; // w26
  UnityEngine_GameObject_o *v46; // x0
  SummonResultComponent_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x21
  UILabel_o *v49; // x21
  UILabel_o *v50; // x21
  System_String_o *v51; // x22
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v53; // x0
  UILabel_o *v54; // x20
  const MethodInfo *v55; // x1
  struct ItemIconComponent_array *v56; // x8
  __int64 v57; // x24
  int max_length; // w9
  unsigned int v59; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v61; // x8
  __int64 v62; // x8
  struct ItemIconComponent_array *v63; // x8
  ItemIconComponent_o *v64; // x22
  struct ItemIconComponent_array *v65; // x8
  bool v66; // w1
  struct ItemIconComponent_array *v67; // x8
  UnityEngine_GameObject_o *v68; // x0
  SummonResultComponent_c *v69; // x8
  UnityEngine_GameObject_o *v70; // x22
  struct SummonResultComponent_StaticFields *v71; // x8
  __int64 v72; // x9
  UILabel_o *v73; // x21
  UILabel_o *v74; // x21
  System_String_o *v75; // x22
  int *v76; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v78; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v80; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v82; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v84; // x21
  _QWORD *v85; // x22
  __int64 v86; // x8
  __int64 v87; // x0
  __int64 v88; // x0
  System_String_o *v89; // x0
  _QWORD *v90; // x22
  System_String_o *v91; // x21
  __int64 v92; // x8
  __int64 v93; // x0
  __int64 v94; // x0
  const MethodInfo *v95; // x1
  UnityEngine_GameObject_o *v96; // x0
  SummonResultComponent_c *v97; // x8
  UnityEngine_GameObject_o *v98; // x22
  struct SummonResultComponent_StaticFields *v99; // x8
  __int64 v100; // x9
  UILabel_o *v101; // x21
  System_String_o *v102; // x22
  _QWORD *v103; // x23
  __int64 v104; // x8
  __int64 v105; // x0
  __int64 v106; // x0
  Il2CppObject *v107; // x0
  int v108; // [xsp+Ch] [xbp-54h] BYREF
  int v109; // [xsp+18h] [xbp-48h] BYREF
  int v110; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_49F8D8E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, giftIds);
    sub_1B640C8(&BalanceConfig_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&SummonResultComponent_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_12276/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_12278/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v20);
    sub_1B640C8(&StringLiteral_12280/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_12291/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, v22);
    sub_1B640C8(&StringLiteral_12292/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v23);
    sub_1B640C8(&StringLiteral_12277/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v24);
    sub_1B640C8(&StringLiteral_12290/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, v25);
    this = (SummonResultComponent_o *)sub_1B640C8(&StringLiteral_12279/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v26);
    byte_49F8D8E = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0LL);
    v30 = giftBonusType == 2;
    v31 = (System_Collections_Generic_List_object__o *)this;
    if ( v30 )
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
        v56 = v10->fields.extraGiftIconComponents;
        if ( !v56 )
          goto LABEL_156;
        v57 = 4LL;
        while ( 1 )
        {
          max_length = v56->max_length;
          v59 = v57 - 4;
          if ( (int)v57 - 4 >= max_length )
            break;
          if ( v59 >= max_length )
            goto LABEL_157;
          this = (SummonResultComponent_o *)*((_QWORD *)&v56->obj.klass + v57);
          if ( !this )
            goto LABEL_156;
          if ( (signed int)v59 >= v31->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0LL);
            v67 = v10->fields.extraGiftIconComponents;
            if ( !v67 )
              goto LABEL_156;
            if ( v59 >= v67->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v67->obj.klass + v57);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v66 = 0;
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
            v61 = v10->fields.extraGiftIconComponents;
            if ( !v61 )
              goto LABEL_156;
            if ( v59 >= v61->max_length )
              goto LABEL_157;
            v62 = *((_QWORD *)&v61->obj.klass + v57);
            if ( !v62 )
              goto LABEL_156;
            this = *(SummonResultComponent_o **)(v62 + 40);
            if ( !this )
              goto LABEL_156;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v63 = v10->fields.extraGiftIconComponents;
            if ( !v63 )
              goto LABEL_156;
            if ( v59 >= v63->max_length )
              goto LABEL_157;
            v64 = (ItemIconComponent_o *)*((_QWORD *)&v63->obj.klass + v57);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v31,
                                                v59,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v64 )
              goto LABEL_156;
            ItemIconComponent__SetGift(v64, (GiftEntity_o *)this, -1, 0, 0LL);
            v65 = v10->fields.extraGiftIconComponents;
            if ( !v65 )
              goto LABEL_156;
            if ( v59 >= v65->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v65->obj.klass + v57);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v66 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v66, 0LL);
          v56 = v10->fields.extraGiftIconComponents;
          ++v57;
          if ( !v56 )
            goto LABEL_156;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v78 = SummonResultComponent_TypeInfo;
        size = v31->fields._size;
        v80 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v78 = SummonResultComponent_TypeInfo;
        }
        static_fields = v78->static_fields;
        v82 = 44LL;
        if ( size == 1 )
          v82 = 40LL;
        GameObjectExtensions__SetLocalPositionX(
          v80,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v82),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12291/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v85 = Method_System_Array_Empty_object___;
        v86 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v86 )
        {
          sub_1BB6000(Method_System_Array_Empty_object___);
          v86 = v85[7];
        }
        v87 = *(_QWORD *)(v86 + 16);
        if ( (*(_BYTE *)(v87 + 309) & 1) == 0 )
          v87 = sub_1BB5FA4(v87);
        if ( !*(_DWORD *)(v87 + 224) )
          j_il2cpp_runtime_class_init_0(v87);
        v88 = *(_QWORD *)(v85[7] + 16LL);
        if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
          v88 = sub_1BB5FA4(v88);
        this = (SummonResultComponent_o *)System_String__Format_61389904(
                                            v84,
                                            **(System_Object_array ***)(v88 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12290/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v90 = Method_System_Array_Empty_object___;
        v91 = v89;
        v92 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v92 )
        {
          sub_1BB6000(Method_System_Array_Empty_object___);
          v92 = v90[7];
        }
        v93 = *(_QWORD *)(v92 + 16);
        if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
          v93 = sub_1BB5FA4(v93);
        if ( !*(_DWORD *)(v93 + 224) )
          j_il2cpp_runtime_class_init_0(v93);
        v94 = *(_QWORD *)(v90[7] + 16LL);
        if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
          v94 = sub_1BB5FA4(v94);
        this = (SummonResultComponent_o *)System_String__Format_61389904(
                                            v91,
                                            **(System_Object_array ***)(v94 + 184),
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12292/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v95);
      return;
    }
    v34 = v10->fields.extraGiftIconComponents;
    if ( !v34 )
      goto LABEL_156;
    if ( !v34->max_length )
      goto LABEL_157;
    v35 = v34->m_Items[0];
    if ( !v35 )
      goto LABEL_156;
    iconSprite = (UIWidget_o *)v35->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_156;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v37 = v10->fields.extraGiftIconComponents;
    if ( !v37 )
      goto LABEL_156;
    if ( !v37->max_length )
      goto LABEL_157;
    v38 = v37->m_Items[0];
    if ( !v38 )
      goto LABEL_156;
    this = (SummonResultComponent_o *)v38->fields.iconSprite;
    if ( !this )
      goto LABEL_156;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v39 = v10->fields.extraGiftIconComponents;
    if ( !v39 )
      goto LABEL_156;
    if ( !v39->max_length )
      goto LABEL_157;
    this = (SummonResultComponent_o *)v39->m_Items[0];
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
    v40 = v10->fields.extraGiftIconComponents;
    if ( !v40 )
      goto LABEL_156;
    if ( !v40->max_length )
LABEL_157:
      sub_1B6432C(this, v29);
    if ( !v31 )
      goto LABEL_156;
    v41 = v40->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v31,
                                        0,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v41 )
      goto LABEL_156;
    ItemIconComponent__SetGift(v41, (GiftEntity_o *)this, -1, 0, 0LL);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      ManaMax = v43->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v45 = v10->fields.summonBeforeMana;
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v47 = SummonResultComponent_TypeInfo;
          v48 = v46;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v47 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v48,
            (float)v47->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0LL);
          v49 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v49 )
          {
            UILabel__set_text(v49, (System_String_o *)this, 0LL);
            v50 = v10->fields.extraGiftMsg2Lb;
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12278/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v31,
                                                0,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v45;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v45 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v31,
                                                    0,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v110 = m_CancellationTokenSource_high;
              v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
              this = (SummonResultComponent_o *)System_String__Format(v51, v53, 0LL);
              if ( v50 )
              {
                UILabel__set_text(v50, (System_String_o *)this, 0LL);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v54 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v54 )
                {
                  UILabel__set_fontSize(v54, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0LL);
LABEL_154:
                    SummonResultComponent__SetBonusGiftPosition(v10, v55);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_1B64324(this);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v97 = SummonResultComponent_TypeInfo;
      v98 = v96;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v97 = SummonResultComponent_TypeInfo;
      }
      v99 = v97->static_fields;
      v100 = 48LL;
      if ( adjustTitleLabel )
        v100 = 52LL;
      GameObjectExtensions__SetLocalPositionX(v98, (float)*(int *)((char *)&v99->TUTORIAL_BACK_ARROW_WAY + v100), 0LL);
      v101 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v103 = Method_System_Array_Empty_object___;
      v104 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v104 )
      {
        sub_1BB6000(Method_System_Array_Empty_object___);
        v104 = v103[7];
      }
      v105 = *(_QWORD *)(v104 + 16);
      if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
        v105 = sub_1BB5FA4(v105);
      if ( !*(_DWORD *)(v105 + 224) )
        j_il2cpp_runtime_class_init_0(v105);
      v106 = *(_QWORD *)(v103[7] + 16LL);
      if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
        v106 = sub_1BB5FA4(v106);
      this = (SummonResultComponent_o *)System_String__Format_61389904(
                                          v102,
                                          **(System_Object_array ***)(v106 + 184),
                                          0LL);
      if ( !v101 )
        goto LABEL_156;
      UILabel__set_text(v101, (System_String_o *)this, 0LL);
      v74 = v10->fields.extraGiftMsg2Lb;
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12276/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v31,
                                          0,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v76 = &v109;
      v109 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v69 = SummonResultComponent_TypeInfo;
      v70 = v68;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v69 = SummonResultComponent_TypeInfo;
      }
      v71 = v69->static_fields;
      v72 = 32LL;
      if ( adjustTitleLabel )
        v72 = 36LL;
      GameObjectExtensions__SetLocalPositionX(v70, (float)*(int *)((char *)&v71->TUTORIAL_BACK_ARROW_WAY + v72), 0LL);
      v73 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v73 )
        goto LABEL_156;
      UILabel__set_text(v73, (System_String_o *)this, 0LL);
      v74 = v10->fields.extraGiftMsg2Lb;
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v31,
                                          0,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v76 = &v108;
      v108 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v76);
    this = (SummonResultComponent_o *)System_String__Format(v75, v107, 0LL);
    if ( v74 )
    {
      UILabel__set_text(v74, (System_String_o *)this, 0LL);
      goto LABEL_154;
    }
    goto LABEL_156;
  }
}


void __fastcall SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  float LocalPositionX; // s0
  struct UILabel_o *v7; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v11; // s8
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x20
  __int64 v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v19; // w20
  UIWidget_o *v20; // x20
  struct UILabel_o *v21; // x8

  if ( (byte_49F8D8F & 1) == 0 )
  {
    sub_1B640C8(&SummonResultComponent_TypeInfo, method);
    byte_49F8D8F = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v7 = this->fields.extraGiftTitleLb;
  if ( !v7 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v7->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v11 = (float)(LocalPositionX + (float)((float)mWidth * 0.5)) + -1.0;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B6432C(extraGiftTitleLb, v5);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        GameObjectExtensions__SetLocalPositionX(v16, v11 + (float)*(int *)(v15 + 168), 0LL);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1B64324(extraGiftTitleLb);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + 1.0) + (float)((float)v21->fields.mWidth * 0.5),
    0LL);
}


void __fastcall SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  float LocalPositionX; // s0
  struct UILabel_o *v7; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v11; // s8
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x20
  __int64 v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v19; // w20
  UIWidget_o *v20; // x20
  struct UILabel_o *v21; // x8

  if ( (byte_49F8D90 & 1) == 0 )
  {
    sub_1B640C8(&SummonResultComponent_TypeInfo, method);
    byte_49F8D90 = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v7 = this->fields.extraGiftTitleLb;
  if ( !v7 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v7->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v11 = LocalPositionX + (float)((float)mWidth * 0.5);
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B6432C(extraGiftTitleLb, v5);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        GameObjectExtensions__SetLocalPositionX(v16, (float)(v11 + (float)*(int *)(v15 + 168)) + 2.0, 0LL);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1B64324(extraGiftTitleLb);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + (float)((float)v21->fields.mWidth * 0.5)) + 2.0,
    0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__71_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  Il2CppObject *v10; // x0
  CommonUI_o *v11; // x19

  if ( (byte_49F8D9B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_49F8D9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
  v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)v10;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v11 )
LABEL_8:
    sub_1B64324(v10);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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

  if ( (byte_49F8D92 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_49F8D92 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B64324(befSvtList);
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
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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

  if ( (byte_49F8D97 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F8D97 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_26:
    sub_1B64324(fstGrid);
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
      UnityEngine_Object__Destroy_69127736(v10, 0LL);
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
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x20
  float v48; // s9
  int maxPerLine; // s11
  System_Collections_Generic_List_int__o *v50; // x24
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  int v54; // w8
  __int64 v55; // x22
  GachaInfos_o **m_Items; // x23
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_array *v58; // x24
  GachaInfos_o *v59; // x25
  UnityEngine_GameObject_o *targetGo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v62; // x26
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x27
  const MethodInfo *v65; // x2
  int32_t objectId; // w28
  bool v67; // w27
  bool IsCommandCode; // w28
  __int64 v69; // x1
  __int64 v70; // x2
  SummonResultInfoComponent_ClickDelegate_o *v71; // x0
  const MethodInfo *v72; // x3
  _QWORD *v73; // x8
  bool v74; // zf
  SummonResultInfoComponent_ClickDelegate_o *v75; // x28
  const MethodInfo *v76; // x6
  int32_t sellQp; // w26
  int32_t summonBeforeQp; // w27
  int QpMax; // w8
  int32_t sellMana; // w26
  int32_t summonBeforeMana; // w27
  int UserItemMax; // w8
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  float v86; // s12
  float v87; // s11
  float v88; // s8
  float v89; // s3
  float v90; // s0
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v92; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v94; // x1
  __int64 v95; // x2
  SummonResultComponent___c_c *v96; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__61_0; // x24
  Il2CppObject *v99; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  const MethodInfo *v103; // x2
  __int64 v104; // x2
  const MethodInfo *v105; // x5
  float v106; // s8
  struct UIGrid_o *v107; // x8
  GachaExtraGifts_o *v108; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v111; // x0
  System_Collections_Generic_IEnumerable_int__o *v112; // x1
  bool v113; // w4
  System_Collections_Generic_HashSet_int__o *v114; // x22
  __int64 v115; // x8
  __int64 v116; // x20
  int32_t v117; // w23
  int32_t v118; // w24
  GachaExtraGifts_o *v119; // x27
  System_Int32_array *v120; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+10h] [xbp-A0h]
  char v122; // [xsp+1Ch] [xbp-94h]
  __int64 v123; // [xsp+28h] [xbp-88h] BYREF
  System_Nullable_int__o v124; // 0:x0.8
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_49F8D8C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ItemIconComponent__TypeInfo, resultList);
    sub_1B640C8(&BalanceConfig_TypeInfo, v11);
    sub_1B640C8(&Method_BasicHelper_ForEach_ItemIconComponent___, v12);
    sub_1B640C8(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Collider___, v15);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&Method_System_Nullable_int__GetValueOrDefault__, v24);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v25);
    sub_1B640C8(&Method_System_Nullable_int__get_HasValue__, v26);
    sub_1B640C8(&Method_SummonResultComponent_showResCcDetail__, v27);
    sub_1B640C8(&Method_SummonResultComponent_showResSvtDetail__, v28);
    sub_1B640C8(&SummonResultComponent_TypeInfo, v29);
    sub_1B640C8(&Method_SummonResultComponent___c__initGachaResultList_b__61_0__, v30);
    sub_1B640C8(&SummonResultComponent___c_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_12292/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v32);
    sub_1B640C8(&StringLiteral_12314/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v33);
    sub_1B640C8(&StringLiteral_1/*""*/, v34);
    byte_49F8D8C = 1;
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
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, v40);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_144;
    cellWidth = fstGrid->fields.cellWidth;
    p_scdGrid = &this->fields.scdGrid;
    scdGrid = this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_144;
    v120 = extraGiftIds;
    v48 = scdGrid->fields.cellWidth;
    maxPerLine = fstGrid->fields.maxPerLine;
    v50 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v41, v42);
    System_Collections_Generic_List_int____ctor(
      v50,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v50;
    p_befSvtList = &this->fields.befSvtList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v50, v51, v52);
    v54 = v9->max_length;
    if ( v54 >= 1 )
    {
      v122 = 0;
      v55 = 0LL;
      m_Items = v9->m_Items;
      while ( (unsigned int)v55 < v54 )
      {
        if ( (unsigned int)v55 >= 6 )
          p_fstGrid = &this->fields.scdGrid;
        else
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (__int64)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_144;
        v58 = v9;
        v59 = m_Items[v55];
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
        v62 = (UnityEngine_GameObject_o *)changeSceneBtnInfo;
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                        0LL);
        v64 = (UnityEngine_Transform_o *)changeSceneBtnInfo;
        if ( !byte_49F7116 )
        {
          changeSceneBtnInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v63);
          byte_49F7116 = 1;
        }
        if ( !v64 )
          goto LABEL_144;
        UnityEngine_Transform__set_localScale(v64, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        if ( !v59 )
          goto LABEL_144;
        if ( v59->fields.isNew
          && (objectId = v59->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v65)) )
        {
          changeSceneBtnInfo = (__int64)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_144;
          v83 = *(_QWORD *)(changeSceneBtnInfo + 16);
          v84 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(changeSceneBtnInfo + 28);
          if ( !v83 )
            goto LABEL_144;
          v85 = *(int *)(changeSceneBtnInfo + 24);
          if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
              objectId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            v67 = 0;
          }
          else
          {
            v67 = 0;
            *(_DWORD *)(changeSceneBtnInfo + 24) = v85 + 1;
            *(_DWORD *)(v83 + 4 * v85 + 32) = objectId;
          }
        }
        else
        {
          v67 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v59->fields.type, 0LL);
        v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1B64314(
                                                             SummonResultInfoComponent_ClickDelegate_TypeInfo,
                                                             v69,
                                                             v70);
        v73 = &Method_SummonResultComponent_showResCcDetail__;
        v74 = !IsCommandCode;
        v75 = v71;
        if ( v74 )
          v73 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v71, (Il2CppObject *)this, *v73, v72);
        if ( v59->fields.sellMana || v59->fields.sellQp )
        {
          v75 = 0LL;
          v122 = 1;
        }
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        v62,
                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v59,
          v67,
          v75,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v76);
        changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        sellQp = v59->fields.sellQp;
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
          QpMax = this->fields.summonBeforeQp + v59->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v59->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 68LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          v9 = v58;
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          v9 = v58;
          UserItemMax = this->fields.summonBeforeMana + v59->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v54 = v9->max_length;
        if ( (int)++v55 >= v54 )
          goto LABEL_64;
      }
LABEL_145:
      sub_1B6432C(changeSceneBtnInfo, v53);
    }
    v122 = 0;
LABEL_64:
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    v86 = (float)max_length;
    v87 = (float)maxPerLine;
    v88 = (float)max_length <= v87 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    extraGiftIds = v120;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v89 = v86 <= v87 ? v86 : v87;
    v125.fields.x = (float)(cellWidth * -0.5) * (float)(v89 + -1.0);
    v125.fields.y = v88;
    v125.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v125, 0LL);
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
    v90 = (float)(v86 - v87) + -1.0;
    if ( v86 <= v87 )
      v90 = -1.0;
    v126.fields.x = (float)(v48 * -0.5) * v90;
    v126.fields.y = -62.0;
    v126.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v126, 0LL);
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
    if ( (v122 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12314/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_144;
      v92 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (__int64)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (__int64)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_144;
      v92 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v92, 0LL);
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
  v96 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v96 = SummonResultComponent___c_TypeInfo;
  }
  _9__61_0 = (System_Action_object__o *)v96->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      v96 = SummonResultComponent___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v96->static_fields->__9;
    _9__61_0 = (System_Action_object__o *)sub_1B64314(System_Action_ItemIconComponent__TypeInfo, v94, v95);
    System_Action_object____ctor(_9__61_0, v99, Method_SummonResultComponent___c__initGachaResultList_b__61_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Action_ItemIconComponent__o *)_9__61_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v101, v102);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__61_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      v106 = 0.0;
      if ( v9 )
      {
        v123 = 0LL;
        v124 = (System_Nullable_int__o)&v123;
        System_Nullable_int____ctor(
          v124,
          v9->max_length,
          (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v123 )
          v106 = (float)SHIDWORD(v123);
      }
      v107 = this->fields.fstGrid;
      if ( v107 )
      {
        if ( !gachaExtraGiftList->max_length )
          goto LABEL_145;
        v108 = gachaExtraGiftList->m_Items[0];
        if ( v108 )
        {
          gachaExtraGiftBonusType = v108->fields.gachaExtraGiftBonusType;
          gachaExtraGiftResultType = v108->fields.gachaExtraGiftResultType;
          v111 = this;
          v112 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
          v113 = v106 > (float)v107->fields.maxPerLine;
LABEL_142:
          SummonResultComponent__SetBonusGiftDisplay(
            v111,
            v112,
            gachaExtraGiftResultType,
            gachaExtraGiftBonusType,
            v113,
            v105);
          goto LABEL_143;
        }
      }
      goto LABEL_144;
    }
    v114 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                          System_Collections_Generic_HashSet_int__TypeInfo,
                                                          v53,
                                                          v104);
    System_Collections_Generic_HashSet_int____ctor(
      v114,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v115 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v115 >= 1 )
    {
      v116 = 0LL;
      v117 = 0;
      v118 = 0;
      while ( (unsigned int)v116 < (unsigned int)v115 && (unsigned int)v116 < gachaExtraGiftList->max_length )
      {
        v119 = gachaExtraGiftList->m_Items[v116];
        if ( !v119 )
          goto LABEL_144;
        if ( v119->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v114 )
            goto LABEL_144;
          changeSceneBtnInfo = System_Collections_Generic_HashSet_int___Add(
                                 v114,
                                 extraGiftIds->m_Items[v116 + 1],
                                 (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v117 = v119->fields.gachaExtraGiftBonusType;
          v118 = v119->fields.gachaExtraGiftResultType;
          v115 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v116 >= (int)v115 )
          goto LABEL_136;
      }
      goto LABEL_145;
    }
    v118 = 0;
    v117 = 0;
LABEL_136:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v111 = this;
      v112 = (System_Collections_Generic_IEnumerable_int__o *)v114;
      gachaExtraGiftResultType = v118;
      gachaExtraGiftBonusType = v117;
      v113 = 0;
      goto LABEL_142;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12292/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
    if ( !this->fields.extraGiftMsgLb )
LABEL_144:
      sub_1B64324(changeSceneBtnInfo);
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_143:
  SummonResultComponent__setListByType(this, this->fields.dispType, v103);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8D98 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12082/*"SHOW_TALK"*/, method);
    byte_49F8D98 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12082/*"SHOW_TALK"*/, 0LL);
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
  __int64 v4; // x1
  unsigned int klass; // w8
  float32x2_t *v6; // x20
  unsigned __int64 v7; // x21
  float *p_m_CachedPtr; // x22
  float v9; // s8
  float v10; // s9
  float v11; // s10
  int v12; // s0
  int v13; // s1
  int v14; // s2
  float v15; // s1
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mWidget->klass[1]._1.klass)(
                                               mWidget,
                                               mWidget->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1B64324(mWidget);
  }
  klass = (unsigned int)mWidget[1].klass;
  v6 = (float32x2_t *)mWidget;
  v7 = 0LL;
  p_m_CachedPtr = (float *)&mWidget[1].fields.m_CachedPtr;
  do
  {
    if ( v7 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v9 = *(p_m_CachedPtr - 2);
    v10 = *(p_m_CachedPtr - 1);
    v11 = *p_m_CachedPtr;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0LL);
    if ( !mWidget )
      goto LABEL_11;
    v16.fields.x = v9;
    v16.fields.y = v10;
    v16.fields.z = v11;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mWidget,
                                       v16,
                                       0LL);
    if ( v7 >= v6[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v12;
    *((_DWORD *)p_m_CachedPtr - 1) = v13;
    *(_DWORD *)p_m_CachedPtr = v14;
    p_m_CachedPtr += 3;
    klass = v6[3].n64_u32[0];
    ++v7;
  }
  while ( v7 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1B6432C(mWidget, v4);
  v15 = v6[5].n64_f32[0] + (float)((float)(v6[8].n64_f32[0] - v6[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v6[4],
                                                    vmul_f32(vsub_f32(v6[7], v6[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setListByType(
        SummonResultComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
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
  const MethodInfo *v44; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v46; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v50; // x0
  UILabel_o *v51; // x22
  int32_t gachaId; // w22
  __int64 v53; // x0
  __int64 v54; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v57; // x22
  UILabel_o *v58; // x23
  Il2CppObject *v59; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v62; // x8
  __int64 v63; // x0
  int v64; // w23
  SummonControl_c *v65; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v67; // w0
  int v68; // w1
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x22
  UILabel_o *v71; // x22
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x21
  UserItemEntity_o *v74; // x0
  UILabel_o *v75; // x21
  struct UILabel_o *v76; // x21
  System_String_o *v77; // x1
  int32_t monitor_high; // w9
  UILabel_o *v79; // x21
  UILabel_o *v80; // x21
  UILabel_o *v81; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v83; // x22
  Il2CppObject *v84; // x0
  struct SummonControl_o *v85; // x8
  struct SummonControl_o *v86; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v92; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v99; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v106; // s11
  float v107; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v109; // s14
  int32_t gachaTime; // [xsp+4h] [xbp-BCh] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *v112; // [xsp+10h] [xbp-B0h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v115; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v128; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49F8D8D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&FSUtility_TypeInfo, v16);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&SummonControl_TypeInfo, v26);
    sub_1B640C8(&SummonResultComponent_TypeInfo, v27);
    sub_1B640C8(&TutorialFlag_TypeInfo, v28);
    sub_1B640C8(&UserGachaMaster_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_12263/*"SUMMON_APPEND_END"*/, v30);
    sub_1B640C8(&StringLiteral_12069/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_1B640C8(&StringLiteral_12294/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_1B640C8(&StringLiteral_12074/*"SHORT_SERVANT_SELL"*/, v33);
    sub_1B640C8(&StringLiteral_12298/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_1B640C8(&StringLiteral_12320/*"SUMMON_TICKET_END"*/, v35);
    sub_1B640C8(&StringLiteral_12059/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1B640C8(&StringLiteral_3859/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_49F8D8D = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  v112 = 0LL;
  entity = 0LL;
  appendEnt = 0LL;
  if ( type == 1 )
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
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_175;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_175;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_175;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_175;
    v116.fields.r = 1.0;
    v116.fields.g = 1.0;
    v116.fields.b = 1.0;
    v116.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v116, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v117.fields.r = 1.0;
    v117.fields.g = 1.0;
    v117.fields.b = 1.0;
    v117.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v117, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v118.fields.r = 1.0;
    v118.fields.g = 1.0;
    v118.fields.b = 1.0;
    v118.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v118, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v119.fields.r = 1.0;
    v119.fields.g = 1.0;
    v119.fields.b = 1.0;
    v119.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v119, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v120.fields.r = 1.0;
    v120.fields.g = 1.0;
    v120.fields.b = 1.0;
    v120.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v120, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_175;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_175;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, v44);
    v46 = this->fields.summonCtrl;
    if ( !v46 )
      goto LABEL_175;
    gachaParamData = v46->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_175;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
    closeInfo = (int64_t)System_String__Format(v41, v50, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_175;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v51 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v51 )
      goto LABEL_175;
    UILabel__SetCondensedScale(v51, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v53 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
          v53 = sub_1BB5FA4(v53);
        v54 = *(_QWORD *)(*(_QWORD *)(v53 + 192) + 16LL);
        if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
          v54 = sub_1BB5FA4(v54);
        closeInfo = **(_QWORD **)(v54 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaMaster___);
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
          &v112,
          gachaId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12298/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v112 )
          goto LABEL_175;
        v57 = (System_String_o *)closeInfo;
        if ( !LODWORD(v112[4].monitor) )
          goto LABEL_52;
        closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v112 || !closeInfo )
          goto LABEL_175;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      (int32_t)v112[4].monitor,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_52;
        v58 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (int64_t)System_String__Format(v41, v59, 0LL);
        if ( !v58 )
          goto LABEL_175;
        UILabel__set_text(v58, (System_String_o *)closeInfo, 0LL);
LABEL_52:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_175;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v112,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SUMMON_APPEND_END"*/, 0LL);
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
            v125.fields.r = 0.35547;
            v125.fields.a = 1.0;
            v125.fields.g = 0.35547;
            v125.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v125, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v126.fields.r = 0.5;
            v126.fields.g = 0.5;
            v126.fields.b = 0.5;
            v126.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v126, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v79 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v79 )
              goto LABEL_175;
            UILabel__SetCondensedScale(
              v79,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v77 = v57;
LABEL_122:
            UILabel__set_text((UILabel_o *)closeInfo, v77, 0LL);
            goto LABEL_144;
          }
        }
        else if ( entity )
        {
          if ( !v112 )
            goto LABEL_175;
          monitor_high = HIDWORD(v112[5].monitor);
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
        v123.fields.r = 1.0;
        v123.fields.g = 1.0;
        v123.fields.b = 1.0;
        v123.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v123, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v124.fields.r = 1.0;
        v124.fields.g = 1.0;
        v124.fields.b = 1.0;
        v124.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v124, 0LL);
LABEL_144:
        v85 = this->fields.summonCtrl;
        if ( v85 )
        {
          closeInfo = (int64_t)v85->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v86 = this->fields.summonCtrl;
            if ( v86 )
            {
              v86->fields.isResult = 1;
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
                                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v88, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v89, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v90 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)closeInfo,
                                            0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v90, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v92 = UnityEngine_Object__Instantiate_object_(
                        touchBlocker,
                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v92;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.blocker, (int32_t)v92, v94, v95);
                blocker = this->fields.blocker;
                v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v97, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v99 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v99 = SummonResultComponent_TypeInfo;
                }
                static_fields = v99->static_fields;
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
                  v106 = OffsetX;
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v107 = m_XMin - v106;
                    v127.fields.m_XMin = v107;
                    v127.fields.m_YMin = m_YMin;
                    v127.fields.m_Width = m_Width;
                    v127.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v127, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      v109 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v115.fields.x = TutorialBackArrowPos.fields.x - v109;
                        v115.fields.y = TutorialBackArrowPos.fields.y;
                        v128.fields.m_XMin = v107;
                        v128.fields.m_YMin = m_YMin;
                        v128.fields.m_Width = m_Width;
                        v128.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v115,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v128,
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
        v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
          v62 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
        v63 = *(_QWORD *)(*(_QWORD *)(v62 + 192) + 16LL);
        if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
          v63 = sub_1BB5FA4(v63);
        closeInfo = **(_QWORD **)(v63 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_175;
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_175;
        v64 = *(_DWORD *)(closeInfo + 24);
        v65 = SummonControl_TypeInfo;
        if ( !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v65 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v65->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v67 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                &maxNum[1],
                maxNum,
                0LL);
        if ( maxNum[1] > 0 || v67 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_175;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v80 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12294/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v80 )
            goto LABEL_175;
          UILabel__set_text(v80, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
            goto LABEL_175;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          v68 = gachaParamData->fields.gachaTime;
          if ( v68 == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_175;
            v68 = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v64 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_175;
              if ( v64 < 400 )
                v68 = 1;
              else
                v68 = v64 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_175;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v68, 3, 0LL);
          v83 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
          closeInfo = (int64_t)System_String__Format(v41, v84, 0LL);
          if ( !v83 )
            goto LABEL_175;
          UILabel__set_text(v83, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
LABEL_175:
            sub_1B64324(closeInfo);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v81, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_144;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        v69 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v69 )
          goto LABEL_89;
        v70 = v69;
        if ( !LODWORD(v69[4].monitor) )
          goto LABEL_89;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v70[4].monitor,
               0LL) != 9 )
          goto LABEL_89;
        v71 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (int64_t)System_String__Format(v41, v72, 0LL);
        if ( !v71 )
          goto LABEL_175;
        UILabel__set_text(v71, (System_String_o *)closeInfo, 0LL);
LABEL_89:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v73 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v73 )
          goto LABEL_175;
        v74 = UserItemMaster__GetEntity((UserItemMaster_o *)v73, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v74 && v74->fields.num > 0 )
          goto LABEL_110;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v121.fields.r = 0.35547;
        v121.fields.a = 1.0;
        v121.fields.g = 0.35547;
        v121.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v121, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v122.fields.r = 0.5;
        v122.fields.g = 0.5;
        v122.fields.b = 0.5;
        v122.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v122, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v75 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v75 )
          goto LABEL_175;
        UILabel__SetCondensedScale(
          v75,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v76 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12320/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v76 )
          goto LABEL_175;
        v77 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v76;
        goto LABEL_122;
      default:
        goto LABEL_144;
    }
  }
  this->fields.dispType = type;
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

  if ( (byte_49F8D93 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_7069/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_1B640C8(&StringLiteral_7068/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_49F8D93 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v24 = klass;
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v9);
    byte_49F7B7B = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v11->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
    sub_1B64324(SelfUserGame);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_49F8D95 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtId);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__, v7);
    sub_1B640C8(&SummonResultComponent___c__DisplayClass70_0_TypeInfo, v8);
    byte_49F8D95 = 1;
  }
  v9 = sub_1B64314(SummonResultComponent___c__DisplayClass70_0_TypeInfo, usrSvtId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__,
    0LL);
  if ( !v17 )
LABEL_8:
    sub_1B64324(v10);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_49F8D94 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtId);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__, v7);
    sub_1B640C8(&SummonResultComponent___c__DisplayClass69_0_TypeInfo, v8);
    byte_49F8D94 = 1;
  }
  v9 = sub_1B64314(SummonResultComponent___c__DisplayClass69_0_TypeInfo, usrSvtId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v17 )
LABEL_8:
    sub_1B64324(v10);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8D9C & 1) == 0 )
  {
    sub_1B640C8(&SummonResultComponent___c_TypeInfo, v1);
    byte_49F8D9C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SummonResultComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x21
  Il2CppObject *v13; // x0
  CommonUI_o *v14; // x19

  if ( (byte_49F8D9D & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_49F8D9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(v12, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30354372(v9, 8, usrSvtId, v12, 0LL, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)v13;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
LABEL_8:
    sub_1B64324(v13);
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  Il2CppObject *Entity; // x20
  Il2CppObject *v11; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x21
  CommonUI_o *v17; // x19

  if ( (byte_49F8D9E & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_49F8D9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v13 = (CommonUI_o *)v11;
  v16 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
  ServantStatusDialog_EndDelegate___ctor(v16, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v13 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30357696(v13, 0, (UserCommandCodeEntity_o *)Entity, v16, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v17 )
LABEL_10:
    sub_1B64324(Instance);
  CommonUI__maskFadein(v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}