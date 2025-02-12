void __fastcall FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC46F8 & 1) == 0 )
  {
    sub_1C1ABD4(&FortuneBonusResultAction_TypeInfo, v1);
    byte_4BC46F8 = 1;
  }
  *FortuneBonusResultAction_TypeInfo->static_fields = (struct FortuneBonusResultAction_StaticFields)0x200000016LL;
}


void __fastcall FortuneBonusResultAction___ctor(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusResultAction__Awake(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_FortuneBonusResultAction__o **p_fsm; // x20
  CStateManager_T__o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4BC46F0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_FortuneBonusResultAction___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_FortuneBonusResultAction__add__, v3);
    sub_1C1ABD4(&CStateManager_FortuneBonusResultAction__TypeInfo, v4);
    sub_1C1ABD4(&FortuneBonusResultAction_StateNone_TypeInfo, v5);
    sub_1C1ABD4(&FortuneBonusResultAction_StatePlay_TypeInfo, v6);
    sub_1C1ABD4(&FortuneBonusResultAction_StateTouchWait_TypeInfo, v7);
    byte_4BC46F0 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_31D32D0 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v9;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v17 = (Il2CppObject *)sub_1C1AE20(FortuneBonusResultAction_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_31D3378 *)Method_CStateManager_FortuneBonusResultAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (Il2CppObject *)sub_1C1AE20(FortuneBonusResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_object___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_31D3378 *)Method_CStateManager_FortuneBonusResultAction__add__),
          v22 = (CStateManager_T__o *)*p_fsm,
          v23 = (Il2CppObject *)sub_1C1AE20(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_1C1AE30(v18, v19);
    }
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_31D3378 *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusDetailData(
        FortuneBonusResultAction_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4BC46F3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index);
    sub_1C1ABD4(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__, v6);
    sub_1C1ABD4(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, v7);
    byte_4BC46F3 = 1;
  }
  v8 = sub_1C1AE20(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_DWORD *)(v8 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v13 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v13,
                                                (const MethodInfo_2F8AFC8 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
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
    sub_1C1AE38(this, method);
  return rewards->m_Items[0];
}


bool __fastcall FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4BC46F6 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC46F6 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1C1AE30(0LL, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0LL);
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
  sub_1C1AB78(
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
    sub_1C1AE30(0LL, v10);
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
    sub_1C1AE30(0LL, v3);
  CommonEffectComponent__Init_41876224(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusResultAction__SetAnimSpeed(
        FortuneBonusResultAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4BC46F5 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC46F5 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1C1AE30(Item, v6);
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

  if ( (byte_4BC46F7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_FortuneBonusResultAction__setState__, *(_QWORD *)&state);
    byte_4BC46F7 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31D3404 *)Method_CStateManager_FortuneBonusResultAction__setState__);
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
  const MethodInfo *v28; // x1
  void *Master_object; // x0
  const MethodInfo *v30; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v33; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v39; // x20
  Il2CppObject *v40; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_object__o *v42; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v44; // x0
  PartyOrganizationUtility_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v49; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  Il2CppObject *Component_object; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  FortuneBonusResultAction___c_c *v58; // x0
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v60; // x22
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct UISprite_array *itemSpriteList; // x8
  unsigned __int64 v69; // x21
  Il2CppObject *v70; // x22
  struct UISprite_array *v71; // x8
  UISprite_o *v72; // x22
  int32_t monitor; // w23
  int32_t iconId; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BC46F2 & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidBackKeyManager_TypeInfo, fortuneBonus);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v10);
    sub_1C1ABD4(&System_Comparison_GiftEntity__TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMaster_GiftMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v13);
    sub_1C1ABD4(&DataManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15);
    sub_1C1ABD4(&FortuneBonusResultAction_TypeInfo, v16);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v17);
    sub_1C1ABD4(&int_TypeInfo, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v21);
    sub_1C1ABD4(&NGUITools_TypeInfo, v22);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v23);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1C1ABD4(&Method_FortuneBonusResultAction___c__Setup_b__14_0__, v25);
    sub_1C1ABD4(&FortuneBonusResultAction___c_TypeInfo, v26);
    sub_1C1ABD4(&StringLiteral_22622/*"omikuzi_{0}"*/, v27);
    byte_4BC46F2 = 1;
  }
  entity = 0LL;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.fortuneBonusData,
    (int64_t)fortuneBonus,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FortuneBonusResultAction__SetupAnim(this, v28);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_48;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v30);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v33);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v39 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v35, v36, v37);
      Master_object = System_String__Format((System_String_o *)StringLiteral_22622/*"omikuzi_{0}"*/, v40, 0LL);
      if ( !fortuneResultSprite )
        goto LABEL_48;
      UISprite__set_spriteName(fortuneResultSprite, (System_String_o *)Master_object, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_object )
        goto LABEL_48;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_object, v39->fields.giftId, 0LL);
      if ( ListById )
      {
        v42 = (System_Collections_Generic_List_object__o *)ListById;
        size = ListById->fields._size;
        v44 = FortuneBonusResultAction_TypeInfo;
        if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
          v44 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v44->static_fields->REWARD_ITEM_COUNT )
        {
          v58 = FortuneBonusResultAction___c_TypeInfo;
          if ( !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo);
            v58 = FortuneBonusResultAction___c_TypeInfo;
          }
          _9__14_0 = (System_Comparison_T__o *)v58->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v58->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v58);
              v58 = FortuneBonusResultAction___c_TypeInfo;
            }
            v60 = (Il2CppObject *)v58->static_fields->__9;
            _9__14_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_object____ctor(_9__14_0, v60, Method_FortuneBonusResultAction___c__Setup_b__14_0__, 0LL);
            static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
              (int64_t)_9__14_0,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
          }
          System_Collections_Generic_List_object___Sort_56877908(
            v42,
            _9__14_0,
            (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_48;
          v69 = 0LL;
          while ( (__int64)v69 < (int)itemSpriteList->max_length )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v70 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v42,
                              v69,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !Master_object || !v70 )
              goto LABEL_48;
            Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v70,
                                      &entity,
                                      *((_DWORD *)Master_object + 6),
                                      (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v71 = this->fields.itemSpriteList;
              if ( !v71 )
                goto LABEL_48;
              if ( v69 >= v71->max_length )
                sub_1C1AE38(Master_object, v30);
              if ( !entity )
                goto LABEL_48;
              v72 = v71->m_Items[v69];
              monitor = (int32_t)entity[2].monitor;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              Master_object = (void *)AtlasManager__SetItem(v72, monitor, 0LL);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v69;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)Master_object,
                           0,
                           0LL);
      v49 = FortuneBonusResultAction_TypeInfo;
      if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
        v49 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v49->static_fields->SYSTEM_UI_LAYER_ID;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             ScreeenTouchInfo,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (PartyOrganizationUtility_c *)Component_object;
        sub_1C1AB78(p_screenTouchInfo, (int64_t)Component_object, v52, v53, v54, v55, v56, v57);
        goto LABEL_24;
      }
    }
