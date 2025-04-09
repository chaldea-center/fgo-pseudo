void __fastcall FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B7A70 & 1) == 0 )
  {
    sub_1B4CF90(&FortuneBonusResultAction_TypeInfo, v1);
    byte_49B7A70 = 1;
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_49B7A68 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_FortuneBonusResultAction___ctor__, method);
    sub_1B4CF90(&Method_CStateManager_FortuneBonusResultAction__add__, v3);
    sub_1B4CF90(&CStateManager_FortuneBonusResultAction__TypeInfo, v4);
    sub_1B4CF90(&FortuneBonusResultAction_StateNone_TypeInfo, v5);
    sub_1B4CF90(&FortuneBonusResultAction_StatePlay_TypeInfo, v6);
    sub_1B4CF90(&FortuneBonusResultAction_StateTouchWait_TypeInfo, v7);
    byte_49B7A68 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1B4D1DC(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_312D7A4 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v9;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1B4D1DC(FortuneBonusResultAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_312D84C *)Method_CStateManager_FortuneBonusResultAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1B4D1DC(FortuneBonusResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            1,
            (IState_T__o *)v17,
            (const MethodInfo_312D84C *)Method_CStateManager_FortuneBonusResultAction__add__),
          v18 = (CStateManager_T__o *)*p_fsm,
          v19 = (Il2CppObject *)sub_1B4D1DC(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
LABEL_8:
      sub_1B4D1EC(v14, v15);
    }
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_312D84C *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v20);
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

  if ( (byte_49B7A6B & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index);
    sub_1B4CF90(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__, v6);
    sub_1B4CF90(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, v7);
    byte_49B7A6B = 1;
  }
  v8 = sub_1B4D1DC(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_DWORD *)(v8 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v13,
                                                (const MethodInfo_2EED060 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
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
    sub_1B4D1F4(this, method);
  return rewards->m_Items[0];
}


bool __fastcall FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_49B7A6E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A6E = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1B4D1EC(0LL, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusResultAction__Play(
        FortuneBonusResultAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  this->fields.endAction = endAct;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endAction, (int32_t)endAct, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FortuneBonusResultAction__SetAnimSpeed(this, 0.0, v7);
  FortuneBonusResultAction__SetState(this, 1, v8);
}


void __fastcall FortuneBonusResultAction__PlayAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusResultAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1B4D1EC(0LL, v3);
  CommonEffectComponent__Init_41256340(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusResultAction__SetAnimSpeed(
        FortuneBonusResultAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_49B7A6D & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A6D = 1;
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
      sub_1B4D1EC(Item, v6);
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

  if ( (byte_49B7A6F & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_FortuneBonusResultAction__setState__, *(_QWORD *)&state);
    byte_49B7A6F = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_312D8D8 *)Method_CStateManager_FortuneBonusResultAction__setState__);
}


void __fastcall FortuneBonusResultAction__Setup(
        FortuneBonusResultAction_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  const MethodInfo *v24; // x1
  void *Master_object; // x0
  const MethodInfo *v26; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v29; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v35; // x20
  Il2CppObject *v36; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v40; // x0
  CGThumbnailListItem_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v45; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  Il2CppObject *Component_object; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  FortuneBonusResultAction___c_c *v50; // x0
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v52; // x22
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct UISprite_array *itemSpriteList; // x8
  unsigned __int64 v57; // x21
  Il2CppObject *v58; // x22
  struct UISprite_array *v59; // x8
  UISprite_o *v60; // x22
  int32_t monitor; // w23
  int32_t iconId; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_49B7A6A & 1) == 0 )
  {
    sub_1B4CF90(&AndroidBackKeyManager_TypeInfo, fortuneBonus);
    sub_1B4CF90(&AtlasManager_TypeInfo, v6);
    sub_1B4CF90(&System_Comparison_GiftEntity__TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_1B4CF90(&FortuneBonusResultAction_TypeInfo, v12);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v13);
    sub_1B4CF90(&int_TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v17);
    sub_1B4CF90(&NGUITools_TypeInfo, v18);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B4CF90(&Method_FortuneBonusResultAction___c__Setup_b__14_0__, v21);
    sub_1B4CF90(&FortuneBonusResultAction___c_TypeInfo, v22);
    sub_1B4CF90(&StringLiteral_21956/*"omikuzi_{0}"*/, v23);
    byte_49B7A6A = 1;
  }
  entity = 0LL;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.fortuneBonusData, (int32_t)fortuneBonus, (int32_t)method, v3);
  FortuneBonusResultAction__SetupAnim(this, v24);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_48;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v26);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v29);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v35 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v31, v32, v33);
      Master_object = System_String__Format((System_String_o *)StringLiteral_21956/*"omikuzi_{0}"*/, v36, 0LL);
      if ( !fortuneResultSprite )
        goto LABEL_48;
      UISprite__set_spriteName(fortuneResultSprite, (System_String_o *)Master_object, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_object )
        goto LABEL_48;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_object, v35->fields.giftId, 0LL);
      if ( ListById )
      {
        v38 = (System_Collections_Generic_List_object__o *)ListById;
        size = ListById->fields._size;
        v40 = FortuneBonusResultAction_TypeInfo;
        if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
          v40 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v40->static_fields->REWARD_ITEM_COUNT )
        {
          v50 = FortuneBonusResultAction___c_TypeInfo;
          if ( !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo);
            v50 = FortuneBonusResultAction___c_TypeInfo;
          }
          _9__14_0 = (System_Comparison_T__o *)v50->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v50->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v50);
              v50 = FortuneBonusResultAction___c_TypeInfo;
            }
            v52 = (Il2CppObject *)v50->static_fields->__9;
            _9__14_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_object____ctor(_9__14_0, v52, Method_FortuneBonusResultAction___c__Setup_b__14_0__, 0LL);
            static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v54, v55);
          }
          System_Collections_Generic_List_object___Sort_56106144(
            v38,
            _9__14_0,
            (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_48;
          v57 = 0LL;
          while ( (__int64)v57 < (int)itemSpriteList->max_length )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v58 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v38,
                              v57,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !Master_object || !v58 )
              goto LABEL_48;
            Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v58,
                                      &entity,
                                      *((_DWORD *)Master_object + 6),
                                      (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v59 = this->fields.itemSpriteList;
              if ( !v59 )
                goto LABEL_48;
              if ( v57 >= v59->max_length )
                sub_1B4D1F4(Master_object, v26);
              if ( !entity )
                goto LABEL_48;
              v60 = v59->m_Items[v57];
              monitor = (int32_t)entity[2].monitor;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              Master_object = (void *)AtlasManager__SetItem(v60, monitor, 0LL);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v57;
            if ( !itemSpriteList )
              goto LABEL_48;
          }
        }
      }
    }
  }
  p_screenTouchInfo = (CGThumbnailListItem_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)Master_object,
                           0,
                           0LL);
      v45 = FortuneBonusResultAction_TypeInfo;
      if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
        v45 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v45->static_fields->SYSTEM_UI_LAYER_ID;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             ScreeenTouchInfo,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1B4CF34(p_screenTouchInfo, (int32_t)Component_object, v48, v49);
        goto LABEL_24;
      }
    }
