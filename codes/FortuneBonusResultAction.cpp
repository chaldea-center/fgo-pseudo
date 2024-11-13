void __fastcall FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&FortuneBonusResultAction_TypeInfo, v1, v2);
    byte_4B12EB5 = 1;
  }
  *FortuneBonusResultAction_TypeInfo->static_fields = (struct FortuneBonusResultAction_StaticFields)0x200000016LL;
}


void __fastcall FortuneBonusResultAction___ctor(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusResultAction__Awake(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  struct CStateManager_FortuneBonusResultAction__o **p_fsm; // x20
  CStateManager_T__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  CStateManager_T__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x21
  const MethodInfo *v40; // x2

  if ( (byte_4B12EAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_FortuneBonusResultAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_FortuneBonusResultAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_FortuneBonusResultAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&FortuneBonusResultAction_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&FortuneBonusResultAction_StatePlay_TypeInfo, v11, v12);
    sub_1BCA7E0(&FortuneBonusResultAction_StateTouchWait_TypeInfo, v13, v14);
    byte_4B12EAD = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v16 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_FortuneBonusResultAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_313FBC4 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v27 = (Il2CppObject *)sub_1BCAA2C(FortuneBonusResultAction_StateNone_TypeInfo, v24, v25, v26);
    System_Object___ctor(v27, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v27,
      (const MethodInfo_313FC6C *)Method_CStateManager_FortuneBonusResultAction__add__);
    v30 = (CStateManager_T__o *)*p_fsm;
    v34 = (Il2CppObject *)sub_1BCAA2C(FortuneBonusResultAction_StatePlay_TypeInfo, v31, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v30
      || (CStateManager_object___add(
            v30,
            1,
            (IState_T__o *)v34,
            (const MethodInfo_313FC6C *)Method_CStateManager_FortuneBonusResultAction__add__),
          v35 = (CStateManager_T__o *)*p_fsm,
          v39 = (Il2CppObject *)sub_1BCAA2C(FortuneBonusResultAction_StateTouchWait_TypeInfo, v36, v37, v38),
          System_Object___ctor(v39, 0LL),
          !v35) )
    {
LABEL_8:
      sub_1BCAA3C(v28, v29);
    }
    CStateManager_object___add(
      v35,
      2,
      (IState_T__o *)v39,
      (const MethodInfo_313FC6C *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v40);
  }
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusDetailData(
        FortuneBonusResultAction_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B12EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__, v8, v9);
    sub_1BCA7E0(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, v10, v11);
    byte_4B12EB0 = 1;
  }
  v12 = sub_1BCAA2C(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v19,
                                                (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusRewardData(
        FortuneBonusResultAction_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *rewards; // x8
  __int64 v4; // x9

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  rewards = fortuneBonusData->fields.rewards;
  if ( !rewards )
    return 0LL;
  v4 = *(_QWORD *)&rewards->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    sub_1BCAA44(this, method);
  return rewards->m_Items[0];
}


bool __fastcall FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v7; // x0

  if ( (byte_4B12EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12EB3 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v7 = this->fields.anim;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Animation__IsPlaying(v7, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusResultAction__Play(
        FortuneBonusResultAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  this->fields.endAction = endAct;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)endAct,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v10);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FortuneBonusResultAction__SetAnimSpeed(this, 0.0, v11);
  FortuneBonusResultAction__SetState(this, 1, v12);
}


void __fastcall FortuneBonusResultAction__PlayAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusResultAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1BCAA3C(0LL, v3);
  CommonEffectComponent__Init_41381496(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusResultAction__SetAnimSpeed(
        FortuneBonusResultAction_o *this,
        float speed,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4B12EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B12EB2 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Item, v7);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusResultAction__SetState(
        FortuneBonusResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_FortuneBonusResultAction__setState__, *(_QWORD *)&state, method);
    byte_4B12EB4 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_FortuneBonusResultAction__setState__);
}


void __fastcall FortuneBonusResultAction__Setup(
        FortuneBonusResultAction_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  const MethodInfo *v46; // x1
  void *Master_object; // x0
  const MethodInfo *v48; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v51; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v54; // x20
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_object__o *v60; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v62; // x0
  PartyOrganizationUtility_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  __int64 v66; // x1
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v68; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  Il2CppObject *Component_object; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  FortuneBonusResultAction___c_c *v77; // x0
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v79; // x22
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct UISprite_array *itemSpriteList; // x8
  unsigned __int64 v88; // x21
  Il2CppObject *v89; // x22
  struct UISprite_array *v90; // x8
  UISprite_o *v91; // x22
  int32_t monitor; // w23
  int32_t iconId; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B12EAF & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, fortuneBonus, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Comparison_GiftEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v20, v21);
    sub_1BCA7E0(&FortuneBonusResultAction_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v24, v25);
    sub_1BCA7E0(&int_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v32, v33);
    sub_1BCA7E0(&NGUITools_TypeInfo, v34, v35);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38, v39);
    sub_1BCA7E0(&Method_FortuneBonusResultAction___c__Setup_b__14_0__, v40, v41);
    sub_1BCA7E0(&FortuneBonusResultAction___c_TypeInfo, v42, v43);
    sub_1BCA7E0(&StringLiteral_22474/*"omikuzi_{0}"*/, v44, v45);
    byte_4B12EAF = 1;
  }
  entity = 0LL;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fortuneBonusData,
    (int64_t)fortuneBonus,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FortuneBonusResultAction__SetupAnim(this, v46);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_48;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v48);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v51);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v54 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      Master_object = System_String__Format((System_String_o *)StringLiteral_22474/*"omikuzi_{0}"*/, v55, 0LL);
      if ( !fortuneResultSprite )
        goto LABEL_48;
      UISprite__set_spriteName(fortuneResultSprite, (System_String_o *)Master_object, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_object )
        goto LABEL_48;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_object, v54->fields.giftId, 0LL);
      if ( ListById )
      {
        v60 = (System_Collections_Generic_List_object__o *)ListById;
        size = ListById->fields._size;
        v62 = FortuneBonusResultAction_TypeInfo;
        if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo, v48);
          v62 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v62->static_fields->REWARD_ITEM_COUNT )
        {
          v77 = FortuneBonusResultAction___c_TypeInfo;
          if ( !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo, v48);
            v77 = FortuneBonusResultAction___c_TypeInfo;
          }
          _9__14_0 = (System_Comparison_T__o *)v77->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v77->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v77, v48);
              v77 = FortuneBonusResultAction___c_TypeInfo;
            }
            v79 = (Il2CppObject *)v77->static_fields->__9;
            _9__14_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GiftEntity__TypeInfo, v48, v58, v59);
            System_Comparison_object____ctor(_9__14_0, v79, Method_FortuneBonusResultAction___c__Setup_b__14_0__, 0LL);
            static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
              (int64_t)_9__14_0,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86);
          }
          System_Collections_Generic_List_object___Sort_56244000(
            v60,
            _9__14_0,
            (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_48;
          v88 = 0LL;
          while ( (__int64)v88 < (int)itemSpriteList->max_length )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
            v89 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v60,
                              v88,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !Master_object || !v89 )
              goto LABEL_48;
            Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v89,
                                      &entity,
                                      *((_DWORD *)Master_object + 6),
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v90 = this->fields.itemSpriteList;
              if ( !v90 )
                goto LABEL_48;
              if ( v88 >= v90->max_length )
                sub_1BCAA44(Master_object, v48);
              if ( !entity )
                goto LABEL_48;
              v91 = v90->m_Items[v88];
              monitor = (int32_t)entity[2].monitor;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v48);
              Master_object = (void *)AtlasManager__SetItem(v91, monitor, 0LL);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v88;
            if ( !itemSpriteList )
              goto LABEL_48;
          }
        }
      }
    }
  }
  p_screenTouchInfo = (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)Master_object,
                           0,
                           0LL);
      v68 = FortuneBonusResultAction_TypeInfo;
      if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo, v66);
        v68 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v68->static_fields->SYSTEM_UI_LAYER_ID;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v66);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             ScreeenTouchInfo,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (PartyOrganizationUtility_c *)Component_object;
        sub_1BCA784(p_screenTouchInfo, (int64_t)Component_object, v71, v72, v73, v74, v75, v76);
        goto LABEL_24;
      }
    }
