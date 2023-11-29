void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8229 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardTokenAction_TypeInfo, v1);
    byte_40F8229 = 1;
  }
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_EVENT_ID = 80285000;
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_IMAGE_ID = 94047700;
  QuestRewardTokenAction_TypeInfo->static_fields->TOKEN_UNKNOWN_IMAGE_ID = 94047799;
}


void __fastcall QuestRewardTokenAction___ctor(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardTokenAction__Awake(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  QuestRewardTokenAction_StateNone_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  QuestRewardTokenAction_StatePlay_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  QuestRewardTokenAction_StateTouchWait_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_40F821C & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardTokenAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardTokenAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardTokenAction__TypeInfo, v7);
    sub_B16FFC(&QuestRewardTokenAction_StateNone_TypeInfo, v8);
    sub_B16FFC(&QuestRewardTokenAction_StatePlay_TypeInfo, v9);
    sub_B16FFC(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v10);
    byte_40F821C = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardTokenAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    fsm = this->fields.fsm;
    v24 = (QuestRewardTokenAction_StateNone_o *)sub_B170CC(
                                                  QuestRewardTokenAction_StateNone_TypeInfo,
                                                  v20,
                                                  v21,
                                                  v22,
                                                  v23);
    QuestRewardTokenAction_StateNone___ctor(v24, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardTokenAction__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v30 = (QuestRewardTokenAction_StatePlay_o *)sub_B170CC(
                                                  QuestRewardTokenAction_StatePlay_TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28,
                                                  v29);
    QuestRewardTokenAction_StatePlay___ctor(v30, 0LL);
    if ( !v25
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v25,
            1,
            (IState_T__o *)v30,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardTokenAction__add__),
          v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v36 = (QuestRewardTokenAction_StateTouchWait_o *)sub_B170CC(
                                                             QuestRewardTokenAction_StateTouchWait_TypeInfo,
                                                             v32,
                                                             v33,
                                                             v34,
                                                             v35),
          QuestRewardTokenAction_StateTouchWait___ctor(v36, 0LL),
          !v31) )
    {
LABEL_8:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v37);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UIAtlas_o *result; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_40F8221 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_40F8221 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_18AFE14 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     assetData,
                                                                     name,
                                                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( Object_WarBoardWaitTimeSetting )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              Object_WarBoardWaitTimeSetting,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B170D4();
    }
    return 0LL;
  }
  return result;
}


// attributes: thunk
void __fastcall QuestRewardTokenAction__DestroyData(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction__ReleaseEventUI(this, method);
}