LABEL_48:
    sub_1B4D1EC(Master_object, v26);
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

  if ( (byte_49B7A6C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A6C = 1;
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
      sub_1B4D1EC(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CStateManager_T__o *fsm; // x0

  if ( (byte_49B7A69 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_FortuneBonusResultAction__update__, method);
    sub_1B4CF90(&CTouch_TypeInfo, v3);
    byte_49B7A69 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_312D8B4 *)Method_CStateManager_FortuneBonusResultAction__update__);
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
    sub_1B4D1EC(this, 0LL);
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
      sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, that);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x19
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  TerminalSceneComponent_o *v20; // x21
  Il2CppObject *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_49B7A71 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&AndroidBackKeyManager_TypeInfo, v4);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v5);
    sub_1B4CF90(&CTouch_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_FortuneBonusResultAction_StateTouchWait_update__, v8);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B4CF90(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_1B4CF90(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_49B7A71 = 1;
  }
  v12 = sub_1B4D1DC(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = that;
  v17 = v12 + 16;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)that, v15, v16);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (void *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v17 )
    {
      isTouchPush = *(void **)(*(_QWORD *)v17 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          v18 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v18 = (_QWORD *)sub_1B4CFA8(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v19 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v18, v18[4]);
          OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v14);
            byte_49B5933 = 1;
          }
          isTouchPush = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            isTouchPush = TerminalSceneComponent_TypeInfo;
          }
          v20 = (TerminalSceneComponent_o *)**((_QWORD **)isTouchPush + 23);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v20 )
          {
            TerminalSceneComponent__fadeoutBgm(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v23 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              v23,
              (Il2CppObject *)v12,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
              isTouchPush = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                FortuneBonusResultAction__SetState((FortuneBonusResultAction_o *)isTouchPush, 0, v24);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1B4D1EC(isTouchPush, v14);
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
    sub_1B4D1EC(this, method);
  ActionExtensions__Call(that->fields.endAction, 0LL);
}


void __fastcall FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7A72 & 1) == 0 )
  {
    sub_1B4CF90(&FortuneBonusResultAction___c_TypeInfo, v1);
    byte_49B7A72 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortuneBonusResultAction___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)FortuneBonusResultAction___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, 0LL);
  return n->fields.idx == this->fields.index;
}