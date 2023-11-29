void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  QuestRewardHarvestAction_StateNone_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  QuestRewardHarvestAction_StatePlay_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  QuestRewardHarvestAction_StateItemLabel_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  QuestRewardHarvestAction_StateTouchWait_o *v43; // x21
  const MethodInfo *v44; // x2

  if ( (byte_40FD5EB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestRewardHarvestAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestRewardHarvestAction__TypeInfo, v7);
    sub_B16FFC(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v8);
    sub_B16FFC(&QuestRewardHarvestAction_StateNone_TypeInfo, v9);
    sub_B16FFC(&QuestRewardHarvestAction_StatePlay_TypeInfo, v10);
    sub_B16FFC(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v11);
    byte_40FD5EB = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestRewardHarvestAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v13,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    fsm = this->fields.fsm;
    v25 = (QuestRewardHarvestAction_StateNone_o *)sub_B170CC(
                                                    QuestRewardHarvestAction_StateNone_TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
    QuestRewardHarvestAction_StateNone___ctor(v25, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v31 = (QuestRewardHarvestAction_StatePlay_o *)sub_B170CC(
                                                    QuestRewardHarvestAction_StatePlay_TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29,
                                                    v30);
    QuestRewardHarvestAction_StatePlay___ctor(v31, 0LL);
    if ( !v26 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v37 = (QuestRewardHarvestAction_StateItemLabel_o *)sub_B170CC(
                                                         QuestRewardHarvestAction_StateItemLabel_TypeInfo,
                                                         v33,
                                                         v34,
                                                         v35,
                                                         v36);
    QuestRewardHarvestAction_StateItemLabel___ctor(v37, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v43 = (QuestRewardHarvestAction_StateTouchWait_o *)sub_B170CC(
                                                               QuestRewardHarvestAction_StateTouchWait_TypeInfo,
                                                               v39,
                                                               v40,
                                                               v41,
                                                               v42),
          QuestRewardHarvestAction_StateTouchWait___ctor(v43, 0LL),
          !v38) )
    {
LABEL_9:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v43,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v44);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  if ( (byte_40FD5EF & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardHarvestAction__getState__, method);
    byte_40FD5EF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  return fsm->fields.m_state;
}


void __fastcall QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
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

  if ( (byte_40FD5EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v12);
    sub_B16FFC(&Method_QuestRewardHarvestAction__Play_b__12_0__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_40FD5EE = 1;
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
  System_Action___ctor(v22, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(Instance, fade_in_time, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_40FD5F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state);
    byte_40FD5F0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void __fastcall QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
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
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Component_o *v36; // x0
  struct SimpleAnimation_o *v37; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v46; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v51; // x21
  unsigned __int64 v52; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v55; // x22
  UnityEngine_Animation_o *v56; // x22
  UnityEngine_Object_o *clip; // x0
  System_String_o *v58; // x0
  UnityEngine_AnimationState_o *v59; // x0
  UnityEngine_Animation_o *v60; // x21
  UnityEngine_Object_o *v61; // x0
  System_String_o *v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  SimpleAnimation_o *v64; // x21
  UnityEngine_Object_o *v65; // x0
  System_String_o *v66; // x0
  SimpleAnimation_State_o *v67; // x0
  SimpleAnimation_State_c *v68; // x8
  SimpleAnimation_State_o *v69; // x21
  unsigned __int64 v70; // x10
  SimpleAnimation_State_c **v71; // x11
  __int64 v72; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v74; // x0
  UIWidget_o *IsNullOrEmpty; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  struct UISprite_array *itemSprite; // x8
  __int64 v79; // x9
  __int64 v80; // x22
  __int64 v81; // x23
  UnityEngine_Object_o *v82; // x21
  struct UISprite_array *v83; // x8
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v87; // x0
  struct UILabel_array *itemLabel; // x8
  __int64 v89; // x9
  __int64 v90; // x22
  __int64 v91; // x23
  UnityEngine_Object_o *v92; // x21
  struct UILabel_array *v93; // x8
  UnityEngine_Component_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  __int64 v98; // x8
  signed __int64 v99; // x27
  unsigned __int64 v100; // x26
  struct UISprite_array *v101; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v103; // x10
  QuestRewardInfo_o *v104; // x21
  UnityEngine_Object_o *v105; // x22
  struct UILabel_array *v106; // x8
  UnityEngine_Object_o *v107; // x22
  struct UISprite_array *v108; // x8
  UnityEngine_Component_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_Object_o *Component_UIWidget; // x22
  int32_t type; // w8
  System_String_o *age; // x22
  WebViewManager_o *v114; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x0
  bool IsCountableWithPlus; // w0
  __int64 *v117; // x8
  __int64 v118; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v121; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v122; // x0
  WebViewManager_o *v123; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v124; // x0
  System_String_o *v125; // x0
  struct UILabel_array *v126; // x8
  UILabel_o *v127; // x23
  System_String_o *v128; // x24
  Il2CppObject *v129; // x0
  System_String_o *v130; // x0
  struct UILabel_array *v131; // x8
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v135; // x9
  UnityEngine_Object_o *v136; // x22
  struct UnityEngine_GameObject_array *v137; // x8
  UnityEngine_GameObject_o *v138; // x0
  UnityEngine_Component_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *v141; // x21
  UnityEngine_Transform_o *v142; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  UnityEngine_GameObject_o *v151; // x0
  AndroidBackKeyManager_c *v152; // x0
  Il2CppObject *arg1; // [xsp+8h] [xbp-78h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  WarEntity_o *v155; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *v156; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FD5ED & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, infos);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_10878, v23);
    sub_B16FFC(&StringLiteral_23611, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    sub_B16FFC(&StringLiteral_23856, v26);
    byte_40FD5ED = 1;
  }
  v156 = 0LL;
  entity = 0LL;
  v155 = 0LL;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_168;
  v37 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      v36,
                                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v37;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v46 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    monitor = (UnityEngine_Object_o *)v46[1].monitor;
    if ( !monitor )
      goto LABEL_168;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    Item = SimpleAnimation__get_Item(v46, name, 0LL);
    if ( !Item )
      goto LABEL_168;
    klass = Item->klass;
    v51 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v52 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v52;
        p_offset += 2;
        if ( v52 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v51, *(_QWORD *)(p_method + 8), 0.0);
    v64 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    v65 = (UnityEngine_Object_o *)v64[1].monitor;
    if ( !v65 )
      goto LABEL_168;
    v66 = UnityEngine_Object__get_name(v65, 0LL);
    v67 = SimpleAnimation__get_Item(v64, v66, 0LL);
    if ( !v67 )
      goto LABEL_168;
    v68 = v67->klass;
    v69 = v67;
    if ( *(_WORD *)&v67->klass->_2.bitflags1 )
    {
      v70 = 0LL;
      v71 = (SimpleAnimation_State_c **)&v68->_1.interfaceOffsets->offset;
      while ( *(v71 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v70;
        v71 += 2;
        if ( v70 >= *(unsigned __int16 *)&v67->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v72 = (__int64)&v68->vtable[*(_DWORD *)v71 + 6].method;
    }
    else
    {
LABEL_36:
      v72 = sub_AAFEF8(v67, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v72)(v69, *(_QWORD *)(v72 + 8), 0.0);
  }
  else
  {
    v55 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL) )
    {
      v56 = *p_animation;
      if ( !*p_animation )
        goto LABEL_168;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !clip )
        goto LABEL_168;
      v58 = UnityEngine_Object__get_name(clip, 0LL);
      v59 = UnityEngine_Animation__get_Item(v56, v58, 0LL);
      if ( !v59 )
        goto LABEL_168;
      UnityEngine_AnimationState__set_speed(v59, 0.0, 0LL);
      v60 = *p_animation;
      if ( !v60 )
        goto LABEL_168;
      v61 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v60, 0LL);
      if ( !v61 )
        goto LABEL_168;
      v62 = UnityEngine_Object__get_name(v61, 0LL);
      v63 = UnityEngine_Animation__get_Item(v60, v62, 0LL);
      if ( !v63 )
        goto LABEL_168;
      UnityEngine_AnimationState__set_normalizedTime(v63, 0.0, 0LL);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v74 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v74 )
    goto LABEL_168;
  IsNullOrEmpty = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                    v74,
                    (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !IsNullOrEmpty )
    goto LABEL_168;
  *(&IsNullOrEmpty->fields.mAnchorsCached + 5) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite )
  {
    v79 = *(_QWORD *)&itemSprite->max_length;
    if ( (int)v79 >= 1 )
    {
      v80 = (int)v79;
      v81 = 4LL;
      while ( v81 - 4 < (unsigned __int64)itemSprite->max_length )
      {
        v82 = (UnityEngine_Object_o *)*((_QWORD *)&itemSprite->obj.klass + v81);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v83 = this->fields.itemSprite;
          if ( !v83 )
            goto LABEL_168;
          if ( v81 - 4 >= (unsigned __int64)v83->max_length )
            break;
          v84 = (UnityEngine_Component_o *)*((_QWORD *)&v83->obj.klass + v81);
          if ( !v84 )
            goto LABEL_168;
          v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
          Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v85, 0LL);
          if ( !Parent )
            goto LABEL_168;
          v87 = UnityEngine_Component__get_gameObject(Parent, 0LL);
          if ( !v87 )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive(v87, 0, 0LL);
        }
        if ( v81 - 3 >= v80 )
          goto LABEL_59;
        itemSprite = this->fields.itemSprite;
        ++v81;
        if ( !itemSprite )
          goto LABEL_168;
      }
LABEL_154:
      sub_B17100(IsNullOrEmpty, v76, v77);
      sub_B170A0();
    }
  }
LABEL_59:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v89 = *(_QWORD *)&itemLabel->max_length;
    if ( (int)v89 >= 1 )
    {
      v90 = (int)v89;
      v91 = 4LL;
      while ( v91 - 4 < (unsigned __int64)itemLabel->max_length )
      {
        v92 = (UnityEngine_Object_o *)*((_QWORD *)&itemLabel->obj.klass + v91);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          v93 = this->fields.itemLabel;
          if ( !v93 )
            goto LABEL_168;
          if ( v91 - 4 >= (unsigned __int64)v93->max_length )
            goto LABEL_154;
          v94 = (UnityEngine_Component_o *)*((_QWORD *)&v93->obj.klass + v91);
          if ( !v94 )
            goto LABEL_168;
          v95 = UnityEngine_Component__get_gameObject(v94, 0LL);
          v96 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v95, 0LL);
          if ( !v96 )
            goto LABEL_168;
          v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
          if ( !v97 )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive(v97, 0, 0LL);
        }
        if ( v91 - 3 >= v90 )
          goto LABEL_76;
        itemLabel = this->fields.itemLabel;
        ++v91;
        if ( !itemLabel )
          goto LABEL_168;
      }
      goto LABEL_154;
    }
  }