int32_t __fastcall QuestRewardTokenAction__GetState(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  if ( (byte_40F8227 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardTokenAction__getState__, method);
    byte_40F8227 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardTokenAction_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_array *tokenSprite; // x8
  __int64 v8; // x9
  __int64 v9; // x21
  __int64 v10; // x22
  UnityEngine_Object_o *v11; // x20
  struct UISprite_array *v12; // x8
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UILabel_array *tokenName; // x8
  __int64 v18; // x9
  __int64 v19; // x21
  __int64 v20; // x22
  UnityEngine_Object_o *v21; // x20
  struct UILabel_array *v22; // x8
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *transform; // x0
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o *v34; // x0
  System_Int32_array **v35; // x0
  SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  SimpleAnimation_o *v44; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v46; // x0
  SimpleAnimation_State_o *v47; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v49; // x20
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v53; // x21
  UnityEngine_Animation_o *v54; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v58; // x20
  UnityEngine_Object_o *v59; // x0
  System_String_o *v60; // x0
  UnityEngine_AnimationState_o *v61; // x0
  SimpleAnimation_o *v62; // x20
  UnityEngine_Object_o *v63; // x0
  System_String_o *v64; // x0
  SimpleAnimation_State_o *v65; // x0
  SimpleAnimation_State_c *v66; // x8
  SimpleAnimation_State_o *v67; // x20
  unsigned __int64 v68; // x10
  SimpleAnimation_State_c **v69; // x11
  __int64 v70; // x0
  UnityEngine_GameObject_o *v71; // x0

  v3 = this;
  if ( (byte_40F8224 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    this = (QuestRewardTokenAction_o *)sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    byte_40F8224 = 1;
  }
  tokenSprite = v3->fields.tokenSprite;
  if ( tokenSprite )
  {
    v8 = *(_QWORD *)&tokenSprite->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = (int)v8;
      v10 = 4LL;
      while ( v10 - 4 < (unsigned __int64)tokenSprite->max_length )
      {
        v11 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v10);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v12 = v3->fields.tokenSprite;
          if ( !v12 )
            goto LABEL_74;
          if ( v10 - 4 >= (unsigned __int64)v12->max_length )
            break;
          v13 = (UnityEngine_Component_o *)*((_QWORD *)&v12->obj.klass + v10);
          if ( !v13 )
            goto LABEL_74;
          gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
          Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
          if ( !Parent )
            goto LABEL_74;
          v16 = UnityEngine_Component__get_gameObject(Parent, 0LL);
          if ( !v16 )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive(v16, 0, 0LL);
        }
        if ( v10 - 3 >= v9 )
          goto LABEL_20;
        tokenSprite = v3->fields.tokenSprite;
        ++v10;
        if ( !tokenSprite )
          goto LABEL_74;
      }
LABEL_75:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
  }
LABEL_20:
  tokenName = v3->fields.tokenName;
  if ( tokenName )
  {
    v18 = *(_QWORD *)&tokenName->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = (int)v18;
      v20 = 4LL;
      while ( v20 - 4 < (unsigned __int64)tokenName->max_length )
      {
        v21 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v20);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = v3->fields.tokenName;
          if ( !v22 )
            goto LABEL_74;
          if ( v20 - 4 >= (unsigned __int64)v22->max_length )
            goto LABEL_75;
          v23 = (UnityEngine_Component_o *)*((_QWORD *)&v22->obj.klass + v20);
          if ( !v23 )
            goto LABEL_74;
          v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
          if ( !v24 )
            goto LABEL_74;
          UnityEngine_GameObject__SetActive(v24, 0, 0LL);
        }
        if ( v20 - 3 >= v19 )
          goto LABEL_36;
        tokenName = v3->fields.tokenName;
        ++v20;
        if ( !tokenName )
          goto LABEL_74;
      }
      goto LABEL_75;
    }
  }
LABEL_36:
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !transform )
    goto LABEL_74;
  ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                          transform,
                                                          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v3->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
  p_animation = &v3->fields.animation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v3->fields.animation,
    ComponentInChildren_UIWidget,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !v34 )
    goto LABEL_74;
  v35 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                 v34,
                                 (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v3->fields.simpleAnimation = (struct SimpleAnimation_o *)v35;
  p_simpleAnimation = &v3->fields.simpleAnimation;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.simpleAnimation, v35, v37, v38, v39, v40, v41, v42);
  simpleAnimation = (UnityEngine_Object_o *)v3->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v53 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
      goto LABEL_72;
    v54 = *p_animation;
    if ( *p_animation )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        Item = UnityEngine_Animation__get_Item(v54, name, 0LL);
        if ( Item )
        {
          UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL);
          v58 = *p_animation;
          if ( v58 )
          {
            v59 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v58, 0LL);
            if ( v59 )
            {
              v60 = UnityEngine_Object__get_name(v59, 0LL);
              v61 = UnityEngine_Animation__get_Item(v58, v60, 0LL);
              if ( v61 )
              {
                UnityEngine_AnimationState__set_normalizedTime(v61, 0.0, 0LL);
                goto LABEL_72;
              }
            }
          }
        }
      }
    }
