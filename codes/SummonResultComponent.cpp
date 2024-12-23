void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_4B6336D & 1) == 0 )
  {
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, v1);
    byte_4B6336D = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BE19D0;
  v3 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BE2320;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_BE1C40;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_BE15F0;
  *(_OWORD *)&v3->SMALL_FONT_SIZE = xmmword_BE23F0;
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

  if ( (byte_4B6336A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonResultComponent_CheckLimitOver__, method);
    sub_1BE4ACC(&StringLiteral_5581/*"END_SUMMON"*/, v3);
    sub_1BE4ACC(&StringLiteral_8404/*"LIMIT_OVER"*/, v4);
    byte_4B6336A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8404/*"LIMIT_OVER"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5581/*"END_SUMMON"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 0;
  }
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  PartyOrganizationUtility_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B63362 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B63362 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (PartyOrganizationUtility_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1BE4A70(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B63367 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, flg);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SummonResultComponent__DialogCallBack_b__79_0__, v6);
    byte_4B63367 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__79_0__, 0LL);
  if ( !v9 )
    sub_1BE4D28(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonResultComponent__SetActive(SummonResultComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.scrollBar, 0LL)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1BE4D28(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
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
  long double inited; // q0
  _QWORD *v91; // x22
  __int64 v92; // x8
  __int64 v93; // x0
  __int64 v94; // x0
  System_String_o *v95; // x0
  long double v96; // q0
  _QWORD *v97; // x22
  System_String_o *v98; // x21
  __int64 v99; // x8
  __int64 v100; // x0
  __int64 v101; // x0
  const MethodInfo *v102; // x1
  UnityEngine_GameObject_o *v103; // x0
  SummonResultComponent_c *v104; // x8
  UnityEngine_GameObject_o *v105; // x22
  struct SummonResultComponent_StaticFields *v106; // x8
  __int64 v107; // x9
  UILabel_o *v108; // x21
  System_String_o *v109; // x22
  long double v110; // q0
  _QWORD *v111; // x23
  __int64 v112; // x8
  __int64 v113; // x0
  __int64 v114; // x0
  Il2CppObject *v115; // x0
  int v116; // [xsp+Ch] [xbp-54h] BYREF
  int v117; // [xsp+18h] [xbp-48h] BYREF
  int v118; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4B6335F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_object___, giftIds);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GiftMaster___, v12);
    sub_1BE4ACC(&DataManager_TypeInfo, v13);
    sub_1BE4ACC(&int_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v16);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v17);
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_12520/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v19);
    sub_1BE4ACC(&StringLiteral_12522/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v20);
    sub_1BE4ACC(&StringLiteral_12524/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v21);
    sub_1BE4ACC(&StringLiteral_12535/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, v22);
    sub_1BE4ACC(&StringLiteral_12536/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v23);
    sub_1BE4ACC(&StringLiteral_12521/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v24);
    sub_1BE4ACC(&StringLiteral_12534/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, v25);
    this = (SummonResultComponent_o *)sub_1BE4ACC(&StringLiteral_12523/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v26);
    byte_4B6335F = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GiftMaster___);
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
                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
        v87 = 48LL;
        if ( size == 1 )
          v87 = 44LL;
        GameObjectExtensions__SetLocalPositionX(
          v85,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v87),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12535/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v91 = Method_System_Array_Empty_object___;
        v92 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v92 )
        {
          sub_1C36A04(Method_System_Array_Empty_object___);
          v92 = v91[7];
        }
        v93 = *(_QWORD *)(v92 + 16);
        if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
          v93 = sub_1C369A8(inited);
        if ( !*(_DWORD *)(v93 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v93);
        v94 = *(_QWORD *)(v91[7] + 16LL);
        if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
          v94 = sub_1C369A8(inited);
        this = (SummonResultComponent_o *)System_String__Format_62713316(
                                            v89,
                                            **(System_Object_array ***)(v94 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12534/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v97 = Method_System_Array_Empty_object___;
        v98 = v95;
        v99 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v99 )
        {
          sub_1C36A04(Method_System_Array_Empty_object___);
          v99 = v97[7];
        }
        v100 = *(_QWORD *)(v99 + 16);
        if ( (*(_BYTE *)(v100 + 309) & 1) == 0 )
          v100 = sub_1C369A8(v96);
        if ( !*(_DWORD *)(v100 + 224) )
          v96 = j_il2cpp_runtime_class_init_0(v100);
        v101 = *(_QWORD *)(v97[7] + 16LL);
        if ( (*(_BYTE *)(v101 + 309) & 1) == 0 )
          v101 = sub_1C369A8(v96);
        this = (SummonResultComponent_o *)System_String__Format_62713316(
                                            v98,
                                            **(System_Object_array ***)(v101 + 184),
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v102);
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
      sub_1BE4D30(this, giftIds);
    if ( !v30 )
      goto LABEL_156;
    v40 = v39->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v30,
                                        0,
                                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v48 )
          {
            UILabel__set_text(v48, (System_String_o *)this, 0LL);
            v49 = v10->fields.extraGiftMsg2Lb;
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v30,
                                                0,
                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v44;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v44 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v30,
                                                    0,
                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v118 = m_CancellationTokenSource_high;
              v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118, v51, v52, v53);
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
        sub_1BE4D28(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v104 = SummonResultComponent_TypeInfo;
      v105 = v103;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v104 = SummonResultComponent_TypeInfo;
      }
      v106 = v104->static_fields;
      v107 = 52LL;
      if ( adjustTitleLabel )
        v107 = 56LL;
      GameObjectExtensions__SetLocalPositionX(v105, (float)*(int *)((char *)&v106->TUTORIAL_BACK_ARROW_WAY + v107), 0LL);
      v108 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12523/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v111 = Method_System_Array_Empty_object___;
      v112 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v112 )
      {
        sub_1C36A04(Method_System_Array_Empty_object___);
        v112 = v111[7];
      }
      v113 = *(_QWORD *)(v112 + 16);
      if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
        v113 = sub_1C369A8(v110);
      if ( !*(_DWORD *)(v113 + 224) )
        v110 = j_il2cpp_runtime_class_init_0(v113);
      v114 = *(_QWORD *)(v111[7] + 16LL);
      if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
        v114 = sub_1C369A8(v110);
      this = (SummonResultComponent_o *)System_String__Format_62713316(
                                          v109,
                                          **(System_Object_array ***)(v114 + 184),
                                          0LL);
      if ( !v108 )
        goto LABEL_156;
      UILabel__set_text(v108, (System_String_o *)this, 0LL);
      v76 = v10->fields.extraGiftMsg2Lb;
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v30,
                                          0,
                                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v81 = &v117;
      v117 = HIDWORD(this->fields.m_CancellationTokenSource);
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
      v74 = 36LL;
      if ( adjustTitleLabel )
        v74 = 40LL;
      GameObjectExtensions__SetLocalPositionX(v72, (float)*(int *)((char *)&v73->TUTORIAL_BACK_ARROW_WAY + v74), 0LL);
      v75 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v75 )
        goto LABEL_156;
      UILabel__set_text(v75, (System_String_o *)this, 0LL);
      v76 = v10->fields.extraGiftMsg2Lb;
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v30,
                                          0,
                                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v81 = &v116;
      v116 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v81, v78, v79, v80);
    this = (SummonResultComponent_o *)System_String__Format(v77, v115, 0LL);
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

  if ( (byte_4B63360 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, method);
    byte_4B63360 = 1;
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
        sub_1BE4D30(extraGiftTitleLb, method);
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
    sub_1BE4D28(extraGiftTitleLb, method);
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
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
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


void __fastcall SummonResultComponent__SetOldResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Object; // x0
  __int64 v14; // x1
  signed int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x28
  int maxPerLine; // s11
  float v21; // s9
  System_Collections_Generic_List_int__o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BalanceConfig_c *v29; // x0
  signed int v30; // w8
  __int64 v31; // x22
  __int64 *v32; // x8
  GachaInfos_o *v33; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v36; // x25
  UnityEngine_Transform_o *v37; // x26
  const MethodInfo *v38; // x2
  int32_t objectId; // w27
  bool v40; // w26
  bool IsCommandCode; // w27
  SummonResultInfoComponent_ClickDelegate_o *v42; // x0
  const MethodInfo *v43; // x3
  __int64 *v44; // x8
  bool v45; // zf
  SummonResultInfoComponent_ClickDelegate_o *v46; // x27
  const MethodInfo *v47; // x6
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  float v57; // s12
  float v58; // s11
  float v59; // s8
  float v60; // s3
  float v61; // s0
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+8h] [xbp-98h]
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6336C & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, resultList);
    sub_1BE4ACC(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v6);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BE4ACC(&Method_SummonResultComponent_showResCcDetail__, v11);
    sub_1BE4ACC(&Method_SummonResultComponent_showResSvtDetail__, v12);
    byte_4B6336C = 1;
  }
  SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
  if ( !resultList )
    goto LABEL_63;
  max_length = resultList->max_length;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_63;
  cellWidth = fstGrid->fields.cellWidth;
  p_scdGrid = &this->fields.scdGrid;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_63;
  maxPerLine = fstGrid->fields.maxPerLine;
  v21 = scdGrid->fields.cellWidth;
  *autoSale = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v22;
  p_befSvtList = &this->fields.befSvtList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v30 = resultList->max_length;
  if ( v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v31 >= v30 )
        sub_1BE4D30(v29, v14);
      v32 = (__int64 *)((unsigned int)v31 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = *v32;
      if ( !*v32 )
        break;
      v33 = resultList->m_Items[v31];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
      Object = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v36 = (UnityEngine_GameObject_o *)Object;
      Object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0LL);
      v37 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4B612E6 )
      {
        Object = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v14);
        byte_4B612E6 = 1;
      }
      if ( !v37 )
        break;
      UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !v33 )
        break;
      if ( v33->fields.isNew
        && (objectId = v33->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v38)) )
      {
        Object = (__int64)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        v54 = *(_QWORD *)(Object + 16);
        v55 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(Object + 28);
        if ( !v54 )
          break;
        v56 = *(int *)(Object + 24);
        if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          v40 = 0;
        }
        else
        {
          v40 = 0;
          *(_DWORD *)(Object + 24) = v56 + 1;
          *(_DWORD *)(v54 + 4 * v56 + 32) = objectId;
        }
      }
      else
      {
        v40 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v33->fields.type, 0LL);
      v42 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BE4D18(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v44 = &Method_SummonResultComponent_showResCcDetail__;
      v45 = !IsCommandCode;
      v46 = v42;
      if ( v45 )
        v44 = &Method_SummonResultComponent_showResSvtDetail__;
      SummonResultInfoComponent_ClickDelegate___ctor(v42, (Il2CppObject *)this, *v44, v43);
      if ( v33->fields.sellMana || v33->fields.sellQp )
      {
        v46 = 0LL;
        *autoSale = 1;
      }
      Object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v36,
                          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v33,
        v40,
        v46,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        v47);
      v29 = BalanceConfig_TypeInfo;
      sellQp = v33->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      QpMax = v29->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v33->fields.sellQp;
      }
      this->fields.summonBeforeQp = QpMax;
      sellMana = v33->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v29->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v33->fields.sellMana;
      }
      this->fields.summonBeforeMana = UserItemMax;
      v30 = resultList->max_length;
      if ( (int)++v31 >= v30 )
        goto LABEL_47;
    }
LABEL_63:
    sub_1BE4D28(Object, v14);
  }
LABEL_47:
  Object = (__int64)this->fields.fstGrid;
  v57 = (float)max_length;
  v58 = (float)maxPerLine;
  if ( (float)max_length <= v58 )
    v59 = 22.0;
  else
    v59 = 106.0;
  if ( !Object )
    goto LABEL_63;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_63;
  v60 = v57 <= v58 ? v57 : v58;
  v64.fields.x = (float)(cellWidth * -0.5) * (float)(v60 + -1.0);
  v64.fields.y = v59;
  v64.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v64, 0LL);
  Object = (__int64)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_63;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_63;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_63;
  v61 = (float)(v57 - v58) + -1.0;
  if ( v57 <= v58 )
    v61 = -1.0;
  v65.fields.x = (float)(v21 * -0.5) * v61;
  v65.fields.y = -62.0;
  v65.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v65, 0LL);
  Object = (__int64)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_63;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
}


void __fastcall SummonResultComponent__SetResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
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
  __int64 v35; // x20
  System_Collections_Generic_List_int__o *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int *scrollBar; // x0
  __int64 objectId; // x1
  struct UIGrid_o *listRoot; // x8
  float cellWidth; // s0
  int maxPerLine; // w8
  float v48; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w25
  int64_t summonSceneInTime; // x26
  System_Collections_Generic_List_object__o *v53; // x24
  const MethodInfo *v54; // x2
  int max_length; // w8
  struct System_Collections_Generic_List_int__o **p_befSvtList; // x20
  int v57; // w21
  __int64 v58; // x22
  GachaInfos_o **m_Items; // x23
  GachaInfos_o *v60; // x27
  bool v61; // w29
  MultiExSummonListViewItem_o *v62; // x28
  ListViewSort_o *v63; // x27
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  System_Comparison_T__o *v77; // x23
  Il2CppObject *v78; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_object__o *v86; // x23
  int i; // w22
  _BOOL8 v88; // x0
  __int64 v89; // x1
  Il2CppObject *current; // x28
  GachaInfos_o *klass; // x26
  Il2CppObject *rewardIconObj; // x25
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  UnityEngine_GameObject_o *v95; // x25
  __int64 v96; // x1
  UnityEngine_Component_o *v97; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x0
  __int64 v102; // x1
  SummonResultInfoComponent_ClickDelegate_o *v103; // x27
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x3
  Il2CppObject *Component_object; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x6
  BalanceConfig_c *v109; // x0
  int32_t sellQp; // w28
  int32_t summonBeforeQp; // w20
  int32_t QpMax; // w27
  __int64 v113; // x0
  __int64 v114; // x1
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x8
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct UIGrid_o *v126; // x8
  System_Action_object__o *v127; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v132; // [xsp+58h] [xbp-68h]

  v132 = resultList;
  if ( (byte_4B6336B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_GameObject__TypeInfo, resultList);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v5);
    sub_1BE4ACC(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v6);
    sub_1BE4ACC(&System_Comparison_MultiExSummonListViewItem__TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__, v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v11);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ForEach__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BE4ACC(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo, v23);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v24);
    sub_1BE4ACC(&System_Math_TypeInfo, v25);
    sub_1BE4ACC(&MultiExSummonListViewItem_TypeInfo, v26);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v27);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v28);
    sub_1BE4ACC(&Method_SummonResultComponent_showResCcDetail__, v29);
    sub_1BE4ACC(&Method_SummonResultComponent_showResSvtDetail__, v30);
    sub_1BE4ACC(&Method_SummonResultComponent___c__SetResultData_b__86_0__, v31);
    sub_1BE4ACC(&Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__, v32);
    sub_1BE4ACC(&SummonResultComponent___c__DisplayClass86_0_TypeInfo, v33);
    sub_1BE4ACC(&SummonResultComponent___c_TypeInfo, v34);
    byte_4B6336B = 1;
  }
  memset(&v131, 0, sizeof(v131));
  v35 = sub_1BE4D18(SummonResultComponent___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  *autoSale = 0;
  v36 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v36;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v132 )
    goto LABEL_71;
  if ( !v35 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v48 = (float)((signed int)v132->max_length % maxPerLine);
  *(float *)(v35 + 16) = (float)(cellWidth * 0.5) * (float)((float)maxPerLine - v48);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_71;
  gachaParamData = summonCtrl->fields.gachaParamData;
  object = (Il2CppObject *)v35;
  if ( !gachaParamData )
    goto LABEL_71;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v132->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v57 = 0;
    v58 = 0LL;
    m_Items = v132->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v58 >= max_length )
        sub_1BE4D30(scrollBar, objectId);
      v60 = m_Items[v58];
      if ( !v60 )
        break;
      if ( v60->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v60->fields.objectId, v54) )
      {
        scrollBar = (int *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        objectId = (unsigned int)v60->fields.objectId;
        v74 = *((_QWORD *)scrollBar + 2);
        v75 = Method_System_Collections_Generic_List_int__Add__;
        ++scrollBar[7];
        if ( !v74 )
          break;
        v76 = scrollBar[6];
        if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)scrollBar,
            objectId,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          v61 = 0;
        }
        else
        {
          v61 = 0;
          scrollBar[6] = v76 + 1;
          *(_DWORD *)(v74 + 4 * v76 + 32) = objectId;
        }
      }
      else
      {
        v61 = 1;
      }
      v62 = (MultiExSummonListViewItem_o *)sub_1BE4D18(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v62, v60, v61, gachaId, summonSceneInTime, v57 + v132->max_length, 0LL);
      v63 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
      ListViewSort___ctor(v63, 27, 1, 0LL);
      if ( !v62 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, Il2CppMethodPointer))v62->klass->vtable._4_SetSortValue.method)(
                           v62,
                           v63,
                           v62->klass->vtable._5_IsMatchFilter.methodPtr);
      if ( !v53 )
        break;
      items = v53->fields._items;
      v71 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v53->fields._version;
      if ( !items )
        break;
      size = v53->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)v62,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &items->obj.klass + size;
        v53->fields._size = size + 1;
        v73[4] = (Il2CppClass *)v62;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v73 + 4), (int64_t)v62, v64, v65, v66, v67, v68, v69);
      }
      ++v58;
      --v57;
      max_length = v132->max_length;
      if ( (int)v58 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1BE4D28(scrollBar, objectId);
  }
LABEL_28:
  scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  }
  v77 = *(System_Comparison_T__o **)(*((_QWORD *)scrollBar + 23) + 16LL);
  if ( !v77 )
  {
    if ( !scrollBar[56] )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = (int *)SummonResultComponent___c_TypeInfo;
    }
    v78 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v77 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v77, v78, Method_SummonResultComponent___c__SetResultData_b__86_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__86_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v77;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__86_0, (int64_t)v77, v80, v81, v82, v83, v84, v85);
  }
  if ( !v53 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_56548584(
    v53,
    v77,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v86 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v130,
    v53,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v131 = v130;
  for ( i = 1; ; ++i )
  {
    v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v88 )
      break;
    current = v131.fields._current;
    if ( !v131.fields._current )
      sub_1BE4D28(v88, v89);
    klass = (GachaInfos_o *)v131.fields._current[7].klass;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v93 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v95 = (UnityEngine_GameObject_o *)v93;
    if ( !v93 )
      sub_1BE4D28(0LL, v94);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v93, 1, 0LL);
    v97 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v97 )
      sub_1BE4D28(0LL, v96);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v97, 0LL);
    GameObjectExtensions__SetParent(v95, transform, 0LL);
    if ( !byte_4B612E1 )
    {
      sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v99);
      byte_4B612E1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v95, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4B612E6 )
    {
      sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v100);
      byte_4B612E6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v95, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    if ( !klass )
      sub_1BE4D28(v101, v102);
    if ( SvtType__IsCommandCode(klass->fields.type, 0LL) )
    {
      v103 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BE4D18(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v103,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        v104);
    }
    else
    {
      v103 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BE4D18(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v103,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        v105);
    }
    if ( klass->fields.sellMana || klass->fields.sellQp )
    {
      v103 = 0LL;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v95,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1BE4D28(0LL, v107);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      klass,
      (bool)current[7].monitor,
      v103,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      v108);
    v109 = BalanceConfig_TypeInfo;
    sellQp = klass->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v109 = BalanceConfig_TypeInfo;
    }
    QpMax = v109->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_63518280(summonBeforeQp + sellQp, QpMax, 0LL);
    v113 = System_Math__Min_63518280(
             this->fields.summonBeforeMana + klass->fields.sellMana,
             BalanceConfig_TypeInfo->static_fields->UserItemMax,
             0LL);
    v121 = (__int64)v132;
    this->fields.summonBeforeMana = v113;
    if ( (float)((float)*(int *)(v121 + 24) - v48) < (float)i )
    {
      if ( !v86 )
        sub_1BE4D28(v113, v114);
      v122 = v86->fields._items;
      v123 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v86->fields._version;
      if ( !v122 )
        sub_1BE4D28(v113, v114);
      v124 = v86->fields._size;
      if ( (unsigned int)v124 >= v122->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v86,
          (Il2CppObject *)v95,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
      }
      else
      {
        v125 = &v122->obj.klass + v124;
        v86->fields._size = v124 + 1;
        v125[4] = (Il2CppClass *)v95;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v125 + 4), (int64_t)v95, v115, v116, v117, v118, v119, v120);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  scrollBar = (int *)this->fields.listRoot;
  if ( !scrollBar )
    goto LABEL_71;
  scrollBar = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)scrollBar + 440LL))(
                       scrollBar,
                       *(_QWORD *)(*(_QWORD *)scrollBar + 448LL));
  v126 = this->fields.listRoot;
  if ( !v126 )
    goto LABEL_71;
  scrollBar = (int *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)scrollBar,
    (signed int)v132->max_length > 2 * v126->fields.maxPerLine,
    0LL);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
  v127 = (System_Action_object__o *)sub_1BE4D18(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v127,
    object,
    Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__,
    0LL);
  if ( !v86 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v86,
    (System_Action_T__o *)v127,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_4B63361 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, method);
    byte_4B63361 = 1;
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
        sub_1BE4D30(extraGiftTitleLb, method);
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
    sub_1BE4D28(extraGiftTitleLb, method);
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
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
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


void __fastcall SummonResultComponent___DialogCallBack_b__79_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_4B6336E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_4B6336E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1BE4D28(v8, v9);
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

  if ( (byte_4B63363 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4B63363 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BE4D28(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v9; // w21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v11; // w0
  int v12; // w21
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B63368 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, method);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Transform_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B63368 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( childCount >= 1 )
  {
    v9 = childCount + 1;
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
                                             v9 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      if ( --v9 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1BE4D28(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  v11 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v11 >= 1 )
  {
    v12 = v11 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v12 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_56;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(v13, 0LL);
    }
    while ( --v12 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_37;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
    }
    else
    {
LABEL_37:
      v23 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_58;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_58:
      sub_1BE4D28(v24, v25);
    }
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(v27, 0LL);
  }
  v28 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_50;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_50:
      v33 = sub_1C36AAC(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0LL);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_56;
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
  GachaInfos_array *v9; // x22
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
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  struct UIGrid_o *fstGrid; // x8
  struct UIGrid_o *scdGrid; // x9
  float v37; // s8
  _BOOL4 v38; // w24
  UnityEngine_GameObject_o *v39; // x0
  UILabel_o *autoSaleMsgLb; // x23
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__69_0; // x24
  Il2CppObject *v45; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x5
  float v55; // s8
  struct UIGrid_o *v56; // x8
  GachaExtraGifts_o *v57; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v60; // x0
  System_Collections_Generic_IEnumerable_int__o *v61; // x1
  bool v62; // w4
  System_Collections_Generic_HashSet_int__o *v63; // x22
  __int64 v64; // x8
  __int64 v65; // x25
  int32_t v66; // w23
  int32_t v67; // w24
  GachaExtraGifts_o *v68; // x29
  __int64 v69; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_int__o v71; // 0:x0.8

  v9 = resultList;
  if ( (byte_4B6335D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ItemIconComponent__TypeInfo, resultList);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_ItemIconComponent___, v11);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_1BE4ACC(&FSUtility_TypeInfo, v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v18);
    sub_1BE4ACC(&Method_System_Nullable_int__GetValueOrDefault__, v19);
    sub_1BE4ACC(&Method_System_Nullable_int___ctor__, v20);
    sub_1BE4ACC(&Method_System_Nullable_int__get_HasValue__, v21);
    sub_1BE4ACC(&string_TypeInfo, v22);
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, v23);
    sub_1BE4ACC(&Method_SummonResultComponent___c__initGachaResultList_b__69_0__, v24);
    sub_1BE4ACC(&SummonResultComponent___c_TypeInfo, v25);
    sub_1BE4ACC(&StringLiteral_12536/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v26);
    sub_1BE4ACC(&StringLiteral_12561/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v27);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v28);
    byte_4B6335D = 1;
  }
  autoSale[0] = 0;
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     changeSceneBtnInfo,
                                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v31, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v32, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v33, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.scrollBar;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  if ( !v9 )
    goto LABEL_40;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_96;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_96;
  if ( scdGrid->fields.maxPerLine + fstGrid->fields.maxPerLine >= (signed int)v9->max_length )
  {
    SummonResultComponent__SetOldResultData(this, v9, autoSale, v34);
    v37 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, v9, autoSale, v34);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v37 = FSUtility__IsUnderVista(0LL) ? 19.0 : 7.0;
  }
  changeSceneBtnInfo = this->fields.autoSaleMsg;
  if ( !changeSceneBtnInfo
    || (v38 = autoSale[0],
        UnityEngine_GameObject__SetActive(changeSceneBtnInfo, autoSale[0], 0LL),
        (changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb) == 0LL) )
  {
LABEL_96:
    sub_1BE4D28(changeSceneBtnInfo, resultList);
  }
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  GameObjectExtensions__SetLocalPositionY(v39, v37, 0LL);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v38 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12561/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                       0LL);
    resultList = (GachaInfos_array *)changeSceneBtnInfo;
    if ( !autoSaleMsgLb )
      goto LABEL_96;
  }
  else
  {
    resultList = (GachaInfos_array *)string_TypeInfo->static_fields->Empty;
    if ( !autoSaleMsgLb )
      goto LABEL_96;
  }
  UILabel__set_text(autoSaleMsgLb, (System_String_o *)resultList, 0LL);
LABEL_40:
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  if ( !extraGiftMsgLb )
    goto LABEL_96;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  v42 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v42 = SummonResultComponent___c_TypeInfo;
  }
  _9__69_0 = (System_Action_object__o *)v42->static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = SummonResultComponent___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__69_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__69_0, v45, Method_SummonResultComponent___c__initGachaResultList_b__69_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Action_ItemIconComponent__o *)_9__69_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__69_0,
      (int64_t)_9__69_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__69_0,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_ItemIconComponent___);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  if ( extraGiftIds && gachaExtraGiftList && *(_QWORD *)&extraGiftIds->max_length )
  {
    changeSceneBtnInfo = this->fields.extraGiftComponent;
    if ( !changeSceneBtnInfo )
      goto LABEL_96;
    changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
    if ( extraGiftIds->max_length == 1 )
    {
      v55 = 0.0;
      if ( v9 )
      {
        v69 = 0LL;
        v71 = (System_Nullable_int__o)&v69;
        System_Nullable_int____ctor(
          v71,
          v9->max_length,
          (const MethodInfo_370920C *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v69 )
          v55 = (float)SHIDWORD(v69);
      }
      v56 = this->fields.fstGrid;
      if ( !v56 )
        goto LABEL_96;
      if ( gachaExtraGiftList->max_length )
      {
        v57 = gachaExtraGiftList->m_Items[0];
        if ( !v57 )
          goto LABEL_96;
        gachaExtraGiftBonusType = v57->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v57->fields.gachaExtraGiftResultType;
        v60 = this;
        v61 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        v62 = v55 > (float)v56->fields.maxPerLine;
        goto LABEL_94;
      }
LABEL_97:
      sub_1BE4D30(changeSceneBtnInfo, resultList);
    }
    v63 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v63,
      (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v64 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v64 >= 1 )
    {
      v65 = 0LL;
      v66 = 0;
      v67 = 0;
      while ( (unsigned int)v65 < (unsigned int)v64 && (unsigned int)v65 < gachaExtraGiftList->max_length )
      {
        v68 = gachaExtraGiftList->m_Items[v65];
        if ( !v68 )
          goto LABEL_96;
        if ( v68->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v63 )
            goto LABEL_96;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v63,
                                                             extraGiftIds->m_Items[v65 + 1],
                                                             (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v66 = v68->fields.gachaExtraGiftBonusType;
          v67 = v68->fields.gachaExtraGiftResultType;
          v64 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v65 >= (int)v64 )
          goto LABEL_88;
      }
      goto LABEL_97;
    }
    v67 = 0;
    v66 = 0;
LABEL_88:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v60 = this;
      v61 = (System_Collections_Generic_IEnumerable_int__o *)v63;
      gachaExtraGiftResultType = v67;
      gachaExtraGiftBonusType = v66;
      v62 = 0;
LABEL_94:
      SummonResultComponent__SetBonusGiftDisplay(v60, v61, gachaExtraGiftResultType, gachaExtraGiftBonusType, v62, v54);
      goto LABEL_95;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12536/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                       0LL);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_96;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_95:
  SummonResultComponent__setListByType(this, this->fields.dispType, v53);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B63369 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12325/*"SHOW_TALK"*/, method);
    byte_4B63369 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1BE4D28(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12325/*"SHOW_TALK"*/, 0LL);
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
    sub_1BE4D28(mWidget, method);
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
    sub_1BE4D30(mWidget, method);
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
  UnityEngine_GameObject_o *closeInfo; // x0
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
  long double v54; // q0
  int32_t gachaId; // w22
  __int64 v56; // x0
  __int64 v57; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UILabel_o *v64; // x23
  Il2CppObject *v65; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  long double v68; // q0
  __int64 v69; // x8
  __int64 v70; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v72; // x22
  int friendPoint; // w24
  int32_t v74; // w23
  bool v75; // w0
  UILabel_o *v76; // x22
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  UILabel_o *v81; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x22
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  UILabel_o *v88; // x22
  Il2CppObject *v89; // x0
  Il2CppObject *v90; // x21
  UserItemEntity_o *v91; // x0
  UILabel_o *v92; // x21
  struct UILabel_o *v93; // x21
  System_String_o *v94; // x1
  int32_t monitor_high; // w9
  UILabel_o *v96; // x21
  UILabel_o *v97; // x21
  int gachaResourceNum; // w23
  int v99; // w1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int v103; // w22
  __int64 v104; // x24
  UILabel_o *v105; // x23
  Il2CppObject *v106; // x0
  struct SummonControl_o *v107; // x8
  struct SummonControl_o *v108; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v114; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v125; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v132; // s11
  float v133; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v135; // s14
  int v136; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v138; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v141; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v143; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v145; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v158; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B6335E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1BE4ACC(&DataManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_1BE4ACC(&FSUtility_TypeInfo, v16);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_1BE4ACC(&int_TypeInfo, v18);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v19);
    sub_1BE4ACC(&System_Math_TypeInfo, v20);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v21);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v23);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BE4ACC(&SummonResultComponent_TypeInfo, v27);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v28);
    sub_1BE4ACC(&UserGachaMaster_TypeInfo, v29);
    sub_1BE4ACC(&StringLiteral_12507/*"SUMMON_APPEND_END"*/, v30);
    sub_1BE4ACC(&StringLiteral_12312/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_1BE4ACC(&StringLiteral_12538/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_1BE4ACC(&StringLiteral_12317/*"SHORT_SERVANT_SELL"*/, v33);
    sub_1BE4ACC(&StringLiteral_12542/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_1BE4ACC(&StringLiteral_12567/*"SUMMON_TICKET_END"*/, v35);
    sub_1BE4ACC(&StringLiteral_12302/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1BE4ACC(&StringLiteral_3925/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_4B6335E = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  entity = 0LL;
  v143 = 0LL;
  appendEnt = 0LL;
  v141 = 0LL;
  if ( type == 1 )
  {
    closeInfo = this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive(closeInfo, 0, 0LL);
    closeInfo = this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive(closeInfo, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3925/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_204;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_204;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_204;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_204;
    v146.fields.r = 1.0;
    v146.fields.g = 1.0;
    v146.fields.b = 1.0;
    v146.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v146, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v147.fields.r = 1.0;
    v147.fields.g = 1.0;
    v147.fields.b = 1.0;
    v147.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v147, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v148.fields.r = 1.0;
    v148.fields.g = 1.0;
    v148.fields.b = 1.0;
    v148.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v148, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v149.fields.r = 1.0;
    v149.fields.g = 1.0;
    v149.fields.b = 1.0;
    v149.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v149, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v150.fields.r = 1.0;
    v150.fields.g = 1.0;
    v150.fields.b = 1.0;
    v150.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v150, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_204;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_204;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v48 = this->fields.summonCtrl;
    if ( !v48 )
      goto LABEL_204;
    gachaParamData = v48->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_204;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v45, v46, v47);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v52, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_204;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v53 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_204;
    UILabel__SetCondensedScale(
      v53,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
          v56 = sub_1C369A8(v54);
        v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
        if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
          v57 = sub_1C369A8(v54);
        closeInfo = **(UnityEngine_GameObject_o ***)(v57 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&type);
          byte_4B61717 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaMaster__TryGetEntity(
                                                  (UserGachaMaster_o *)Master_object,
                                                  &entity,
                                                  *(_QWORD *)(*(_QWORD *)&closeInfo[7].fields.m_CachedPtr + 64LL),
                                                  gachaId,
                                                  0LL);
        if ( !MasterData_object )
          goto LABEL_204;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v141,
          gachaId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12542/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v141 )
          goto LABEL_204;
        v60 = (System_String_o *)closeInfo;
        if ( !LODWORD(v141[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v141 || !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v141[4].monitor,
                                                  0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v64 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v61, v62, v63);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v65, 0LL);
        if ( !v64 )
          goto LABEL_204;
        UILabel__set_text(v64, (System_String_o *)closeInfo, 0LL);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v141,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_127:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_204;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
            if ( !closeInfo )
              goto LABEL_204;
            v155.fields.r = 0.35547;
            v155.fields.a = 1.0;
            v155.fields.g = 0.35547;
            v155.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v155, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v156.fields.r = 0.5;
            v156.fields.g = 0.5;
            v156.fields.b = 0.5;
            v156.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v156, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
            v96 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v96 )
              goto LABEL_204;
            UILabel__SetCondensedScale(
              v96,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0,
              0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v94 = v60;
LABEL_135:
            UILabel__set_text((UILabel_o *)closeInfo, v94, 0LL);
            goto LABEL_165;
          }
        }
        else if ( entity )
        {
          if ( !v141 )
            goto LABEL_204;
          monitor_high = HIDWORD(v141[5].monitor);
          if ( monitor_high >= 1 && entity->fields.num >= monitor_high )
            goto LABEL_127;
        }
LABEL_123:
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_204;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_204;
        v153.fields.r = 1.0;
        v153.fields.g = 1.0;
        v153.fields.b = 1.0;
        v153.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v153, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v154.fields.r = 1.0;
        v154.fields.g = 1.0;
        v154.fields.b = 1.0;
        v154.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v154, 0LL);
        goto LABEL_165;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
          v69 = sub_1C369A8(v68);
        v70 = *(_QWORD *)(*(_QWORD *)(v69 + 192) + 16LL);
        if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
          v70 = sub_1C369A8(v68);
        closeInfo = **(UnityEngine_GameObject_o ***)(v70 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_204;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_204;
        v72 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v74 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v75 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v74, &maxNum[1], maxNum, 0LL);
        if ( maxNum[1] > 0 || v75 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v97 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12538/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v97 )
            goto LABEL_204;
          UILabel__set_text(v97, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
            goto LABEL_204;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
          goto LABEL_164;
        }
        if ( gachaParamData->fields.gachaTime == 1 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, 1, 3, 0LL);
          v76 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v77, v78, v79);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v80, 0LL);
          if ( !v76 )
            goto LABEL_204;
          UILabel__set_text(v76, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
            goto LABEL_204;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_164:
          UILabel__SetCondensedScale(v81, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0LL);
LABEL_165:
          v107 = this->fields.summonCtrl;
          if ( v107 )
          {
            closeInfo = v107->fields.currentResourceInfo;
            if ( closeInfo )
            {
              UnityEngine_GameObject__SetActive(closeInfo, 1, 0LL);
              v108 = this->fields.summonCtrl;
              if ( v108 )
              {
                v108->fields.isResult = 1;
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                if ( TutorialFlag__IsProgressDone(2, 0LL) )
                {
                  closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
                  if ( closeInfo )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                    closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
                    if ( closeInfo )
                    {
                      closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)closeInfo,
                                                                (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                      if ( closeInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                        if ( closeInfo )
                        {
                          v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                          closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v110, 0LL);
                          if ( closeInfo )
                          {
                            closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)closeInfo,
                                                                      (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                            if ( closeInfo )
                            {
                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                              closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                              if ( closeInfo )
                              {
                                v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                                closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v111, 0LL);
                                if ( closeInfo )
                                {
                                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)closeInfo,
                                                                            (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                  if ( closeInfo )
                                  {
                                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                    if ( closeInfo )
                                    {
                                      v112 = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)closeInfo,
                                               0LL);
                                      closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v112, 0LL);
                                      if ( closeInfo )
                                      {
                                        closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                  (UnityEngine_Component_o *)closeInfo,
                                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                  v114 = UnityEngine_Object__Instantiate_object_(
                           touchBlocker,
                           (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                  p_blocker = &this->fields.blocker;
                  this->fields.blocker = (struct UnityEngine_GameObject_o *)v114;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&this->fields.blocker,
                    (int64_t)v114,
                    v116,
                    v117,
                    v118,
                    v119,
                    v120,
                    v121);
                  blocker = this->fields.blocker;
                  v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v123, 0LL);
                  GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                  v125 = SummonResultComponent_TypeInfo;
                  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                    v125 = SummonResultComponent_TypeInfo;
                  }
                  static_fields = v125->static_fields;
                  m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                  m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                  m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                  m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                  if ( !FSUtility_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                  OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                  closeInfo = *p_blocker;
                  if ( *p_blocker )
                  {
                    v132 = OffsetX;
                    closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              closeInfo,
                                                              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                    if ( closeInfo )
                    {
                      v133 = m_XMin - v132;
                      v157.fields.m_XMin = v133;
                      v157.fields.m_YMin = m_YMin;
                      v157.fields.m_Width = m_Width;
                      v157.fields.m_Height = m_Height;
                      MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v157, 30, 0LL);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                        v135 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( closeInfo )
                        {
                          v145.fields.x = TutorialBackArrowPos.fields.x - v135;
                          v145.fields.y = TutorialBackArrowPos.fields.y;
                          v158.fields.m_XMin = v133;
                          v158.fields.m_YMin = m_YMin;
                          v158.fields.m_Width = m_Width;
                          v158.fields.m_Height = m_Height;
                          CommonUI__OpenTutorialArrowMark(
                            (CommonUI_o *)closeInfo,
                            v145,
                            SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                            v158,
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
LABEL_204:
          sub_1BE4D28(closeInfo, *(_QWORD *)&type);
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          if ( friendPoint < 400 )
            v99 = 1;
          else
            v99 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v143,
                                                    gachaParamData->fields.gachaId,
                                                    0LL);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_152;
          if ( !v72 )
            goto LABEL_204;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v72, 0LL) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v72, 0LL);
            if ( !v143 )
              goto LABEL_204;
            v136 = (int)closeInfo;
            maxDrawNum = v143->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_63518280(friendPoint / v136, maxDrawNum, 0LL);
            v138 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v138 )
                goto LABEL_204;
              v103 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0LL);
              v104 = 24LL;
              goto LABEL_159;
            }
            if ( !v138 )
              goto LABEL_204;
            v99 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_152:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_204;
            v99 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v99, 3, 0LL);
        v103 = gachaParamData->fields.gachaTime;
        v104 = 20LL;
LABEL_159:
        v105 = this->fields.summonBtnLabel;
        gachaTime = v103;
        v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v100, v101, v102);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v106, 0LL);
        if ( !v105 )
          goto LABEL_204;
        UILabel__set_text(v105, (System_String_o *)closeInfo, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v81 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v81 )
          goto LABEL_204;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v104);
        goto LABEL_164;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        v83 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v83 )
          goto LABEL_98;
        v84 = v83;
        if ( !LODWORD(v83[4].monitor) )
          goto LABEL_98;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v84[4].monitor,
               0LL) != 9 )
          goto LABEL_98;
        v88 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v85, v86, v87);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v89, 0LL);
        if ( !v88 )
          goto LABEL_204;
        UILabel__set_text(v88, (System_String_o *)closeInfo, 0LL);