LABEL_76:
  if ( !infos )
LABEL_168:
    sub_B170D4();
  v98 = *(_QWORD *)&infos->max_length;
  if ( (int)v98 >= 1 )
  {
    v99 = (int)v98;
    v100 = 0LL;
    arg1 = (Il2CppObject *)StringLiteral_23611;
    while ( 1 )
    {
      v101 = this->fields.itemSprite;
      if ( !v101 )
        goto LABEL_168;
      max_length = v101->max_length;
      if ( (__int64)v100 < (int)max_length )
      {
        v103 = this->fields.itemLabel;
        if ( !v103 )
          goto LABEL_168;
        if ( (__int64)v100 < (int)v103->max_length )
        {
          if ( v100 >= max_length )
            goto LABEL_154;
          v104 = infos->m_Items[v100];
          v105 = (UnityEngine_Object_o *)v101->m_Items[v100];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Equality(v105, 0LL, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            v106 = this->fields.itemLabel;
            if ( !v106 )
              goto LABEL_168;
            if ( v100 >= v106->max_length )
              goto LABEL_154;
            v107 = (UnityEngine_Object_o *)v106->m_Items[v100];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Equality(v107, 0LL, 0LL);
            if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
            {
              v108 = this->fields.itemSprite;
              if ( !v108 )
                goto LABEL_168;
              if ( v100 >= v108->max_length )
                goto LABEL_154;
              v109 = (UnityEngine_Component_o *)v108->m_Items[v100];
              if ( !v109 )
                goto LABEL_168;
              v110 = UnityEngine_Component__get_gameObject(v109, 0LL);
              Component_UIWidget = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                             v110,
                                                             (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Equality(Component_UIWidget, 0LL, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_152:
      if ( (__int64)++v100 >= v99 )
        goto LABEL_155;
      if ( v100 >= infos->max_length )
        goto LABEL_154;
    }
    if ( !v104 || !Component_UIWidget )
      goto LABEL_168;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      v104->fields.type,
      v104->fields.objectId,
      v104->fields.num,
      0,
      0LL);
    type = v104->fields.type;
    age = (System_String_o *)StringLiteral_1;
    switch ( type )
    {
      case 1:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_168;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &v155,
                v104->fields.objectId,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_129;
        if ( !v155 )
          goto LABEL_168;
        v121 = ServantEntity__GetName((ServantEntity_o *)v155, -1, 0, -1, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_127;
        }
        v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v123 )
          goto LABEL_168;
        v124 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v123,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !v124 )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v124,
                &v156,
                v104->fields.objectId,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
          goto LABEL_129;
        if ( !v156 )
          goto LABEL_168;
        v121 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v156->fields.name;
        v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_127:
          v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v121, 0LL);
          v118 = StringLiteral_23611;
          age = v125;
          goto LABEL_128;
        }
        break;
      case 2:
        v114 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v114 )
          goto LABEL_168;
        v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v114,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !v115 )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v115,
                &entity,
                v104->fields.objectId,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          goto LABEL_129;
        if ( !entity )
          goto LABEL_168;
        age = entity->fields.age;
        IsCountableWithPlus = ItemType__IsCountableWithPlus(entity->fields.bannerId, 0LL);
        v117 = (__int64 *)&StringLiteral_23856;
        if ( !IsCountableWithPlus )
          v117 = &StringLiteral_23611;
        v118 = *v117;
LABEL_128:
        arg1 = (Il2CppObject *)v118;
LABEL_129:
        IsNullOrEmpty = (UIWidget_o *)System_String__IsNullOrEmpty(age, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          v126 = this->fields.itemLabel;
          if ( !v126 )
            goto LABEL_168;
          if ( v100 >= v126->max_length )
            goto LABEL_154;
          v127 = v126->m_Items[v100];
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v128 = LocalizationManager__Get((System_String_o *)StringLiteral_10878, 0LL);
          num = v104->fields.num;
          v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v130 = System_String__Format_43744796(v128, (Il2CppObject *)age, arg1, v129, 0LL);
          if ( !v127 )
            goto LABEL_168;
          UILabel__set_text(v127, v130, 0LL);
          v131 = this->fields.itemLabel;
          if ( !v131 )
            goto LABEL_168;
          if ( v100 >= v131->max_length )
            goto LABEL_154;
          v132 = (UnityEngine_Component_o *)v131->m_Items[v100];
          if ( !v132 )
            goto LABEL_168;
          v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
          if ( !v133 )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive(v133, 0, 0LL);
        }
        imageFrame = this->fields.imageFrame;
        if ( imageFrame )
        {
          v135 = imageFrame->max_length;
          if ( (__int64)v100 < (int)v135 )
          {
            if ( v100 >= v135 )
              goto LABEL_154;
            v136 = (UnityEngine_Object_o *)imageFrame->m_Items[v100];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            IsNullOrEmpty = (UIWidget_o *)UnityEngine_Object__op_Inequality(v136, 0LL, 0LL);
            if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
            {
              v137 = this->fields.imageFrame;
              if ( !v137 )
                goto LABEL_168;
              if ( v100 >= v137->max_length )
                goto LABEL_154;
              v138 = v137->m_Items[v100];
              if ( !v138 )
                goto LABEL_168;
              UnityEngine_GameObject__SetActive(v138, v104->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_152;
      default:
        goto LABEL_129;
    }
    j_il2cpp_runtime_class_init_0(v122);
    goto LABEL_127;
  }
LABEL_155:
  p_screenTouchInfo = (UnityEngine_Component_o **)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    v141 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v142 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v141 )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v141, v142, 0, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (UnityEngine_Component_o *)Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v145,
          v146,
          v147,
          v148,
          v149,
          v150);
        goto LABEL_162;
      }
    }
    goto LABEL_168;
  }