LABEL_74:
    sub_B170D4();
  }
  v44 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  monitor = (UnityEngine_Object_o *)v44[1].monitor;
  if ( !monitor )
    goto LABEL_74;
  v46 = UnityEngine_Object__get_name(monitor, 0LL);
  v47 = SimpleAnimation__get_Item(v44, v46, 0LL);
  if ( !v47 )
    goto LABEL_74;
  klass = v47->klass;
  v49 = v47;
  if ( *(_WORD *)&v47->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v50;
      p_offset += 2;
      if ( v50 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
        goto LABEL_49;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_49:
    p_method = sub_AAFEF8(v47, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v49, *(_QWORD *)(p_method + 8), 0.0);
  v62 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_74;
  v63 = (UnityEngine_Object_o *)v62[1].monitor;
  if ( !v63 )
    goto LABEL_74;
  v64 = UnityEngine_Object__get_name(v63, 0LL);
  v65 = SimpleAnimation__get_Item(v62, v64, 0LL);
  if ( !v65 )
    goto LABEL_74;
  v66 = v65->klass;
  v67 = v65;
  if ( *(_WORD *)&v65->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    v69 = (SimpleAnimation_State_c **)&v66->_1.interfaceOffsets->offset;
    while ( *(v69 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v68;
      v69 += 2;
      if ( v68 >= *(unsigned __int16 *)&v65->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v70 = (__int64)&v66->vtable[*(_DWORD *)v69 + 6].method;
  }
  else
  {
LABEL_69:
    v70 = sub_AAFEF8(v65, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v70)(v67, *(_QWORD *)(v70 + 8), 0.0);
LABEL_72:
  v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !v71 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v71, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_40F821E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAct);
    sub_B16FFC(&Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__, v7);
    sub_B16FFC(&QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, v8);
    byte_40F821E = 1;
  }
  v9 = sub_B170CC(QuestRewardTokenAction___c__DisplayClass18_0_TypeInfo, endAct, method, v3, v4);
  QuestRewardTokenAction___c__DisplayClass18_0___ctor((QuestRewardTokenAction___c__DisplayClass18_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = endAct;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)endAct, v10, v11, v12, v13, v14, v15);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_QuestRewardTokenAction___c__DisplayClass18_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v20, 1, v21);
}


void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *eventUIAssetData; // x0
  struct System_Action_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  const MethodInfo *v24; // x2
  QuestRewardTokenAction_o *v25; // x0
  AssetData_o *v26; // x1

  if ( (byte_40F821F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v9);
    sub_B16FFC(&StringLiteral_6185, v10);
    byte_40F821F = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v12 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    if ( v12 && v12->klass != System_Action_TypeInfo )
    {
      v25 = (QuestRewardTokenAction_o *)sub_B173C8(v12);
      goto LABEL_13;
    }
    this->fields.eventUILoadCallbackFunc = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !this->fields.isEventUILoad )
    {
      this->fields.isEventUILoad = 1;
      v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21, v22);
      AssetLoader_LoadEndDataHandler___ctor(
        v23,
        (Il2CppObject *)this,
        Method_QuestRewardTokenAction_LoadEventUIEnd__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6185, v23, loadParallelMax, 0LL) )
      {
        this->fields.isEventUILoad = 0;
        v25 = this;
        v26 = 0LL;
LABEL_13:
        QuestRewardTokenAction__LoadEventUIEnd(v25, v26, v24);
      }
    }
  }
}


void __fastcall QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestRewardTokenAction_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_eventUILoadCallbackFunc; // x19
  System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_40F8220 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5359, assetData);
    byte_40F8220 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.eventUIAssetData = assetData;
    this->fields.isEventUILoad = 0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5359,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (BattleServantConfConponent_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_B16F98(p_eventUILoadCallbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v20, 0LL);
  }
}


void __fastcall QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x0
  System_Action_o *v22; // x21

  if ( (byte_40F8226 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v12);
    sub_B16FFC(&Method_QuestRewardTokenAction__Play_b__26_0__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_40F8226 = 1;
  }
  this->fields.endAct = end_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v21 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v21->static_fields->DEFAULT_FADE_TIME;
  }
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__26_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(Instance, fade_in_time, v22, 0LL);
}


