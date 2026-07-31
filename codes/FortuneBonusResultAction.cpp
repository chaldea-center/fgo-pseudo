void FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  if ( (byte_5934EFA & 1) == 0 )
  {
    sub_21FFC50(&FortuneBonusResultAction_TypeInfo);
    byte_5934EFA = 1;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_5934EF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_FortuneBonusResultAction___ctor__);
    sub_21FFC50(&Method_CStateManager_FortuneBonusResultAction__add__);
    sub_21FFC50(&CStateManager_FortuneBonusResultAction__TypeInfo);
    sub_21FFC50(&FortuneBonusResultAction_StateNone_TypeInfo);
    sub_21FFC50(&FortuneBonusResultAction_StatePlay_TypeInfo);
    sub_21FFC50(&FortuneBonusResultAction_StateTouchWait_TypeInfo);
    byte_5934EF2 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E505AC *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_21FFEBC(FortuneBonusResultAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_FortuneBonusResultAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_21FFEBC(FortuneBonusResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E5065C *)Method_CStateManager_FortuneBonusResultAction__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_21FFEBC(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E5065C *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v19);
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

  if ( (byte_5934EF5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
    sub_21FFC50(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
    sub_21FFC50(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__);
    sub_21FFC50(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
    byte_5934EF5 = 1;
  }
  v5 = sub_21FFEBC(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  fortuneBonusData = this->fields.fortuneBonusData;
  *(_DWORD *)(v5 + 16) = index;
  if ( !fortuneBonusData )
    return 0;
  details = (System_Object_array *)fortuneBonusData->fields.details;
  if ( !details || !details->max_length )
    return 0;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    0);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                details,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_37DD66C *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
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
    sub_21FFED4(this);
  return rewards->m_Items[0];
}


bool FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v7; // x0

  if ( (byte_5934EF8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934EF8 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(anim, 0, 0) )
    return 0;
  v7 = this->fields.anim;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Animation__IsPlaying(v7, this->fields.animationName, 0);
}


void FortuneBonusResultAction__Play(
        FortuneBonusResultAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  this->fields.endAction = endAct;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
    (int32_t)endAct,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v10);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  FortuneBonusResultAction__SetAnimSpeed(this, 0.0, v11);
  FortuneBonusResultAction__SetState(this, 1, v12);
}


void FortuneBonusResultAction__PlayAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusResultAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_21FFECC(0, v3);
  CommonEffectComponent__Init_50672300(commonEffectComponent, this->fields.animationName, 0, 0, 0);
}


void FortuneBonusResultAction__SetAnimSpeed(FortuneBonusResultAction_o *this, float speed, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_5934EF7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934EF7 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_21FFECC(Item, v7);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FortuneBonusResultAction__SetState(FortuneBonusResultAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_5934EF9 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_FortuneBonusResultAction__setState__);
    byte_5934EF9 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_FortuneBonusResultAction__setState__);
}