LABEL_98:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v90 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&type);
          byte_4B61717 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v90 )
          goto LABEL_204;
        v91 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v90,
                *(_QWORD *)(*(_QWORD *)&closeInfo[7].fields.m_CachedPtr + 64LL),
                gachaParamData->fields.ticketItemId,
                0LL);
        if ( v91 && v91->fields.num > 0 )
          goto LABEL_123;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_204;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_204;
        v151.fields.r = 0.35547;
        v151.fields.a = 1.0;
        v151.fields.g = 0.35547;
        v151.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v151, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v152.fields.r = 0.5;
        v152.fields.g = 0.5;
        v152.fields.b = 0.5;
        v152.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v152, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v92 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v92 )
          goto LABEL_204;
        UILabel__SetCondensedScale(
          v92,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0LL);
        v93 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v93 )
          goto LABEL_204;
        v94 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v93;
        goto LABEL_135;
      default:
        goto LABEL_165;
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

  if ( (byte_4B63364 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_7241/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_1BE4ACC(&StringLiteral_7240/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_4B63364 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v24 = klass;
  if ( !byte_4B61BFB )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v9);
    byte_4B61BFB = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v11->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7241/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7240/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_1BE4D28(SelfUserGame, v9);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4B63366 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtId);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__, v7);
    sub_1BE4ACC(&SummonResultComponent___c__DisplayClass78_0_TypeInfo, v8);
    byte_4B63366 = 1;
  }
  v9 = sub_1BE4D18(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1BE4D28(v10, v11);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4B63365 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtId);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__, v7);
    sub_1BE4ACC(&SummonResultComponent___c__DisplayClass77_0_TypeInfo, v8);
    byte_4B63365 = 1;
  }
  v9 = sub_1BE4D18(SummonResultComponent___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1BE4D28(v10, v11);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6336F & 1) == 0 )
  {
    sub_1BE4ACC(&SummonResultComponent___c_TypeInfo, v1);
    byte_4B6336F = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SummonResultComponent___c___ctor(SummonResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonResultComponent___c___SetResultData_b__86_0(
        SummonResultComponent___c_o *this,
        MultiExSummonListViewItem_o *a,
        MultiExSummonListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BE4D28(this, 0LL);
  return ListViewItem__SortCompDown((ListViewItem_o *)a, (ListViewItem_o *)b, 0LL);
}


void __fastcall SummonResultComponent___c___initGachaResultList_b__69_0(
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
    sub_1BE4D28(this, elm);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass77_0___ctor(
        SummonResultComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass77_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass77_0_o *this,
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

  if ( (byte_4B63370 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_4B63370 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v10, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30883044(v9, 8, usrSvtId, v10, 0LL, 0LL);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)v11;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_8:
    sub_1BE4D28(v11, v12);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass78_0___ctor(
        SummonResultComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass78_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass78_0_o *this,
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

  if ( (byte_4B63371 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_4B63371 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30886368(v14, 0, (UserCommandCodeEntity_o *)Entity, v15, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v16 )
LABEL_10:
    sub_1BE4D28(Instance, v10);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass86_0___ctor(
        SummonResultComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass86_0___SetResultData_b__1(
        SummonResultComponent___c__DisplayClass86_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  GameObjectExtensions__AddLocalPositionX(obj, this->fields.offset, 0LL);
}