void __fastcall QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct AssetData_o **p_eventUIAssetData; // x20
  AssetData_o *eventUIAssetData; // x21
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8222 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6185, v9);
    byte_40F8222 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6185, 0LL);
    p_eventUIAssetData = &this->fields.eventUIAssetData;
  }
  else
  {
    p_eventUIAssetData = &this->fields.eventUIAssetData;
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29947376(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  sub_B16F98((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_eventUIDownloadAtlas - 1) = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_eventUIAssetData, 0LL, v13, v14, v15, v16, v17, v18);
}


bool __fastcall QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  UISprite_o *v8; // x0
  System_String_o *v9; // x1
  UIAtlas_o *v11; // x0

  if ( (byte_40F8223 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40F8223 = 1;
  }
  if ( System_String__IsNullOrEmpty(spriteName, 0LL) )
    goto LABEL_8;
  eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL) )
  {
LABEL_8:
    if ( sprite )
    {
      v8 = sprite;
      v9 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v8, v9, 0LL);
      return 1;
    }
    goto LABEL_17;
  }
  v11 = this->fields.eventUIDownloadAtlas;
  if ( !v11 )
    goto LABEL_17;
  if ( UIAtlas__GetSprite(v11, spriteName, 0LL) )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0LL);
      v8 = sprite;
      v9 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardTokenAction__SetState(
        QuestRewardTokenAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_40F8228 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardTokenAction__setState__, *(_QWORD *)&state);
    byte_40F8228 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
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
  UnityEngine_Component_o *transform; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  QuestRewardTokenAction___c_c *v20; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__25_0; // x21
  Il2CppObject *v23; // x22
  struct QuestRewardTokenAction___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  QuestRewardTokenAction_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x23
  __int64 v37; // x8
  int v38; // w21
  int v39; // w9
  struct QuestRewardTokenAction_StaticFields *v40; // x8
  int v41; // w21
  int v42; // w8
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v44; // x26
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v46; // x21
  struct UISprite_array *v47; // x8
  UISprite_o *v48; // x21
  System_String_o *v49; // x0
  const MethodInfo *v50; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v52; // x9
  UnityEngine_Object_o *v53; // x21
  struct UILabel_array *v54; // x8
  UILabel_o *v55; // x21
  System_String_o *v56; // x0
  unsigned __int64 v57; // x8
  UnityEngine_Component_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *v61; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8225 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_B16FFC(&Method_System_Comparison_QuestRewardInfo___ctor__, v5);
    sub_B16FFC(&System_Comparison_QuestRewardInfo__TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&QuestRewardTokenAction_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_QuestRewardTokenAction___c__Setup_b__25_0__, v12);
    sub_B16FFC(&QuestRewardTokenAction___c_TypeInfo, v13);
    byte_40F8225 = 1;
  }
  v71 = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_66;
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   transform,
                                   (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !ComponentInChildren_UIWidget )
    goto LABEL_66;
  *(&ComponentInChildren_UIWidget->fields.mAnchorsCached + 5) = 1;
  v20 = QuestRewardTokenAction___c_TypeInfo;
  if ( (BYTE3(QuestRewardTokenAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v20 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_QuestRewardInfo__TypeInfo,
                                                                           v16,
                                                                           v17,
                                                                           v18,
                                                                           v19);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__25_0,
      v23,
      Method_QuestRewardTokenAction___c__Setup_b__25_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestRewardInfo___ctor__);
    v24 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v24->__9__25_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__25_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)infos,
    (System_Comparison_T__o *)_9__25_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_66;
  v34 = *(_QWORD *)&infos->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = (int)v34;
    v36 = 4LL;
    while ( 1 )
    {
      v37 = *((_QWORD *)&infos->obj.klass + v36);
      if ( v37 && *(_DWORD *)(v37 + 16) == 13 )
      {
        v31 = QuestRewardTokenAction_TypeInfo;
        v38 = *(_DWORD *)(v37 + 20);
        if ( (WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
          if ( !QuestRewardTokenAction_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
            v31 = QuestRewardTokenAction_TypeInfo;
          }
          v39 = WORD1(QuestRewardTokenAction_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
        }
        else
        {
          v39 = 0;
        }
        v40 = v31->static_fields;
        v41 = v38 - v40->TOKEN_EVENT_ID;
        HIDWORD(v71) = v41;
        if ( v41 >= 27 )
        {
          if ( v39 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v40 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v42 = v41 + v40->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( v39 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v40 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v42 = v40->TOKEN_IMAGE_ID + v41;
        }
        LODWORD(v71) = v42;
        tokenSprite = this->fields.tokenSprite;
        v44 = v36 - 4;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v44 < (int)max_length )
          {
            if ( v44 >= max_length )
              goto LABEL_55;
            v46 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v36);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v31 = (QuestRewardTokenAction_c *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
            if ( ((unsigned __int8)v31 & 1) != 0 )
            {
              v47 = this->fields.tokenSprite;
              if ( !v47 )
                goto LABEL_66;
              if ( v44 >= v47->max_length )
                goto LABEL_55;
              v48 = (UISprite_o *)*((_QWORD *)&v47->obj.klass + v36);
              v49 = System_Int32__ToString((int32_t)&v71, 0LL);
              v31 = (QuestRewardTokenAction_c *)QuestRewardTokenAction__SetEventUI(this, v48, v49, v50);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v52 = tokenName->max_length;
          if ( (__int64)v44 < (int)v52 )
          {
            if ( v44 >= v52 )
              goto LABEL_55;
            v53 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v36);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v31 = (QuestRewardTokenAction_c *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
            if ( ((unsigned __int8)v31 & 1) != 0 )
            {
              v54 = this->fields.tokenName;
              if ( !v54 )
                goto LABEL_66;
              if ( v44 >= v54->max_length )
                goto LABEL_55;
              v55 = (UILabel_o *)*((_QWORD *)&v54->obj.klass + v36);
              v56 = System_Int32__ToString((int32_t)&v71 + 4, 0LL);
              if ( !v55 )
                goto LABEL_66;
              UILabel__set_text(v55, v56, 0LL);
            }
          }
        }
      }
      v57 = v36 - 3;
      if ( v36 - 3 >= v35 )
        break;
      ++v36;
      if ( v57 >= infos->max_length )
      {
LABEL_55:
        sub_B17100(v31, v32, v33);
        sub_B170A0();
      }
    }
  }
  p_screenTouchInfo = (UnityEngine_Component_o **)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v61, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        goto LABEL_63;
      }
    }
LABEL_66:
    sub_B170D4();
  }
