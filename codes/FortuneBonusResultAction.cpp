void FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2CF7 & 1) == 0 )
  {
    sub_1C6BA08(&FortuneBonusResultAction_TypeInfo);
    byte_4CB2CF7 = 1;
  }
  *FortuneBonusResultAction_TypeInfo->static_fields = (struct FortuneBonusResultAction_StaticFields)0x200000016LL;
}


void FortuneBonusResultAction___ctor(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortuneBonusResultAction__Awake(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_FortuneBonusResultAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4CB2CEF & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_FortuneBonusResultAction___ctor__);
    sub_1C6BA08(&Method_CStateManager_FortuneBonusResultAction__add__);
    sub_1C6BA08(&CStateManager_FortuneBonusResultAction__TypeInfo);
    sub_1C6BA08(&FortuneBonusResultAction_StateNone_TypeInfo);
    sub_1C6BA08(&FortuneBonusResultAction_StatePlay_TypeInfo);
    sub_1C6BA08(&FortuneBonusResultAction_StateTouchWait_TypeInfo);
    byte_4CB2CEF = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C6BC54(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33848C4 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C6BC54(FortuneBonusResultAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_338496C *)Method_CStateManager_FortuneBonusResultAction__add__);
    v11 = (CStateManager_T__o *)*p_fsm;
    v12 = (Il2CppObject *)sub_1C6BC54(FortuneBonusResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11
      || (CStateManager_object___add(
            v11,
            1,
            (IState_T__o *)v12,
            (const MethodInfo_338496C *)Method_CStateManager_FortuneBonusResultAction__add__),
          v13 = (CStateManager_T__o *)*p_fsm,
          v14 = (Il2CppObject *)sub_1C6BC54(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v14, 0),
          !v13) )
    {
LABEL_8:
      sub_1C6BC60(v9, v10);
    }
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_338496C *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v15);
  }
}


CommonUI_FortuneBonusDetailData_o *FortuneBonusResultAction__GetFortuneBonusDetailData(
        FortuneBonusResultAction_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  System_Object_array *details; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4CB2CF2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
    sub_1C6BA08(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
    sub_1C6BA08(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__);
    sub_1C6BA08(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
    byte_4CB2CF2 = 1;
  }
  v5 = sub_1C6BC54(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0;
  details = (System_Object_array *)fortuneBonusData->fields.details;
  if ( !details || !details->max_length )
    return 0;
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    0);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                details,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_3124FFC *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *FortuneBonusResultAction__GetFortuneBonusRewardData(
        FortuneBonusResultAction_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *rewards; // x8
  il2cpp_array_size_t max_length; // x9

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0;
  rewards = fortuneBonusData->fields.rewards;
  if ( !rewards )
    return 0;
  max_length = rewards->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C6BC68(this);
  return rewards->m_Items[0];
}


bool FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4CB2CF5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2CF5 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0, 0) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1C6BC60(0, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0);
}


void FortuneBonusResultAction__Play(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endAction, (int32_t)endAct, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  FortuneBonusResultAction__SetAnimSpeed(this, 0.0, v7);
  FortuneBonusResultAction__SetState(this, 1, v8);
}


void FortuneBonusResultAction__PlayAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusResultAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1C6BC60(0, v3);
  CommonEffectComponent__Init_43977132(commonEffectComponent, this->fields.animationName, 0, 0, 0);
}


void FortuneBonusResultAction__SetAnimSpeed(FortuneBonusResultAction_o *this, float speed, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4CB2CF4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2CF4 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_1C6BC60(Item, v6);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FortuneBonusResultAction__SetState(FortuneBonusResultAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CB2CF6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_FortuneBonusResultAction__setState__);
    byte_4CB2CF6 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C6BC60(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33849F8 *)Method_CStateManager_FortuneBonusResultAction__setState__);
}