LABEL_48:
    sub_1BCAA3C(Master_object, v48);
  }
LABEL_24:
  Master_object = p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_48;
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void __fastcall FortuneBonusResultAction__SetupAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4B12EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12EB1 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL),
          (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Item, v5);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12EAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_FortuneBonusResultAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B12EAE = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_313FCD4 *)Method_CStateManager_FortuneBonusResultAction__update__);
}


void __fastcall FortuneBonusResultAction_StateNone___ctor(
        FortuneBonusResultAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateNone__begin(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateNone__end(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateNone__update(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StatePlay___ctor(
        FortuneBonusResultAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StatePlay__begin(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1BCAA3C(this, 0LL);
  FortuneBonusResultAction__PlayAnim(that, (const MethodInfo *)that);
}


void __fastcall FortuneBonusResultAction_StatePlay__end(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StatePlay__update(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_1BCAA3C(this, 0LL);
    if ( !FortuneBonusResultAction__IsPlayingAnim(that, (const MethodInfo *)that) )
      FortuneBonusResultAction__SetState(that, 2, v5);
  }
  this->fields.isStarted = 1;
}


void __fastcall FortuneBonusResultAction_StateTouchWait___ctor(
        FortuneBonusResultAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait__begin(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait__end(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateTouchWait__update(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v21; // x20
  void *isTouchPush; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x19
  __int64 v31; // x1
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x2
  TerminalSceneComponent_o *v35; // x21
  Il2CppObject *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x22
  const MethodInfo *v42; // x2

  if ( (byte_4B12EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CTouch_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_FortuneBonusResultAction_StateTouchWait_update__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v17, v18);
    sub_1BCA7E0(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v19, v20);
    byte_4B12EB6 = 1;
  }
  v21 = sub_1BCAA2C(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = that;
  v30 = v21 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)that, v24, v25, v26, v27, v28, v29);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v31);
  isTouchPush = (void *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v30 )
    {
      isTouchPush = *(void **)(*(_QWORD *)v30 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          v32 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_1BCA7F8(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
          OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v34);
            byte_4B10F83 = 1;
          }
          isTouchPush = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
            isTouchPush = TerminalSceneComponent_TypeInfo;
          }
          v35 = (TerminalSceneComponent_o *)**((_QWORD **)isTouchPush + 23);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v23);
          if ( v35 )
          {
            TerminalSceneComponent__fadeoutBgm(v35, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
            System_Action___ctor(
              v41,
              (Il2CppObject *)v21,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v41, 0LL);
              isTouchPush = *(void **)v30;
              if ( *(_QWORD *)v30 )
              {
                FortuneBonusResultAction__SetState((FortuneBonusResultAction_o *)isTouchPush, 0, v42);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(isTouchPush, v23);
  }
}


void __fastcall FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct FortuneBonusResultAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.endAction, 0LL);
}


void __fastcall FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&FortuneBonusResultAction___c_TypeInfo, v1, v2);
    byte_4B12EB7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FortuneBonusResultAction___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FortuneBonusResultAction___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FortuneBonusResultAction___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall FortuneBonusResultAction___c___ctor(FortuneBonusResultAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortuneBonusResultAction___c___Setup_b__14_0(
        FortuneBonusResultAction___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall FortuneBonusResultAction___c__DisplayClass16_0___ctor(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortuneBonusResultAction___c__DisplayClass16_0___GetFortuneBonusDetailData_b__0(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        CommonUI_FortuneBonusDetailData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.idx == this->fields.index;
}