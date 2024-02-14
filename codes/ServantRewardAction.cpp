void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct CStateManager_ServantRewardAction__o *mFSM; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  ServantRewardAction_StateNone_o *v29; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  ServantRewardAction_StatePlay_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  ServantRewardAction_StateNumDisplay_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  ServantRewardAction_StateTouchWait_o *v42; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  ServantRewardAction_StateTalk_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  ServantRewardAction_StateDetail_o *v50; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  ServantRewardAction_StateSecretTreasureDevice_o *v54; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  ServantRewardAction_StateEnd_o *v58; // x21
  const MethodInfo *v59; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v62; // x21
  UnityEngine_GameObject_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216A3A & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_ServantRewardAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_ServantRewardAction__add__, v4);
    sub_B0D8A4(&CStateManager_ServantRewardAction__TypeInfo, v5);
    sub_B0D8A4(&CTouch_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&ServantRewardAction_StateDetail_TypeInfo, v10);
    sub_B0D8A4(&ServantRewardAction_StateEnd_TypeInfo, v11);
    sub_B0D8A4(&ServantRewardAction_StateNone_TypeInfo, v12);
    sub_B0D8A4(&ServantRewardAction_StateNumDisplay_TypeInfo, v13);
    sub_B0D8A4(&ServantRewardAction_StatePlay_TypeInfo, v14);
    sub_B0D8A4(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v15);
    sub_B0D8A4(&ServantRewardAction_StateTalk_TypeInfo, v16);
    sub_B0D8A4(&ServantRewardAction_StateTouchWait_TypeInfo, v17);
    byte_4216A3A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_ServantRewardAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v19,
      (QAASpotStateController_IMapSpot_o *)this,
      8,
      (const MethodInfo_2AAF784 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v19;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    mFSM = this->fields.mFSM;
    v29 = (ServantRewardAction_StateNone_o *)sub_B0D974(ServantRewardAction_StateNone_TypeInfo, v27, v28);
    ServantRewardAction_StateNone___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (ServantRewardAction_StatePlay_o *)sub_B0D974(ServantRewardAction_StatePlay_TypeInfo, v32, v33);
    ServantRewardAction_StatePlay___ctor(v34, 0LL);
    if ( !v31 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v38 = (ServantRewardAction_StateNumDisplay_o *)sub_B0D974(ServantRewardAction_StateNumDisplay_TypeInfo, v36, v37);
    ServantRewardAction_StateNumDisplay___ctor(v38, 0LL);
    if ( !v35 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      2,
      (IState_T__o *)v38,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v42 = (ServantRewardAction_StateTouchWait_o *)sub_B0D974(ServantRewardAction_StateTouchWait_TypeInfo, v40, v41);
    ServantRewardAction_StateTouchWait___ctor(v42, 0LL);
    if ( !v39 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      3,
      (IState_T__o *)v42,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v43 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (ServantRewardAction_StateTalk_o *)sub_B0D974(ServantRewardAction_StateTalk_TypeInfo, v44, v45);
    ServantRewardAction_StateTalk___ctor(v46, 0LL);
    if ( !v43 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v43,
      4,
      (IState_T__o *)v46,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v50 = (ServantRewardAction_StateDetail_o *)sub_B0D974(ServantRewardAction_StateDetail_TypeInfo, v48, v49);
    ServantRewardAction_StateDetail___ctor(v50, 0LL);
    if ( !v47 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v47,
      5,
      (IState_T__o *)v50,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v51 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v54 = (ServantRewardAction_StateSecretTreasureDevice_o *)sub_B0D974(
                                                               ServantRewardAction_StateSecretTreasureDevice_TypeInfo,
                                                               v52,
                                                               v53);
    ServantRewardAction_StateSecretTreasureDevice___ctor(v54, 0LL);
    if ( !v51 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v51,
      6,
      (IState_T__o *)v54,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    v55 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v58 = (ServantRewardAction_StateEnd_o *)sub_B0D974(ServantRewardAction_StateEnd_TypeInfo, v56, v57);
    ServantRewardAction_StateEnd___ctor(v58, 0LL);
    if ( !v55 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v55,
      7,
      (IState_T__o *)v58,
      (const MethodInfo_2AAF850 *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v59);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v62 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v63 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v62,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v63, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v63, zero, 0LL);
        if ( v63 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v63,
                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v63;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
            goto LABEL_28;
          }
        }
LABEL_32:
        sub_B0D97C(ComponentInChildren_Dropdown_DropdownItem);
      }
    }
  }
LABEL_28:
  this->fields._PresentDialogMessageId_k__BackingField = 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
}


int32_t __fastcall ServantRewardAction__GetState(ServantRewardAction_o *this, const MethodInfo *method)
{
  ServantRewardAction_o *v2; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4216A41 & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_B0D8A4(&Method_CStateManager_ServantRewardAction__getState__, method);
    byte_4216A41 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
  return mFSM->fields.m_state;
}


void __fastcall ServantRewardAction__Play(
        ServantRewardAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = 0;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantRewardAction__Play_28241248(
        ServantRewardAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = is_from_treasure_box;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)end_act,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_ServantRewardAction__o *mFSM; // x0

  if ( (byte_4216A42 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_ServantRewardAction__setState__, *(_QWORD *)&state);
    byte_4216A42 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_ServantRewardAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  int v19; // w24
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2

  if ( (byte_4216A3D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4216A3D = 1;
  }
  if ( isDoEffect )
    v19 = is_svt_new | play_flag | 0x10;
  else
    v19 = is_svt_new | play_flag;
  if ( user_svt_id )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               user_svt_id,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_28238716(
    this,
    servant_id,
    Entity,
    limit_count,
    svt_num,
    v19,
    (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x21
  const MethodInfo *v7; // x3
  int v8; // w2

  if ( !qri )
    sub_B0D97C(this);
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_28240476(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_28240452(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v6; // w2

  if ( isDoEffect )
    v6 = is_svt_new | play_flag | 0x10;
  else
    v6 = is_svt_new | play_flag;
  ServantRewardAction__SetupCommandCode_28240476(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode_28240476(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x23
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserServantEntity_o *Entity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct SimpleAnimation_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x21
  UnityEngine_GameObject_o *mCardParent; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  System_Action_o *v58; // x23
  struct UICharaGraphTexture_o *TexturePrefab_24041508; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_4216A40 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, user_command_code_id);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4216A40 = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v15) == 7 )
  {
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_23;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v20, v21, v22, v23, v24, v25);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity,
          (System_Int32_array **)Entity,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v33, v34, v35, v36, v37, v38);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( Instance )
        {
          ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                             Instance,
                                                                             (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = ComponentInChildren_UIWidget;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.mAnimation,
            (System_Int32_array **)ComponentInChildren_UIWidget,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
          if ( Instance )
          {
            v46 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                Instance,
                                                (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = v46;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
              (System_Int32_array **)v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                      Instance,
                                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
              if ( Instance )
              {
                BYTE5(Instance[4].klass) = 1;
                Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  this->fields.mIsDoneLoad = 0;
                  ServantRewardAction__SetupScreenTouchInfo(this, v53);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v58 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v56, v57);
                  System_Action___ctor(
                    v58,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_24041508 = CharaGraphManager__CreateTexturePrefab_24041508(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v58,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_24041508;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                    (System_Int32_array **)TexturePrefab_24041508,
                    v60,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
}


int32_t __fastcall ServantRewardAction__SetupPlayFlag(
        ServantRewardAction_o *this,
        bool isSvtNew,
        bool isDoEffect,
        int32_t playFlag,
        const MethodInfo *method)
{
  if ( isDoEffect )
    return isSvtNew | playFlag | 0x10;
  else
    return isSvtNew | playFlag;
}


void __fastcall ServantRewardAction__SetupScreenTouchInfo(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantConfConponent_o *p_mScreenTouchInfo; // x19
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  UnityEngine_Object_o *mTouchParent; // x21
  bool v8; // w22
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  int v12; // s0
  UnityEngine_GameObject_o *v13; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4216A3C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4216A3C = 1;
  }
  p_mScreenTouchInfo = (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    mTouchParent = (UnityEngine_Object_o *)this->fields.mTouchParent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Equality(mTouchParent, 0LL, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v8 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_21;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
      v12 = -1014726656;
      v13 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL), !Instance) )
      {
LABEL_21:
        sub_B0D97C(transform);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
      v13 = ScreeenTouchInfo;
      v12 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v12, 0LL);
    if ( !v13 )
      goto LABEL_21;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v13,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B0D840(p_mScreenTouchInfo, Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
  }
  transform = (UnityEngine_Transform_o *)p_mScreenTouchInfo->klass;
  if ( !p_mScreenTouchInfo->klass )
    goto LABEL_21;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28238716(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
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
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  void *servantGetObj; // x0
  UnityEngine_Object_o *gameObject; // x26
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct SimpleAnimation_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x1
  int32_t v62; // w8
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v66; // x21
  System_String_o *v67; // x22
  Il2CppObject *v68; // x0
  struct UnityEngine_Animation_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct SimpleAnimation_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v86; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t servantNum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4216A3F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&servant_id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_ServantRewardAction__Setup_b__52_0__, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StringLiteral_6850/*"GACHA_EFFECT_SVT_NUM"*/, v23);
    byte_4216A3F = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v24) == 7) )
  {
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      servantGetObj = *p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_44;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantGetObj,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v35, v36, v37, v38, v39, v40);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity, 0LL, v27, v28, v29, v30, v31, v32);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
      (System_Int32_array **)usrSvtEntity,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)servantGetObj,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = Component_srcLineSprite;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.mAnimation,
        (System_Int32_array **)Component_srcLineSprite,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v54 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)servantGetObj,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = v54;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 101) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
              servantGetObj = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v62 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v62;
                    ServantRewardAction__SetupScreenTouchInfo(this, v61);
                    servantGetObj = this->fields.numDisplayObj;
                    if ( servantGetObj )
                    {
                      servantGetObj = UnityEngine_GameObject__get_gameObject(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        0LL);
                      if ( servantGetObj )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
                        if ( this->fields.servantNum < 2 )
                          goto LABEL_42;
                        numText = (UnityEngine_Object_o *)this->fields.numText;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        if ( !UnityEngine_Object__op_Inequality(numText, 0LL, 0LL) )
                          goto LABEL_42;
                        servantGetObj = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_42:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v86 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
                              System_Action___ctor(
                                v86,
                                (Il2CppObject *)this,
                                Method_ServantRewardAction__Setup_b__52_0__,
                                0LL);
                              TexturePrefab = CharaGraphManager__CreateTexturePrefab(
                                                mCardParent,
                                                mServantId,
                                                mLimitCount,
                                                0,
                                                1,
                                                0,
                                                v86,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                                (System_Int32_array **)TexturePrefab,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                v93);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v66 = this->fields.numText;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_6850/*"GACHA_EFFECT_SVT_NUM"*/, 0LL);
                            servantNum = this->fields.servantNum;
                            v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            servantGetObj = System_String__Format(v67, v68, 0LL);
                            if ( v66 )
                            {
                              UILabel__set_text(v66, (System_String_o *)servantGetObj, 0LL);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v69 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)servantGetObj,
                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = v69;
                                sub_B0D840(
                                  (BattleServantConfConponent_o *)&this->fields.numDisplayAnimation,
                                  (System_Int32_array **)v69,
                                  v70,
                                  v71,
                                  v72,
                                  v73,
                                  v74,
                                  v75);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v76 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = v76;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)&this->fields.numDisplaySimpleAnimation,
                                    (System_Int32_array **)v76,
                                    v77,
                                    v78,
                                    v79,
                                    v80,
                                    v81,
                                    v82);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
                                    if ( servantGetObj )
                                    {
                                      *((_BYTE *)servantGetObj + 101) = 1;
                                      goto LABEL_42;
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
          }
        }
      }
    }