void FortuneBonusResultAction__Setup(
        FortuneBonusResultAction_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  void *Master_object; // x0
  const MethodInfo *v8; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v11; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v14; // x20
  Il2CppObject *v15; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v19; // x0
  CGThumbnailListItem_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v24; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  FortuneBonusResultAction___c_c *v29; // x0
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v31; // x22
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UISprite_array *itemSpriteList; // x8
  unsigned __int64 v36; // x21
  Il2CppObject *v37; // x22
  struct UISprite_array *v38; // x8
  UISprite_o *v39; // x22
  int32_t monitor; // w23
  int32_t iconId; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB2CF1 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidBackKeyManager_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&System_Comparison_GiftEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&FortuneBonusResultAction_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_FortuneBonusResultAction___c__Setup_b__14_0__);
    sub_1C6BA08(&FortuneBonusResultAction___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_22480/*"omikuzi_{0}"*/);
    byte_4CB2CF1 = 1;
  }
  entity = 0;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fortuneBonusData, (int32_t)fortuneBonus, (int32_t)method, v3);
  FortuneBonusResultAction__SetupAnim(this, v6);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_48;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v8);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v11);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v14 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      Master_object = System_String__Format((System_String_o *)StringLiteral_22480/*"omikuzi_{0}"*/, v15, 0);
      if ( !fortuneResultSprite )
        goto LABEL_48;
      UISprite__set_spriteName(fortuneResultSprite, (System_String_o *)Master_object, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_object )
        goto LABEL_48;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_object, v14->fields.giftId, 0);
      if ( ListById )
      {
        v17 = (System_Collections_Generic_List_object__o *)ListById;
        size = ListById->fields._size;
        v19 = FortuneBonusResultAction_TypeInfo;
        if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
          v19 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v19->static_fields->REWARD_ITEM_COUNT )
        {
          v29 = FortuneBonusResultAction___c_TypeInfo;
          if ( !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo);
            v29 = FortuneBonusResultAction___c_TypeInfo;
          }
          _9__14_0 = (System_Comparison_T__o *)v29->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v29->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v29);
              v29 = FortuneBonusResultAction___c_TypeInfo;
            }
            v31 = (Il2CppObject *)v29->static_fields->__9;
            _9__14_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_object____ctor(_9__14_0, v31, Method_FortuneBonusResultAction___c__Setup_b__14_0__, 0);
            static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v33, v34);
          }
          System_Collections_Generic_List_object___Sort_58729528(
            v17,
            _9__14_0,
            (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_48;
          v36 = 0;
          while ( (__int64)v36 < SLODWORD(itemSpriteList->max_length) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v37 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v17,
                              v36,
                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !Master_object || !v37 )
              goto LABEL_48;
            Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                                      &entity,
                                      *((_DWORD *)Master_object + 6),
                                      (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v38 = this->fields.itemSpriteList;
              if ( !v38 )
                goto LABEL_48;
              if ( v36 >= LODWORD(v38->max_length) )
                sub_1C6BC68(Master_object);
              if ( !entity )
                goto LABEL_48;
              v39 = v38->m_Items[v36];
              monitor = (int32_t)entity[2].monitor;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              Master_object = (void *)AtlasManager__SetItem(v39, monitor, 0);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v36;
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
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)Master_object,
                           0,
                           0);
      v24 = FortuneBonusResultAction_TypeInfo;
      if ( !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
        v24 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v24->static_fields->SYSTEM_UI_LAYER_ID;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0);
      if ( ScreeenTouchInfo )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             ScreeenTouchInfo,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1C6B9AC(p_screenTouchInfo, (int32_t)Component_object, v27, v28);
        goto LABEL_24;
      }
    }
LABEL_48:
    sub_1C6BC60(Master_object, v8);
  }
LABEL_24:
  Master_object = p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_48;
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void FortuneBonusResultAction__SetupAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4CB2CF3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2CF3 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0),
          (Item = this->fields.anim) == 0)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_1C6BC60(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0);
  }
}


void FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CB2CF0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_FortuneBonusResultAction__update__);
    sub_1C6BA08(&CTouch_TypeInfo);
    byte_4CB2CF0 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_33849D4 *)Method_CStateManager_FortuneBonusResultAction__update__);
}


void FortuneBonusResultAction_StateNone___ctor(FortuneBonusResultAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusResultAction_StateNone__begin(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusResultAction_StateNone__end(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusResultAction_StateNone__update(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusResultAction_StatePlay___ctor(FortuneBonusResultAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusResultAction_StatePlay__begin(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C6BC60(this, 0);
  FortuneBonusResultAction__PlayAnim(that, (const MethodInfo *)that);
}


void FortuneBonusResultAction_StatePlay__end(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusResultAction_StatePlay__update(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_1C6BC60(this, 0);
    if ( !FortuneBonusResultAction__IsPlayingAnim(that, (const MethodInfo *)that) )
      FortuneBonusResultAction__SetState(that, 2, v5);
  }
  this->fields.isStarted = 1;
}


void FortuneBonusResultAction_StateTouchWait___ctor(
        FortuneBonusResultAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusResultAction_StateTouchWait__begin(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0 )
  {
    sub_1C6BC60(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void FortuneBonusResultAction_StateTouchWait__end(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusResultAction_StateTouchWait__update(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  void *isTouchPush; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  TerminalSceneComponent_o *v12; // x21
  Il2CppObject *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4CB2CF8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AndroidBackKeyManager_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_FortuneBonusResultAction_StateTouchWait_update__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C6BA08(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4CB2CF8 = 1;
  }
  v4 = sub_1C6BC54(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_25;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (void *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(void **)(*(_QWORD *)v9 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0);
          v10 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C6BA20(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CB01CE )
          {
            sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
            byte_4CB01CE = 1;
          }
          isTouchPush = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            isTouchPush = TerminalSceneComponent_TypeInfo;
          }
          v12 = (TerminalSceneComponent_o *)**((_QWORD **)isTouchPush + 23);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( v12 )
          {
            TerminalSceneComponent__fadeoutBgm(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
            System_Action___ctor(
              v15,
              (Il2CppObject *)v4,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0);
              isTouchPush = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                FortuneBonusResultAction__SetState((FortuneBonusResultAction_o *)isTouchPush, 0, v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C6BC60(isTouchPush, v6);
  }
}


void FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct FortuneBonusResultAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C6BC60(this, method);
  ActionExtensions__Call(that->fields.endAction, 0);
}


void FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2CF9 & 1) == 0 )
  {
    sub_1C6BA08(&FortuneBonusResultAction___c_TypeInfo);
    byte_4CB2CF9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortuneBonusResultAction___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)FortuneBonusResultAction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void FortuneBonusResultAction___c___ctor(FortuneBonusResultAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FortuneBonusResultAction___c___Setup_b__14_0(
        FortuneBonusResultAction___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}


void FortuneBonusResultAction___c__DisplayClass16_0___ctor(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FortuneBonusResultAction___c__DisplayClass16_0___GetFortuneBonusDetailData_b__0(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        CommonUI_FortuneBonusDetailData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C6BC60(this, 0);
  return n->fields.idx == this->fields.index;
}