LABEL_162:
  if ( !*p_screenTouchInfo )
    goto LABEL_168;
  v151 = UnityEngine_Component__get_gameObject(*p_screenTouchInfo, 0LL);
  if ( !v151 )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(v151, 0, 0LL);
  v152 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v152 = AndroidBackKeyManager_TypeInfo;
  }
  v152->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_40FD5EC & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestRewardHarvestAction__update__, method);
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40FD5EC = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestRewardHarvestAction__update__);
}


void __fastcall QuestRewardHarvestAction___Play_b__12_0(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardHarvestAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___ctor(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__begin(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x8
  __int64 v27; // x8
  System_Action_o **v28; // x21
  __int64 v29; // x25
  __int64 v30; // x26
  __int64 v31; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x8
  UnityEngine_Object_o *v34; // x23
  __int64 v35; // x8
  UnityEngine_Component_o *v36; // x0
  System_Int32_array **gameObject; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *v44; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  float y; // s9
  float z; // s10
  ManagerConfig_c *v54; // x0
  int WIDTH; // s14
  MoveObject_o *v56; // x23
  float x; // s11
  float v58; // s12
  float v59; // s13
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x24
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FA325 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v10);
    sub_B16FFC(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v11);
    sub_B16FFC(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v12);
    sub_B16FFC(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v13);
    byte_40FA325 = 1;
  }
  v14 = sub_B170CC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 16) = that;
  v21 = v14 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)that, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_33;
  v26 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 64LL);
  if ( !v26 )
    goto LABEL_33;
  v27 = *(_QWORD *)(v26 + 24);
  if ( (int)v27 >= 1 )
  {
    v28 = (System_Action_o **)(v14 + 24);
    v29 = (int)v27;
    v30 = 4LL;
    while ( 1 )
    {
      v31 = sub_B170CC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v22, v23, v24, v25);
      QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *)v31,
        0LL);
      if ( !*(_QWORD *)v21 )
        break;
      v33 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
      if ( !v33 )
        break;
      if ( v30 - 4 >= (unsigned __int64)*(unsigned int *)(v33 + 24) )
        goto LABEL_34;
      v34 = *(UnityEngine_Object_o **)(v33 + 8 * v30);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v32 = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( !v32 )
      {
        if ( !*(_QWORD *)v21 )
          break;
        v35 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
        if ( !v35 )
          break;
        if ( v30 - 4 >= (unsigned __int64)*(unsigned int *)(v35 + 24) )
        {
LABEL_34:
          sub_B17100(v32, v22, v23);
          sub_B170A0();
        }
        v36 = *(UnityEngine_Component_o **)(v35 + 8 * v30);
        if ( !v36 )
          break;
        gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v36, 0LL);
        if ( !v31 )
          break;
        *(_QWORD *)(v31 + 16) = gameObject;
        sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), gameObject, v38, v39, v40, v41, v42, v43);
        v44 = *(UnityEngine_GameObject_o **)(v31 + 16);
        if ( !v44 )
          break;
        UnityEngine_GameObject__SetActive(v44, 1, 0LL);
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      *(UnityEngine_GameObject_o **)(v31 + 16),
                                                      (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v31 + 24) = Component_UIWidget;
        sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), Component_UIWidget, v46, v47, v48, v49, v50, v51);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v31 + 16), 0LL);
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v54 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v54 = ManagerConfig_TypeInfo;
        }
        WIDTH = v54->static_fields->WIDTH;
        v78 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v31 + 16), 0LL);
        v56 = *(MoveObject_o **)(v31 + 24);
        x = v78.fields.x;
        v58 = v78.fields.y;
        v59 = v78.fields.z;
        v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
        System_Action___ctor(
          v64,
          (Il2CppObject *)v31,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v69 = *v28;
        if ( !*v28 )
        {
          v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
          System_Action___ctor(
            v69,
            (Il2CppObject *)v14,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v14 + 24) = v69;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v14 + 24),
            (System_Int32_array **)v69,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
        }
        if ( !v56 )
          break;
        v79.fields.x = (float)WIDTH;
        v79.fields.y = y;
        v79.fields.z = z;
        v80.fields.x = x;
        v80.fields.y = v58;
        v80.fields.z = v59;
        MoveObject__Play(v56, v79, v80, 0.25, v64, v69, 0.0, 17, 0LL);
      }
      v76 = v30 - 3;
      ++v30;
      if ( v76 >= v29 )
        goto LABEL_29;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_29:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(4, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__end(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__update(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  QuestRewardHarvestAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  QuestRewardHarvestAction__SetState(that, 3, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___begin_b__0(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_B170D4();
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateNone___ctor(
        QuestRewardHarvestAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateNone__begin(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateNone__end(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateNone__update(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StatePlay___ctor(
        QuestRewardHarvestAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StatePlay__begin(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
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

  if ( (byte_40FA326 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40FA326 = 1;
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


void __fastcall QuestRewardHarvestAction_StatePlay__end(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StatePlay__update(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
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

  if ( (byte_40FA327 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA327 = 1;
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
        QuestRewardHarvestAction__SetState(that, 2, 0LL);
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


void __fastcall QuestRewardHarvestAction_StateTouchWait___ctor(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateTouchWait__begin(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
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


void __fastcall QuestRewardHarvestAction_StateTouchWait__end(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateTouchWait__update(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
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
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  QuestRewardHarvestAction_o **v20; // x19
  AndroidBackKeyManager_c *v21; // x0
  UnityEngine_Component_o *screenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x22

  if ( (byte_40FA328 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v6);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&CTouch_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v11);
    sub_B16FFC(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v12);
    byte_40FA328 = 1;
  }
  v13 = sub_B170CC(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 16) = that;
  v20 = (QuestRewardHarvestAction_o **)(v13 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)that, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    v21 = AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      v21 = AndroidBackKeyManager_TypeInfo;
    }
    v21->static_fields->ToastEnabled = 0;
    if ( *v20 )
    {
      screenTouchInfo = (UnityEngine_Component_o *)(*v20)->fields.screenTouchInfo;
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
          v29 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v29 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v13,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
            if ( *v20 )
            {
              QuestRewardHarvestAction__SetState(*v20, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardHarvestAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  ActionExtensions__Call(that->fields.endAct, 0LL);
}