LABEL_44:
    sub_B0D97C(servantGetObj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28239904(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v9; // w5

  if ( isDoEffect )
    v9 = is_svt_new | play_flag | 0x10;
  else
    v9 = is_svt_new | play_flag;
  ServantRewardAction__Setup_28238716(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28239928(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2

  if ( (byte_4216A3E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4216A3E = 1;
  }
  if ( user_svt_id )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               user_svt_id,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_28238716(this, servant_id, Entity, limit_count, svt_num, play_flag, method);
}


void __fastcall ServantRewardAction__Setup_28240232(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x21
  int32_t limitCount; // w22
  int32_t objectId; // w23
  int32_t num; // w24
  bool isNew; // w25
  bool Eff; // w0
  const MethodInfo *v12; // [xsp+0h] [xbp-50h]

  if ( !qri )
    sub_B0D97C(this);
  userSvtId = qri->fields.userSvtId;
  limitCount = qri->fields.limitCount;
  objectId = qri->fields.objectId;
  num = qri->fields.num;
  isNew = qri->fields.isNew;
  Eff = QuestRewardInfo__isDoGetEff(qri, 0LL);
  ServantRewardAction__Setup(this, objectId, userSvtId, limitCount, num, isNew, Eff, play_flag, v12);
}


void __fastcall ServantRewardAction__Update(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CStateManager_ServantRewardAction__o *mFSM; // x0
  char mPlayFlag; // w8
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  float mFadeInTime; // s8
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x0
  ServantRewardAction___c_c *v18; // x0
  struct ServantRewardAction___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v21; // x22
  struct ServantRewardAction___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4216A3B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CStateManager_ServantRewardAction__update__, v4);
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_ServantRewardAction___c__Update_b__46_0__, v7);
    sub_B0D8A4(&ServantRewardAction___c_TypeInfo, v8);
    byte_4216A3B = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v16 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v17 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v17 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v17->static_fields->DEFAULT_FADE_TIME;
      }
      v18 = ServantRewardAction___c_TypeInfo;
      if ( (BYTE3(ServantRewardAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v18 = ServantRewardAction___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__46_0 = static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
        System_Action___ctor(_9__46_0, v21, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        v22 = ServantRewardAction___c_TypeInfo->static_fields;
        v22->__9__46_0 = _9__46_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v22->__9__46_0,
          (System_Int32_array **)_9__46_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( !v16 )
        sub_B0D97C(v18);
      CommonUI__maskFadein(v16, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v9);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216A44 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216A44 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalScale(v4, zero, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(gameObject);
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
  }
}


void __fastcall ServantRewardAction___Setup_b__52_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216A43 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216A43 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalScale(v4, zero, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
    }
  }
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)this->fields.numDisplaySimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplaySimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_29:
    sub_B0D97C(gameObject);
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplayAnimation;
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
  }
}


int32_t __fastcall ServantRewardAction__get_PresentDialogMessageId(
        ServantRewardAction_o *this,
        const MethodInfo *method)
{
  return this->fields._PresentDialogMessageId_k__BackingField;
}


void __fastcall ServantRewardAction__set_PresentDialogMessageId(
        ServantRewardAction_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PresentDialogMessageId_k__BackingField = value;
}


void __fastcall ServantRewardAction_StateDetail___ctor(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___begin_b__1_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  int typeMetadataHandle_low; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppClass *v11; // x8
  CommonUI_o *v12; // x20
  UserCommandCodeEntity_o *interopData; // x21
  __int64 v14; // x22
  __int64 v15; // x9
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x23
  UserServantEntity_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x9
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_421224C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_ServantRewardAction_StateDetail_detailEnd__, v5);
    this = (ServantRewardAction_StateDetail_o *)sub_B0D8A4(&Method_ServantRewardAction_StateDetail_detailOpen__, v6);
    byte_421224C = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_10;
  typeMetadataHandle_low = LOBYTE(klass->_1.typeMetadataHandle);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v2[1].klass;
  if ( !v11 )
    goto LABEL_10;
  v12 = (CommonUI_o *)this;
  if ( typeMetadataHandle_low )
  {
    interopData = (UserCommandCodeEntity_o *)v11->_1.interopData;
    v14 = sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    v15 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v14 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v14 + 16) = v15;
    *(_QWORD *)(v14 + 32) = v2;
    sub_B0D840(v14 + 32, v2);
    v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v18, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v12 )
    {
      CommonUI__OpenServantStatusDialog_17030008(
        v12,
        6,
        interopData,
        (ServantStatusDialog_EndDelegate_o *)v14,
        v18,
        0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(this);
  }
  v19 = *(UserServantEntity_o **)&v11->_2.static_fields_size;
  v20 = sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
  v21 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v20 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v20 + 16) = v21;
  *(_QWORD *)(v20 + 32) = v2;
  sub_B0D840(v20 + 32, v2);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_17026688(v12, 6, v19, (ServantStatusDialog_EndDelegate_o *)v20, v24, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_421224D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v5);
    byte_421224D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421224F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421224F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421224E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421224E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantRewardAction_o *that; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4212249 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, servantrewardAction);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v7);
    byte_4212249 = 1;
  }
  this->fields.that = servantrewardAction;
  sub_B0D840(&this->fields, servantrewardAction);
  that = this->fields.that;
  if ( !that )
    goto LABEL_11;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(that);
  }
  ServantRewardAction__SetState(that, 7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateDetail__detailEnd(
        ServantRewardAction_StateDetail_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  System_Action_o *v15; // x20
  Il2CppClass *v16; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_421224B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v6);
    this = (ServantRewardAction_StateDetail_o *)sub_B0D8A4(
                                                  &Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__,
                                                  v7);
    byte_421224B = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_12;
  if ( ((__int64)klass->_1.castClass & 1) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v14, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(this);
  }
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v15, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v16 = v3[1].klass;
  if ( !v16 )
    goto LABEL_12;
  EventTutorialMaster__CheckTutorial(-1, 11, v15, (int32_t)v16->_1.element_class, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_421224A & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_421224A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__end(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateDetail__update(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateEnd___ctor(ServantRewardAction_StateEnd_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateEnd__begin(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantRewardAction_StateEnd___c__DisplayClass0_0_o *v10; // x19
  MissionNotifyManager_o *v11; // x0
  ServantRewardAction_StateEnd___c__DisplayClass0_0_Fields *p_fields; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  AvalonSceneManager_c *v18; // x8

  if ( (byte_4212250 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B0D8A4(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v8);
    sub_B0D8A4(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v9);
    byte_4212250 = 1;
  }
  v10 = (ServantRewardAction_StateEnd___c__DisplayClass0_0_o *)sub_B0D974(
                                                                 ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo,
                                                                 that,
                                                                 method);
  ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_17;
  v10->fields.that = that;
  p_fields = &v10->fields;
  sub_B0D840(&v10->fields, that);
  if ( !v10->fields.that )
    goto LABEL_17;
  if ( (v10->fields.that->fields.mPlayFlag & 4) == 0 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v11 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v11 )
    {
      MissionNotifyManager__EndPause(v11, 0LL);
      if ( p_fields->that )
      {
        ActionExtensions__Call(p_fields->that->fields.mEndAct, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B0D97C(v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall ServantRewardAction_StateEnd__end(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateEnd__update(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B0D97C(this);
  ServantRewardAction__SetState(that, 0, 0LL);
}


void __fastcall ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateEnd___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  struct ServantRewardAction_o *that; // x8

  if ( (byte_4211FB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4211FB1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 || (MissionNotifyManager__EndPause(v4, 0LL), (that = this->fields.that) == 0LL) )
    sub_B0D97C(v4);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall ServantRewardAction_StateNone___ctor(ServantRewardAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateNone__begin(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNone__end(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNone__update(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNumDisplay___ctor(
        ServantRewardAction_StateNumDisplay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateNumDisplay__begin(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateNumDisplay_o *v4; // x19
  __int64 v5; // x8
  UnityEngine_AnimationClip_o *v6; // x21
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  struct SimpleAnimation_o *v8; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  struct SimpleAnimation_State_o *Item; // x1
  void *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v15; // x21
  System_String_o *v16; // x0
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0

  v4 = this;
  if ( (byte_4212251 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    byte_4212251 = 1;
  }
  if ( !that )
    goto LABEL_29;
  this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayObj;
  v5 = 208LL;
  if ( that->fields.servantNum >= 10 )
    v5 = 216LL;
  if ( !this )
    goto LABEL_29;
  v6 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplaySimpleAnimation;
    if ( this )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v6, 0LL);
      v8 = that->fields.numDisplaySimpleAnimation;
      if ( v8 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v8[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_50482404(v8, name, 0LL);
          v10 = that->fields.numDisplaySimpleAnimation;
          if ( v10 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v10[1].monitor;
            if ( this )
            {
              v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              Item = SimpleAnimation__get_Item(v10, v11, 0LL);
              v4->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = &v4->fields.mSimpleAnimState;
LABEL_27:
              sub_B0D840(p_mSimpleAnimState, Item);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayAnimation;
    if ( this )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v6, 0LL);
      v15 = that->fields.numDisplayAnimation;
      if ( v15 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0LL);
        if ( this )
        {
          v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_50564840(v15, v16, 0LL);
          v17 = that->fields.numDisplayAnimation;
          if ( v17 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v17, 0LL);
            if ( this )
            {
              v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
              v4->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = &v4->fields;
              goto LABEL_27;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B0D97C(this);
  }
}


void __fastcall ServantRewardAction_StateNumDisplay__end(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNumDisplay__update(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateNumDisplay_o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  v4 = this;
  if ( (byte_4212252 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, that);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4212252 = 1;
  }
  if ( !that )
    goto LABEL_45;
  if ( that->fields.isSkip )
    goto LABEL_9;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
LABEL_9:
    this = (ServantRewardAction_StateNumDisplay_o *)v4->fields.mAnimState;
    if ( !this )
      goto LABEL_45;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_45;
    this = (ServantRewardAction_StateNumDisplay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_45;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      goto LABEL_27;
LABEL_26:
    that->fields.isPlayFinish = 1;
    goto LABEL_27;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_45;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_45;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( !UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      goto LABEL_26;
  }
LABEL_27:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = that->fields.numDisplaySimpleAnimation;
    if ( v13 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v13[1].monitor;
      if ( this )
      {
        v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( SimpleAnimation__IsPlaying(v13, v14, 0LL) )
          return;
LABEL_42:
        if ( that->fields.isPlayFinish )
          ServantRewardAction__SetState(that, 3, 0LL);
        return;
      }
    }
    goto LABEL_45;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = that->fields.numDisplayAnimation;
    if ( v16 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0LL);
      if ( this )
      {
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v16, v17, 0LL) )
          return;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_B0D97C(this);
  }
}


void __fastcall ServantRewardAction_StatePlay___ctor(ServantRewardAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StatePlay__begin(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  MissionNotifyManager_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v9; // x9
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  UnityEngine_Object_o *mSimpleAnimation; // x22
  struct SimpleAnimation_o *v12; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  struct SimpleAnimation_State_o *Item; // x1
  void *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v19; // x21
  System_String_o *v20; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  int32_t mSvtType; // w8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212253 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    byte_4212253 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  monitor = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !monitor )
    goto LABEL_39;
  MissionNotifyManager__StartPause(monitor, 0LL);
  if ( !that )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(gameObject, one, 0LL);
  v9 = 128LL;
  if ( that->fields.mIsCommandCode )
    v9 = 152LL;
  mAnimCommandCodeNew = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v9);
  if ( (that->fields.mPlayFlag & 0x10) != 0 )
  {
    if ( that->fields.mIsCommandCode )
    {
      mAnimCommandCodeNew = that->fields.mAnimCommandCodeNew;
    }
    else
    {
      mSvtType = that->fields.mSvtType;
      if ( mSvtType == 6 )
      {
        mAnimCommandCodeNew = that->fields.mAnimSvtEquipNew;
      }
      else if ( mSvtType == 1 )
      {
        mAnimCommandCodeNew = that->fields.mAnimSvtNew;
      }
    }
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    monitor = (MissionNotifyManager_o *)that->fields.mSimpleAnimation;
    if ( monitor )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)monitor, mAnimCommandCodeNew, 0LL);
      v12 = that->fields.mSimpleAnimation;
      if ( v12 )
      {
        monitor = (MissionNotifyManager_o *)v12[1].monitor;
        if ( monitor )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
          monitor = (MissionNotifyManager_o *)SimpleAnimation__Play_50482404(v12, name, 0LL);
          v14 = that->fields.mSimpleAnimation;
          if ( v14 )
          {
            monitor = (MissionNotifyManager_o *)v14[1].monitor;
            if ( monitor )
            {
              v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
              Item = SimpleAnimation__get_Item(v14, v15, 0LL);
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = &this->fields.mSimpleAnimState;
LABEL_33:
              sub_B0D840(p_mSimpleAnimState, Item);
              return;
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    monitor = (MissionNotifyManager_o *)that->fields.mAnimation;
    if ( monitor )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)monitor, mAnimCommandCodeNew, 0LL);
      v19 = that->fields.mAnimation;
      if ( v19 )
      {
        monitor = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( monitor )
        {
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
          monitor = (MissionNotifyManager_o *)UnityEngine_Animation__Play_50564840(v19, v20, 0LL);
          v21 = that->fields.mAnimation;
          if ( v21 )
          {
            monitor = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v21, 0LL);
            if ( monitor )
            {
              v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL);
              this->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = &this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_39:
    sub_B0D97C(monitor);
  }
}


void __fastcall ServantRewardAction_StatePlay__end(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StatePlay__update(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_AnimationState_o *isTouchPush; // x0
  float totalTime; // s8
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v13; // x20
  System_String_o *v14; // x0
  int32_t v15; // w1

  if ( (byte_4212254 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, that);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4212254 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_36;
    that->fields.isSkip = 1;
    isTouchPush = this->fields.mAnimState;
    if ( !isTouchPush )
      goto LABEL_36;
    UnityEngine_AnimationState__set_normalizedTime(isTouchPush, 1.0, 0LL);
  }
  totalTime = this->fields.totalTime;
  this->fields.totalTime = totalTime + RealTime__get_deltaTime(0LL);
  if ( !that )
    goto LABEL_36;
  if ( ServantRewardAction__GetState(that, 0LL) == 1 && that->fields.isDispNum )
  {
    numPlayStartSec = that->fields.numPlayStartSec;
    if ( numPlayStartSec != 0.0 && numPlayStartSec <= this->fields.totalTime )
      ServantRewardAction__SetState(that, 2, 0LL);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v10 = that->fields.mSimpleAnimation;
    if ( v10 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v10[1].monitor;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( SimpleAnimation__IsPlaying(v10, name, 0LL) )
          return;
LABEL_32:
        if ( that->fields.isDispNum )
          v15 = 2;
        else
          v15 = 3;
        ServantRewardAction__SetState(that, v15, 0LL);
        return;
      }
    }
    goto LABEL_36;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v13 = that->fields.mAnimation;
    if ( v13 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( isTouchPush )
      {
        v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v13, v14, 0LL) )
          return;
        goto LABEL_32;
      }
    }
LABEL_36:
    sub_B0D97C(isTouchPush);
  }
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___ctor(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__begin(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4212255 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v6);
    sub_B0D8A4(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v7);
    byte_4212255 = 1;
  }
  v8 = (ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *)sub_B0D974(
                                                                                 ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo,
                                                                                 that,
                                                                                 method);
  ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.that = that;
  sub_B0D840(&v8->fields, that);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__end(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__update(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v11; // x20

  if ( (byte_4211FB2 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v4);
    byte_4211FB2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B0D974(
                                                              CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                              v6,
                                                              v7);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v11 )
LABEL_8:
    sub_B0D97C(Instance);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v11, mServantId, _9__1, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B0D97C(0LL);
  ServantRewardAction__SetState(that, 5, 0LL);
}


void __fastcall ServantRewardAction_StateTalk___ctor(ServantRewardAction_StateTalk_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateTalk__begin(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
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
  ServantRewardAction_StateTalk___c__DisplayClass0_0_o *v12; // x20
  DataManager_o *Instance; // x0
  ServantRewardAction_StateTalk___c__DisplayClass0_0_Fields *p_fields; // x19
  struct ServantRewardAction_o *v15; // x8
  int32_t mServantId; // w0
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v18; // x22
  int32_t v19; // w1
  ServantVoiceEntity_o *v20; // x0
  ServantVoiceEntity_o *v21; // x23
  System_String_o *SummonScriptId; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w22
  System_Action_o *v26; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212256 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, rewardAction);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v10);
    sub_B0D8A4(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v11);
    byte_4212256 = 1;
  }
  entity = 0LL;
  v12 = (ServantRewardAction_StateTalk___c__DisplayClass0_0_o *)sub_B0D974(
                                                                  ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo,
                                                                  rewardAction,
                                                                  method);
  ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  v12->fields.rewardAction = rewardAction;
  p_fields = &v12->fields;
  sub_B0D840(&v12->fields, rewardAction);
  v15 = v12->fields.rewardAction;
  if ( !v15 )
    goto LABEL_33;
  mServantId = v15->fields.mServantId;
  v12->fields.svtId = mServantId;
  v12->fields.limitCount = v15->fields.mLimitCount;
  v12->fields.isEventSvtGet = (v15->fields.mPlayFlag & 8) != 0;
  v12->fields.checkQuestOpen = v15->fields.mPlayFlag & 1;
  v12->fields.isEventJoinSkip = (v15->fields.mPlayFlag & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(mServantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !p_fields->rewardAction )
    goto LABEL_33;
  v18 = (ServantVoiceMaster_o *)Instance;
  Instance = (DataManager_o *)p_fields->rewardAction->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  if ( !v18 )
    goto LABEL_33;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v19 = 4;
  else
    v19 = 3;
  v20 = ServantVoiceMaster__getEntity(v18, v19, SvtVoiceId, v12->fields.limitCount, 0LL);
  v12->fields.summonScriptId = 0LL;
  v21 = v20;
  sub_B0D840(&v12->fields.summonScriptId, 0LL);
  if ( v21 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v21, SvtVoiceId, 0LL);
    v12->fields.summonScriptId = SummonScriptId;
    sub_B0D840(&v12->fields.summonScriptId, SummonScriptId);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         v12->fields.svtId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  v12->fields.svtId,
                                  0LL);
    if ( !entity )
      goto LABEL_33;
    v25 = (Instance != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v25 = 0;
  }
  v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v25 )
  {
    if ( p_fields->rewardAction )
    {
      Instance = (DataManager_o *)p_fields->rewardAction->fields.mUICharaGraph;
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v26, 0LL);
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_B0D97C(Instance);
  }
  ActionExtensions__Call(v26, 0LL);
LABEL_31:
  if ( !p_fields->rewardAction )
    goto LABEL_33;
  p_fields->rewardAction->fields._PresentDialogMessageId_k__BackingField = 0;
}


void __fastcall ServantRewardAction_StateTalk__end(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTalk__update(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v11; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27

  if ( (byte_4211FB3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v3);
    sub_B0D8A4(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v4);
    byte_4211FB3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v11 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v11 )
LABEL_8:
    sub_B0D97C(Instance);
  ScriptManager__PlayGacha_17136220(
    v11,
    userSvtEntity,
    svtId,
    limitCount,
    isEventSvtGet,
    checkQuestOpen,
    _9__1,
    this->fields.isEventJoinSkip,
    rewardAction->fields._PresentDialogMessageId_k__BackingField,
    this->fields.summonScriptId,
    0LL);
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  ServantRewardAction_o *rewardAction; // x0

  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    sub_B0D97C(0LL);
  ServantRewardAction__SetState(rewardAction, 6, 0LL);
}


void __fastcall ServantRewardAction_StateTouchWait___ctor(
        ServantRewardAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateTouchWait___begin_b__1_0(
        ServantRewardAction_StateTouchWait_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212259 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4212259 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isWaitCloseDialog = 0;
}


void __fastcall ServantRewardAction_StateTouchWait__begin(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateTouchWait_o *v4; // x19
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
  System_String_o *v16; // x20
  EventServantEntity_o *EventServant_21277908; // x0
  EventServantEntity_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  CommonUI_o *Instance; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  NotificationDialog_ClickDelegate_o *v28; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_int__o v30; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o v33; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+90h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v37; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v40; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  v4 = this;
  if ( (byte_4212257 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, that);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v8);
    sub_B0D8A4(&Method_System_Nullable_int___ctor__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v12);
    sub_B0D8A4(&StringLiteral_12503/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    this = (ServantRewardAction_StateTouchWait_o *)sub_B0D8A4(&StringLiteral_12502/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v15);
    byte_4212257 = 1;
  }
  entity = 0LL;
  v4->fields.isWaitCloseDialog = 0;
  if ( !that )
    goto LABEL_28;
  this = (ServantRewardAction_StateTouchWait_o *)that->fields.mScreenTouchInfo;
  if ( !this )
    goto LABEL_28;
  this = (ServantRewardAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( that->fields.mSvtType == 12 && (that->fields.mPlayFlag & 0x10) != 0 )
  {
    this = (ServantRewardAction_StateTouchWait_o *)that->fields.userSvtEntity;
    if ( !this )
      goto LABEL_28;
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    EventServant_21277908 = UserServantEntity__getEventServant_21277908((UserServantEntity_o *)this, 1, 0LL);
    if ( EventServant_21277908
      && (v18 = EventServant_21277908,
          v19 = EventServantEntity__GetGetMessage(EventServant_21277908, 0LL),
          !System_String__IsNullOrEmpty(v19, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v18, 0LL);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_21;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12502/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
                                                       0LL);
      if ( !entity )
        goto LABEL_28;
      v20 = (System_String_o *)this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0LL);
      Message = System_String__Format(v20, Name, 0LL);
    }
    v16 = Message;
LABEL_21:
    if ( System_String__IsNullOrEmpty(v16, 0LL) )
      return;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0LL);
    v4->fields.isWaitCloseDialog = 1;
    v24 = v23;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v26, v27);
    NotificationDialog_ClickDelegate___ctor(
      v28,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    v37 = (System_Nullable_float__o)&v33;
    v33 = 0LL;
    System_Nullable_float____ctor(v37, 8.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_297F978 *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    v40 = (System_Nullable_int__o)&v30;
    v30 = 0LL;
    System_Nullable_int____ctor(v40, 217, (const MethodInfo_297F978 *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_297F978 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_17019096(
        Instance,
        v24,
        v16,
        v28,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v33,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v30,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_28:
    sub_B0D97C(this);
  }
}


void __fastcall ServantRewardAction_StateTouchWait__end(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTouchWait__update(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *isTouchPush; // x0
  int32_t v8; // w1
  int32_t mSvtType; // w8

  if ( (byte_4212258 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, that);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    byte_4212258 = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
    if ( ((unsigned __int8)isTouchPush & 1) != 0 )
    {
      if ( that )
      {
        isTouchPush = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo;
        if ( isTouchPush )
        {
          isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
          if ( isTouchPush )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
            if ( that->fields.mIsCommandCode )
            {
LABEL_12:
              v8 = 5;
LABEL_13:
              ServantRewardAction__SetState(that, v8, 0LL);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v8 = 7;
                goto LABEL_13;
              }
              if ( (that->fields.mPlayFlag & 0x10) == 0 )
                goto LABEL_12;
              goto LABEL_24;
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_12;
LABEL_24:
              v8 = 4;
              goto LABEL_13;
            }
          }
        }
      }
      sub_B0D97C(isTouchPush);
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantRewardAction___c_StaticFields *static_fields; // x0

  if ( (byte_4212248 & 1) == 0 )
  {
    sub_B0D8A4(&ServantRewardAction___c_TypeInfo, v1);
    byte_4212248 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantRewardAction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantRewardAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantRewardAction___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}