void FortuneBonusResultAction__Setup(
        FortuneBonusResultAction_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  void *Master_object; // x0
  const MethodInfo *v12; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v15; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  CommonUI_FortuneBonusDetailData_o *v17; // x20
  UISprite_o *fortuneResultSprite; // x21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v25; // x0
  MissionNaviTransitionBoardItem_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v32; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  Il2CppObject *Component_object; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  FortuneBonusResultAction___c_c *v41; // x0
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__14_0; // x21
  Il2CppObject *v44; // x22
  struct FortuneBonusResultAction___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UISprite_array *itemSpriteList; // x8
  unsigned __int64 v53; // x21
  Il2CppObject *v54; // x22
  struct UISprite_array *v55; // x8
  int32_t monitor; // w23
  UISprite_o *v57; // x22
  int32_t iconId; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5934EF4 & 1) == 0 )
  {
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Comparison_GiftEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&FortuneBonusResultAction_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_FortuneBonusResultAction___c__Setup_b__14_0__);
    sub_21FFC50(&FortuneBonusResultAction___c_TypeInfo);
    sub_21FFC50(&StringLiteral_23477/*"omikuzi_{0}"*/);
    byte_5934EF4 = 1;
  }
  entity = 0;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortuneBonusData,
    (int32_t)fortuneBonus,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FortuneBonusResultAction__SetupAnim(this, v10);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_48;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v12);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v15);
    if ( FortuneBonusDetailData )
    {
      v17 = FortuneBonusDetailData;
      fortuneResultSprite = this->fields.fortuneResultSprite;
      iconId = FortuneBonusDetailData->fields.iconId;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconId);
      Master_object = System_String__Format((System_String_o *)StringLiteral_23477/*"omikuzi_{0}"*/, v19, 0);
      if ( !fortuneResultSprite )
        goto LABEL_48;
      UISprite__set_spriteName(fortuneResultSprite, (System_String_o *)Master_object, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_object )
        goto LABEL_48;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_object, v17->fields.giftId, 0);
      if ( ListById )
      {
        v23 = (System_Collections_Generic_List_object__o *)ListById;
        size = ListById->fields._size;
        v25 = FortuneBonusResultAction_TypeInfo;
        if ( !*(&FortuneBonusResultAction_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo, v12, v15);
          v25 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v25->static_fields->REWARD_ITEM_COUNT )
        {
          v41 = FortuneBonusResultAction___c_TypeInfo;
          if ( !*(&FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo, v12, v15);
            v41 = FortuneBonusResultAction___c_TypeInfo;
          }
          static_fields = v41->static_fields;
          _9__14_0 = (System_Comparison_T__o *)static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !*(&v41->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v41, v12, v15);
              static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            }
            v44 = (Il2CppObject *)static_fields->__9;
            _9__14_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_object____ctor(_9__14_0, v44, Method_FortuneBonusResultAction___c__Setup_b__14_0__, 0);
            v45 = FortuneBonusResultAction___c_TypeInfo->static_fields;
            v45->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v45->__9__14_0,
              (int32_t)_9__14_0,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
          }
          System_Collections_Generic_List_object___Sort_71636404(
            v23,
            _9__14_0,
            (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_48;
          v53 = 0;
          while ( (__int64)v53 < SLODWORD(itemSpriteList->max_length) )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v15);
            v54 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v23,
                              v53,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !Master_object || !v54 )
              goto LABEL_48;
            Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v54,
                                      &entity,
                                      *((_DWORD *)Master_object + 6),
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v55 = this->fields.itemSpriteList;
              if ( !v55 )
                goto LABEL_48;
              if ( v53 >= LODWORD(v55->max_length) )
                sub_21FFED4(Master_object);
              if ( !entity )
                goto LABEL_48;
              monitor = (int32_t)entity[2].monitor;
              v57 = v55->m_Items[v53];
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v15);
              Master_object = (void *)AtlasManager__SetItem(v57, monitor, 0);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v53;
            if ( !itemSpriteList )
              goto LABEL_48;
          }
        }
      }
    }
  }
  p_screenTouchInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v15);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_object = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)Master_object,
                           0,
                           0);
      v32 = FortuneBonusResultAction_TypeInfo;
      if ( !*(&FortuneBonusResultAction_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo, v29, v30);
        v32 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v32->static_fields->SYSTEM_UI_LAYER_ID;
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v29, v30);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0);
      if ( ScreeenTouchInfo )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             ScreeenTouchInfo,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
        sub_21FFBF4(p_screenTouchInfo, (int32_t)Component_object, v35, v36, v37, v38, v39, v40);
        goto LABEL_24;
      }
    }
LABEL_48:
    sub_21FFECC(Master_object, v12);
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
  __int64 v2; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_5934EF6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934EF6 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0),
          (Item = this->fields.anim) == 0)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_21FFECC(Item, v5);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0);
  }
}


void FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_5934EF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_FortuneBonusResultAction__update__);
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5934EF3 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3E506C4 *)Method_CStateManager_FortuneBonusResultAction__update__);
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
    sub_21FFECC(this, 0);
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
      sub_21FFECC(this, 0);
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
    sub_21FFECC(this, that);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _QWORD *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x2
  TerminalSceneComponent_o *v20; // x21
  Il2CppObject *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_5934EFB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_FortuneBonusResultAction_StateTouchWait_update__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_21FFC50(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_5934EFB = 1;
  }
  v4 = sub_21FFEBC(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_25;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (_QWORD *)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
  isTouchPush = (void *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v16 = (_QWORD *)*v13;
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( v16 )
    {
      isTouchPush = (void *)v16[11];
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0);
          v17 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_21FFC68(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v19);
          if ( !byte_5931EF0 )
          {
            sub_21FFC50(&TerminalSceneComponent_TypeInfo);
            byte_5931EF0 = 1;
          }
          isTouchPush = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v19);
            isTouchPush = TerminalSceneComponent_TypeInfo;
          }
          v20 = (TerminalSceneComponent_o *)**((_QWORD **)isTouchPush + 23);
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v19);
          if ( v20 )
          {
            TerminalSceneComponent__fadeoutBgm(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v23,
              (Il2CppObject *)v4,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0);
              isTouchPush = (void *)*v13;
              if ( *v13 )
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
    sub_21FFECC(isTouchPush, v6);
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
    sub_21FFECC(this, method);
  ActionExtensions__Call(that->fields.endAction, 0);
}


void FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934EFC & 1) == 0 )
  {
    sub_21FFC50(&FortuneBonusResultAction___c_TypeInfo);
    byte_5934EFC = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortuneBonusResultAction___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FortuneBonusResultAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
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
    sub_21FFECC(this, 0);
  return n->fields.idx == this->fields.index;
}