LABEL_63:
  if ( !*p_screenTouchInfo )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__Update(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x0

  if ( (byte_40F821D & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardTokenAction__update__, method);
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40F821D = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardTokenAction__update__);
}


void __fastcall QuestRewardTokenAction___Play_b__26_0(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardTokenAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardTokenAction_StateNone___ctor(
        QuestRewardTokenAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateNone__begin(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__end(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__update(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay___ctor(
        QuestRewardTokenAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StatePlay__begin(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  UnityEngine_Object_o *v10; // x0
  System_String_o *v11; // x0
  struct SimpleAnimation_o *v12; // x20
  UnityEngine_Object_o *v13; // x0
  System_String_o *v14; // x0
  SimpleAnimation_State_o *v15; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_Object_o *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_Object_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v32; // x19
  UnityEngine_Object_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_AnimationState_o *v35; // x0
  struct SimpleAnimation_o *v36; // x19
  UnityEngine_Object_o *v37; // x0
  System_String_o *v38; // x0
  SimpleAnimation_State_o *v39; // x0
  SimpleAnimation_State_c *v40; // x8
  SimpleAnimation_State_o *v41; // x19
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  __int64 v44; // x0

  if ( (byte_40FA336 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40FA336 = 1;
  }
  if ( !that )
    goto LABEL_51;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
      return;
    v22 = that->fields.animation;
    if ( v22 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v22, name, 0LL) )
        {
          v25 = that->fields.animation;
          if ( !v25 )
            goto LABEL_51;
          v26 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !v26 )
            goto LABEL_51;
          v27 = UnityEngine_Object__get_name(v26, 0LL);
          UnityEngine_Animation__Play_49744236(v25, v27, 0LL);
        }
        v28 = that->fields.animation;
        if ( v28 )
        {
          v29 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( v29 )
          {
            v30 = UnityEngine_Object__get_name(v29, 0LL);
            Item = UnityEngine_Animation__get_Item(v28, v30, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_normalizedTime(Item, 0.0, 0LL);
              v32 = that->fields.animation;
              if ( v32 )
              {
                v33 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v32, 0LL);
                if ( v33 )
                {
                  v34 = UnityEngine_Object__get_name(v33, 0LL);
                  v35 = UnityEngine_Animation__get_Item(v32, v34, 0LL);
                  if ( v35 )
                  {
                    UnityEngine_AnimationState__set_speed(v35, 1.0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B170D4();
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  monitor = (UnityEngine_Object_o *)v6[1].monitor;
  if ( !monitor )
    goto LABEL_51;
  v8 = UnityEngine_Object__get_name(monitor, 0LL);
  if ( !SimpleAnimation__IsPlaying(v6, v8, 0LL) )
  {
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_51;
    v10 = (UnityEngine_Object_o *)v9[1].monitor;
    if ( !v10 )
      goto LABEL_51;
    v11 = UnityEngine_Object__get_name(v10, 0LL);
    SimpleAnimation__Play_16380456(v9, v11, 0LL);
  }
  v12 = that->fields.simpleAnimation;
  if ( !v12 )
    goto LABEL_51;
  v13 = (UnityEngine_Object_o *)v12[1].monitor;
  if ( !v13 )
    goto LABEL_51;
  v14 = UnityEngine_Object__get_name(v13, 0LL);
  v15 = SimpleAnimation__get_Item(v12, v14, 0LL);
  if ( !v15 )
    goto LABEL_51;
  klass = v15->klass;
  v17 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 2;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AAFEF8(v15, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v17, *(_QWORD *)(p_method + 8), 0.0);
  v36 = that->fields.simpleAnimation;
  if ( !v36 )
    goto LABEL_51;
  v37 = (UnityEngine_Object_o *)v36[1].monitor;
  if ( !v37 )
    goto LABEL_51;
  v38 = UnityEngine_Object__get_name(v37, 0LL);
  v39 = SimpleAnimation__get_Item(v36, v38, 0LL);
  if ( !v39 )
    goto LABEL_51;
  v40 = v39->klass;
  v41 = v39;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
    while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v42;
      v43 += 2;
      if ( v42 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v44 = (__int64)&v40->vtable[*(_DWORD *)v43 + 8].method;
  }
  else
  {
LABEL_48:
    v44 = sub_AAFEF8(v39, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v44)(v41, *(_QWORD *)(v44 + 8), 1.0);
}


void __fastcall QuestRewardTokenAction_StatePlay__end(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay__update(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v12; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FA337 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA337 = 1;
  }
  if ( !that )
    goto LABEL_23;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( !monitor )
      goto LABEL_23;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__maskFadeIsBusy(Instance, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v10 = that->fields.animation;
    if ( !v10 )
      goto LABEL_23;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !clip )
      goto LABEL_23;
    v12 = UnityEngine_Object__get_name(clip, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v12, 0LL) )
      return;
    goto LABEL_19;
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___ctor(
        QuestRewardTokenAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__begin(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (screenTouchInfo = (UnityEngine_Component_o *)that->fields.screenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__end(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateTouchWait__update(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestRewardTokenAction_o **v19; // x19
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x22

  if ( (byte_40FA338 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B16FFC(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FA338 = 1;
  }
  v12 = sub_B170CC(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 16) = that;
  v19 = (QuestRewardTokenAction_o **)(v12 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v19 )
    {
      screenTouchInfo = (UnityEngine_Component_o *)(*v19)->fields.screenTouchInfo;
      if ( screenTouchInfo )
      {
        gameObject = UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v27 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
          v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(
            v29,
            (Il2CppObject *)v12,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
            if ( *v19 )
            {
              QuestRewardTokenAction__SetState(*v19, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardTokenAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA335 & 1) == 0 )
  {
    sub_B16FFC(&QuestRewardTokenAction___c_TypeInfo, v1);
    byte_40FA335 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestRewardTokenAction___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRewardTokenAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestRewardTokenAction___c___ctor(QuestRewardTokenAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRewardTokenAction___c___Setup_b__25_0(
        QuestRewardTokenAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B170D4();
  return x->fields.objectId - y->fields.objectId;
}


void __fastcall QuestRewardTokenAction___c__DisplayClass18_0___ctor(
        QuestRewardTokenAction___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction___c__DisplayClass18_0___LoadData_b__0(
        QuestRewardTokenAction___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endAct; // x0

  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}