LABEL_48:
    sub_1C1AE30(Master_object, v30);
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
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4BC46F4 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC46F4 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL),
          (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1C1AE30(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BC46F1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_FortuneBonusResultAction__update__, method);
    sub_1C1ABD4(&CTouch_TypeInfo, v3);
    byte_4BC46F1 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_31D33E0 *)Method_CStateManager_FortuneBonusResultAction__update__);
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
    sub_1C1AE30(this, 0LL);
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
      sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  void *isTouchPush; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x19
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  TerminalSceneComponent_o *v24; // x21
  Il2CppObject *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x2

  if ( (byte_4BC46F9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&AndroidBackKeyManager_TypeInfo, v4);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v5);
    sub_1C1ABD4(&CTouch_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_FortuneBonusResultAction_StateTouchWait_update__, v8);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C1ABD4(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_1C1ABD4(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_4BC46F9 = 1;
  }
  v12 = sub_1C1AE20(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = that;
  v21 = v12 + 16;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)that, v15, v16, v17, v18, v19, v20);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (void *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v21 )
    {
      isTouchPush = *(void **)(*(_QWORD *)v21 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          v22 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1C1ABEC(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v23 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v22, v22[4]);
          OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
            byte_4BC2713 = 1;
          }
          isTouchPush = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            isTouchPush = TerminalSceneComponent_TypeInfo;
          }
          v24 = (TerminalSceneComponent_o *)**((_QWORD **)isTouchPush + 23);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v24 )
          {
            TerminalSceneComponent__fadeoutBgm(v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v27 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(
              v27,
              (Il2CppObject *)v12,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
              isTouchPush = *(void **)v21;
              if ( *(_QWORD *)v21 )
              {
                FortuneBonusResultAction__SetState((FortuneBonusResultAction_o *)isTouchPush, 0, v28);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C1AE30(isTouchPush, v14);
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
    sub_1C1AE30(this, method);
  ActionExtensions__Call(that->fields.endAction, 0LL);
}


void __fastcall FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC46FA & 1) == 0 )
  {
    sub_1C1ABD4(&FortuneBonusResultAction___c_TypeInfo, v1);
    byte_4BC46FA = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortuneBonusResultAction___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)FortuneBonusResultAction___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
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
    sub_1C1AE30(this, 0LL);
  return n->fields.idx == this->fields.index;
}