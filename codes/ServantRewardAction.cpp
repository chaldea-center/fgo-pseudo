void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct CStateManager_ServantRewardAction__o *mFSM; // x21
  ServantRewardAction_StateNone_o *v56; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v58; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v59; // x21
  ServantRewardAction_StatePlay_o *v60; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v61; // x21
  ServantRewardAction_StateNumDisplay_o *v62; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v63; // x21
  ServantRewardAction_StateTouchWait_o *v64; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v65; // x21
  ServantRewardAction_StateTalk_o *v66; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v67; // x21
  ServantRewardAction_StateDetail_o *v68; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v69; // x21
  ServantRewardAction_StateSecretTreasureDevice_o *v70; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v71; // x20
  ServantRewardAction_StateEnd_o *v72; // x21
  const MethodInfo *v73; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v76; // x21
  UnityEngine_GameObject_o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAA5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_ServantRewardAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_ServantRewardAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_ServantRewardAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CTouch_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantRewardAction_StateDetail_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantRewardAction_StateEnd_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ServantRewardAction_StateNone_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ServantRewardAction_StateNumDisplay_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&ServantRewardAction_StatePlay_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&ServantRewardAction_StateTalk_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&ServantRewardAction_StateTouchWait_TypeInfo, v44, v45, v46);
    byte_42EAA5A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_ServantRewardAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v48,
      (QAASpotStateController_IMapSpot_o *)this,
      8,
      (const MethodInfo_2BB2630 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v48;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    mFSM = this->fields.mFSM;
    v56 = (ServantRewardAction_StateNone_o *)sub_B5D694(ServantRewardAction_StateNone_TypeInfo);
    ServantRewardAction_StateNone___ctor(v56, 0LL);
    if ( !mFSM )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v56,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v59 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v60 = (ServantRewardAction_StatePlay_o *)sub_B5D694(ServantRewardAction_StatePlay_TypeInfo);
    ServantRewardAction_StatePlay___ctor(v60, 0LL);
    if ( !v59 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v59,
      1,
      (IState_T__o *)v60,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v61 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v62 = (ServantRewardAction_StateNumDisplay_o *)sub_B5D694(ServantRewardAction_StateNumDisplay_TypeInfo);
    ServantRewardAction_StateNumDisplay___ctor(v62, 0LL);
    if ( !v61 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v61,
      2,
      (IState_T__o *)v62,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v63 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v64 = (ServantRewardAction_StateTouchWait_o *)sub_B5D694(ServantRewardAction_StateTouchWait_TypeInfo);
    ServantRewardAction_StateTouchWait___ctor(v64, 0LL);
    if ( !v63 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v63,
      3,
      (IState_T__o *)v64,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v65 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v66 = (ServantRewardAction_StateTalk_o *)sub_B5D694(ServantRewardAction_StateTalk_TypeInfo);
    ServantRewardAction_StateTalk___ctor(v66, 0LL);
    if ( !v65 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v65,
      4,
      (IState_T__o *)v66,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v67 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v68 = (ServantRewardAction_StateDetail_o *)sub_B5D694(ServantRewardAction_StateDetail_TypeInfo);
    ServantRewardAction_StateDetail___ctor(v68, 0LL);
    if ( !v67 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v67,
      5,
      (IState_T__o *)v68,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v69 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v70 = (ServantRewardAction_StateSecretTreasureDevice_o *)sub_B5D694(ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    ServantRewardAction_StateSecretTreasureDevice___ctor(v70, 0LL);
    if ( !v69 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v69,
      6,
      (IState_T__o *)v70,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    v71 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v72 = (ServantRewardAction_StateEnd_o *)sub_B5D694(ServantRewardAction_StateEnd_TypeInfo);
    ServantRewardAction_StateEnd___ctor(v72, 0LL);
    if ( !v71 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v71,
      7,
      (IState_T__o *)v72,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v73);
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
      v76 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v77 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v76,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v77, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v77, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v77, zero, 0LL);
        if ( v77 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v77,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v77;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v77,
              v78,
              v79,
              v80,
              v81,
              v82,
              v83);
            goto LABEL_28;
          }
        }
LABEL_32:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v58);
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
  int v2; // w2
  __int64 v3; // x3
  ServantRewardAction_o *v4; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42EAA61 & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_B5D5C4(
                                      &Method_CStateManager_ServantRewardAction__getState__,
                                      (_DWORD)method,
                                      v2,
                                      v3);
    byte_42EAA61 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)p_mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantRewardAction__Play_29039128(
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
  sub_B5D560(
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
  __int64 v3; // x3
  struct CStateManager_ServantRewardAction__o *mFSM; // x0

  if ( (byte_42EAA62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_ServantRewardAction__setState__, state, (_DWORD)method, v3);
    byte_42EAA62 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_ServantRewardAction__setState__);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w24
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserServantEntity_o *Entity; // x2

  if ( (byte_42EAA5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, servant_id, user_svt_id, *(_QWORD *)&limit_count);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EAA5D = 1;
  }
  if ( isDoEffect )
    v23 = is_svt_new | play_flag | 0x10;
  else
    v23 = is_svt_new | play_flag;
  if ( user_svt_id )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v25);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               user_svt_id,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_29036596(
    this,
    servant_id,
    Entity,
    limit_count,
    svt_num,
    v23,
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
    sub_B5D69C(this, 0LL);
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_29038356(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_29038332(
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
  ServantRewardAction__SetupCommandCode_29038356(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode_29038356(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  const MethodInfo *v31; // x1
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x23
  __int64 v34; // x1
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UserServantEntity_o *Entity; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct SimpleAnimation_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x1
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x21
  UnityEngine_GameObject_o *mCardParent; // x22
  System_Action_o *v73; // x23
  struct UICharaGraphTexture_o *TexturePrefab_26720796; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_42EAA60 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, user_command_code_id, play_flag, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42EAA60 = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v31) == 7 )
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v37, v38, v39, v40, v41, v42);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity,
          (System_Int32_array **)Entity,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v50, v51, v52, v53, v54, v55);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( Instance )
        {
          ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                             Instance,
                                                                             (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = ComponentInChildren_UIWidget;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.mAnimation,
            (System_Int32_array **)ComponentInChildren_UIWidget,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
          if ( Instance )
          {
            v63 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                Instance,
                                                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = v63;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
              (System_Int32_array **)v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                      Instance,
                                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
                  ServantRewardAction__SetupScreenTouchInfo(this, v70);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v73,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_26720796 = CharaGraphManager__CreateTexturePrefab_26720796(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v73,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_26720796;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                    (System_Int32_array **)TexturePrefab_26720796,
                    v75,
                    v76,
                    v77,
                    v78,
                    v79,
                    v80);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B5D69C(Instance, v34);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *p_mScreenTouchInfo; // x19
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *mTouchParent; // x21
  bool v15; // w22
  CommonUI_o *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  int v19; // s0
  UnityEngine_GameObject_o *v20; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EAA5C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EAA5C = 1;
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
    v15 = UnityEngine_Object__op_Equality(mTouchParent, 0LL, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v15 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_21;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
      v19 = -1014726656;
      v20 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL), !Instance) )
      {
LABEL_21:
        sub_B5D69C(transform, v13);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, transform, 0, 0LL);
      v20 = ScreeenTouchInfo;
      v19 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v19, 0LL);
    if ( !v20 )
      goto LABEL_21;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v20,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B5D560(p_mScreenTouchInfo, Component_srcLineSprite, v22, v23, v24, v25, v26, v27);
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
void __fastcall ServantRewardAction__Setup_29036596(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  const MethodInfo *v46; // x1
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x26
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  void *servantGetObj; // x0
  UnityEngine_Object_o *gameObject; // x26
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct SimpleAnimation_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int32_t v84; // w8
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v86; // x21
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  struct UnityEngine_Animation_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct SimpleAnimation_o *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v106; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  int32_t servantNum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EAA5F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, servant_id, (_DWORD)usrSvtEntity, *(_QWORD *)&limit_count);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v22, v23, v24);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v25, v26, v27);
    sub_B5D5C4(&int_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ServantRewardAction__Setup_b__52_0__, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_6913/*"GACHA_EFFECT_SVT_NUM"*/, v43, v44, v45);
    byte_42EAA5F = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v46) == 7) )
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v58, v59, v60, v61, v62, v63);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity, 0LL, v50, v51, v52, v53, v54, v55);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
      (System_Int32_array **)usrSvtEntity,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)servantGetObj,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mAnimation,
        (System_Int32_array **)Component_srcLineSprite,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v77 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)servantGetObj,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = v77;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
          (System_Int32_array **)v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 101) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
              servantGetObj = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v84 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v84;
                    ServantRewardAction__SetupScreenTouchInfo(this, v49);
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
                        servantGetObj = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_42:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                              System_Action___ctor(
                                v106,
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
                                                v106,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                                (System_Int32_array **)TexturePrefab,
                                v108,
                                v109,
                                v110,
                                v111,
                                v112,
                                v113);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v86 = this->fields.numText;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GACHA_EFFECT_SVT_NUM"*/, 0LL);
                            servantNum = this->fields.servantNum;
                            v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            servantGetObj = System_String__Format(v87, v88, 0LL);
                            if ( v86 )
                            {
                              UILabel__set_text(v86, (System_String_o *)servantGetObj, 0LL);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v89 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)servantGetObj,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = v89;
                                sub_B5D560(
                                  (BattleServantConfConponent_o *)&this->fields.numDisplayAnimation,
                                  (System_Int32_array **)v89,
                                  v90,
                                  v91,
                                  v92,
                                  v93,
                                  v94,
                                  v95);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v96 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = v96;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)&this->fields.numDisplaySimpleAnimation,
                                    (System_Int32_array **)v96,
                                    v97,
                                    v98,
                                    v99,
                                    v100,
                                    v101,
                                    v102);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_B5D69C(servantGetObj, v49);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_29037784(
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
  ServantRewardAction__Setup_29036596(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_29037808(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserServantEntity_o *Entity; // x2

  if ( (byte_42EAA5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, servant_id, user_svt_id, *(_QWORD *)&limit_count);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EAA5E = 1;
  }
  if ( user_svt_id )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v20);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               user_svt_id,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_29036596(this, servant_id, Entity, limit_count, svt_num, play_flag, method);
}


void __fastcall ServantRewardAction__Setup_29038112(
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x2
  struct CStateManager_ServantRewardAction__o *mFSM; // x0
  char mPlayFlag; // w8
  WebViewManager_o *Instance; // x0
  __int64 v27; // x1
  float mFadeInTime; // s8
  CommonUI_o *v29; // x20
  AvalonSceneManager_c *v30; // x0
  ServantRewardAction___c_c *v31; // x0
  struct ServantRewardAction___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v34; // x22
  struct ServantRewardAction___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42EAA5B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CStateManager_ServantRewardAction__update__, v8, v9, v10);
    sub_B5D5C4(&CTouch_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantRewardAction___c__Update_b__46_0__, v17, v18, v19);
    sub_B5D5C4(&ServantRewardAction___c_TypeInfo, v20, v21, v22);
    byte_42EAA5B = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v29 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v30 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v30 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v30->static_fields->DEFAULT_FADE_TIME;
      }
      v31 = ServantRewardAction___c_TypeInfo;
      if ( (BYTE3(ServantRewardAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v31 = ServantRewardAction___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__46_0 = static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__46_0, v34, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        v35 = ServantRewardAction___c_TypeInfo->static_fields;
        v35->__9__46_0 = _9__46_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v35->__9__46_0,
          (System_Int32_array **)_9__46_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      if ( !v29 )
        sub_B5D69C(v31, v27);
      CommonUI__maskFadein(v29, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v23);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAA64 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA64 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalScale(v7, zero, 0LL);
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
    sub_B5D69C(gameObject, v6);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAA63 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA63 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalScale(v7, zero, 0LL);
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
    sub_B5D69C(gameObject, v6);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppClass *klass; // x8
  int typeMetadataHandle_low; // w21
  Il2CppClass *v19; // x8
  CommonUI_o *v20; // x20
  UserCommandCodeEntity_o *interopData; // x21
  __int64 v22; // x22
  __int64 v23; // x9
  System_Action_o *v24; // x23
  UserServantEntity_o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x9
  System_Action_o *v28; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5D7E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantRewardAction_StateDetail_detailEnd__, v11, v12, v13);
    this = (ServantRewardAction_StateDetail_o *)sub_B5D5C4(
                                                  &Method_ServantRewardAction_StateDetail_detailOpen__,
                                                  v14,
                                                  v15,
                                                  v16);
    byte_42E5D7E = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_10;
  typeMetadataHandle_low = LOBYTE(klass->_1.typeMetadataHandle);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = v4[1].klass;
  if ( !v19 )
    goto LABEL_10;
  v20 = (CommonUI_o *)this;
  if ( typeMetadataHandle_low )
  {
    interopData = (UserCommandCodeEntity_o *)v19->_1.interopData;
    v22 = sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    v23 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v22 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v22 + 16) = v23;
    *(_QWORD *)(v22 + 32) = v4;
    sub_B5D560(v22 + 32);
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v24, v4, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v20 )
    {
      CommonUI__OpenServantStatusDialog_18215196(
        v20,
        6,
        interopData,
        (ServantStatusDialog_EndDelegate_o *)v22,
        v24,
        0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(this, method);
  }
  v25 = *(UserServantEntity_o **)&v19->_2.static_fields_size;
  v26 = sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  v27 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v26 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v26 + 16) = v27;
  *(_QWORD *)(v26 + 32) = v4;
  sub_B5D560(v26 + 32);
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v28, v4, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v20 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_18211876(v20, 6, v25, (ServantStatusDialog_EndDelegate_o *)v26, v28, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E5D7F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v11, v12, v13);
    byte_42E5D7F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5D81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5D81 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5D80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5D80 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  struct ServantRewardAction_o *that; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_42E5D7B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)servantrewardAction, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v12, v13, v14);
    byte_42E5D7B = 1;
  }
  this->fields.that = servantrewardAction;
  sub_B5D560(&this->fields);
  that = this->fields.that;
  if ( !that )
    goto LABEL_11;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v20, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(that, v15);
  }
  ServantRewardAction__SetState(that, 7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateDetail__detailEnd(
        ServantRewardAction_StateDetail_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppClass *klass; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  System_Action_o *v22; // x20
  Il2CppClass *v23; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5D7D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v11, v12, v13);
    this = (ServantRewardAction_StateDetail_o *)sub_B5D5C4(
                                                  &Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__,
                                                  v14,
                                                  v15,
                                                  v16);
    byte_42E5D7D = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_12;
  if ( ((__int64)klass->_1.castClass & 1) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v21, v4, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(this, isDecide);
  }
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, v4, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v23 = v4[1].klass;
  if ( !v23 )
    goto LABEL_12;
  EventTutorialMaster__CheckTutorial(-1, 11, v22, (int32_t)v23->_1.element_class, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x19

  if ( (byte_42E5D7C & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E5D7C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v9 )
    sub_B5D69C(Instance, v8);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantRewardAction_StateEnd___c__DisplayClass0_0_o *v23; // x19
  MissionNotifyManager_o *v24; // x0
  __int64 v25; // x1
  ServantRewardAction_StateEnd___c__DisplayClass0_0_Fields *p_fields; // x21
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_42E5D82 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v17, v18, v19);
    sub_B5D5C4(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v20, v21, v22);
    byte_42E5D82 = 1;
  }
  v23 = (ServantRewardAction_StateEnd___c__DisplayClass0_0_o *)sub_B5D694(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
  ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_17;
  v23->fields.that = that;
  p_fields = &v23->fields;
  sub_B5D560(&v23->fields);
  if ( !v23->fields.that )
    goto LABEL_17;
  if ( (v23->fields.that->fields.mPlayFlag & 4) == 0 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v24 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v24 )
    {
      MissionNotifyManager__EndPause(v24, 0LL);
      if ( p_fields->that )
      {
        ActionExtensions__Call(p_fields->that->fields.mEndAct, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(v24, v25);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v23,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  struct ServantRewardAction_o *that; // x8

  if ( (byte_42F547A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42F547A = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 || (MissionNotifyManager__EndPause(v8, 0LL), (that = this->fields.that) == 0LL) )
    sub_B5D69C(v8, v9);
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
  __int64 v3; // x3
  ServantRewardAction_StateNumDisplay_o *v5; // x19
  __int64 v6; // x8
  UnityEngine_AnimationClip_o *v7; // x21
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  struct SimpleAnimation_o *v9; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  void *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v15; // x21
  System_String_o *v16; // x0
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0

  v5 = this;
  if ( (byte_42E5D83 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_B5D5C4(
                                                      &UnityEngine_Object_TypeInfo,
                                                      (_DWORD)that,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E5D83 = 1;
  }
  if ( !that )
    goto LABEL_29;
  this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayObj;
  v6 = 208LL;
  if ( that->fields.servantNum >= 10 )
    v6 = 216LL;
  if ( !this )
    goto LABEL_29;
  v7 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v6);
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
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v7, 0LL);
      v9 = that->fields.numDisplaySimpleAnimation;
      if ( v9 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v9[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_16676044(v9, name, 0LL);
          v11 = that->fields.numDisplaySimpleAnimation;
          if ( v11 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v11[1].monitor;
            if ( this )
            {
              v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              v5->fields.mSimpleAnimState = SimpleAnimation__get_Item(v11, v12, 0LL);
              p_mSimpleAnimState = &v5->fields.mSimpleAnimState;
LABEL_27:
              sub_B5D560(p_mSimpleAnimState);
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
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v7, 0LL);
      v15 = that->fields.numDisplayAnimation;
      if ( v15 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0LL);
        if ( this )
        {
          v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_51249124(v15, v16, 0LL);
          v17 = that->fields.numDisplayAnimation;
          if ( v17 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v17, 0LL);
            if ( this )
            {
              v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              v5->fields.mAnimState = UnityEngine_Animation__get_Item(v17, v18, 0LL);
              p_mSimpleAnimState = &v5->fields;
              goto LABEL_27;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  ServantRewardAction_StateNumDisplay_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v13; // x20
  System_String_o *v14; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v16; // x20
  System_String_o *v17; // x0
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0

  v5 = this;
  if ( (byte_42E5D84 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E5D84 = 1;
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
    this = (ServantRewardAction_StateNumDisplay_o *)v5->fields.mAnimState;
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
    v10 = that->fields.mSimpleAnimation;
    if ( !v10 )
      goto LABEL_45;
    this = (ServantRewardAction_StateNumDisplay_o *)v10[1].monitor;
    if ( !this )
      goto LABEL_45;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v10, name, 0LL) )
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
    v13 = that->fields.mAnimation;
    if ( !v13 )
      goto LABEL_45;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_45;
    v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( !UnityEngine_Animation__IsPlaying(v13, v14, 0LL) )
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
    v16 = that->fields.numDisplaySimpleAnimation;
    if ( v16 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v16[1].monitor;
      if ( this )
      {
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( SimpleAnimation__IsPlaying(v16, v17, 0LL) )
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
    v19 = that->fields.numDisplayAnimation;
    if ( v19 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0LL);
      if ( this )
      {
        v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v19, v20, 0LL) )
          return;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  MissionNotifyManager_o *monitor; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v15; // x9
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  UnityEngine_Object_o *mSimpleAnimation; // x22
  struct SimpleAnimation_o *v18; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v20; // x20
  System_String_o *v21; // x0
  void *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v24; // x21
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x20
  System_String_o *v27; // x0
  int32_t mSvtType; // w8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5D85 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9, v10, v11);
    byte_42E5D85 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  monitor = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !monitor )
    goto LABEL_39;
  MissionNotifyManager__StartPause(monitor, 0LL);
  if ( !that )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(gameObject, one, 0LL);
  v15 = 128LL;
  if ( that->fields.mIsCommandCode )
    v15 = 152LL;
  mAnimCommandCodeNew = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v15);
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
      v18 = that->fields.mSimpleAnimation;
      if ( v18 )
      {
        monitor = (MissionNotifyManager_o *)v18[1].monitor;
        if ( monitor )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
          monitor = (MissionNotifyManager_o *)SimpleAnimation__Play_16676044(v18, name, 0LL);
          v20 = that->fields.mSimpleAnimation;
          if ( v20 )
          {
            monitor = (MissionNotifyManager_o *)v20[1].monitor;
            if ( monitor )
            {
              v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
              this->fields.mSimpleAnimState = SimpleAnimation__get_Item(v20, v21, 0LL);
              p_mSimpleAnimState = &this->fields.mSimpleAnimState;
LABEL_33:
              sub_B5D560(p_mSimpleAnimState);
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
      v24 = that->fields.mAnimation;
      if ( v24 )
      {
        monitor = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( monitor )
        {
          v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
          monitor = (MissionNotifyManager_o *)UnityEngine_Animation__Play_51249124(v24, v25, 0LL);
          v26 = that->fields.mAnimation;
          if ( v26 )
          {
            monitor = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v26, 0LL);
            if ( monitor )
            {
              v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
              this->fields.mAnimState = UnityEngine_Animation__get_Item(v26, v27, 0LL);
              p_mSimpleAnimState = &this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(monitor, v13);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_AnimationState_o *isTouchPush; // x0
  __int64 v10; // x1
  float totalTime; // s8
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  int32_t v19; // w1

  if ( (byte_42E5D86 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E5D86 = 1;
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
    v14 = that->fields.mSimpleAnimation;
    if ( v14 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v14[1].monitor;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( SimpleAnimation__IsPlaying(v14, name, 0LL) )
          return;
LABEL_32:
        if ( that->fields.isDispNum )
          v19 = 2;
        else
          v19 = 3;
        ServantRewardAction__SetState(that, v19, 0LL);
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
    v17 = that->fields.mAnimation;
    if ( v17 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( isTouchPush )
      {
        v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v17, v18, 0LL) )
          return;
        goto LABEL_32;
      }
    }
LABEL_36:
    sub_B5D69C(isTouchPush, v10);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_42E5D87 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v11, v12, v13);
    sub_B5D5C4(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v14, v15, v16);
    byte_42E5D87 = 1;
  }
  v17 = (ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *)sub_B5D694(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
  ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_9;
  v17->fields.that = that;
  sub_B5D560(&v17->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v17,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42F547B & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v8, v9, v10);
    byte_42F547B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v16 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v16 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v16, mServantId, _9__1, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, isDecide);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  ServantRewardAction_StateTalk___c__DisplayClass0_0_o *v29; // x20
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  ServantRewardAction_StateTalk___c__DisplayClass0_0_Fields *p_fields; // x19
  struct ServantRewardAction_o *v33; // x8
  int32_t mServantId; // w0
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v36; // x22
  int32_t v37; // w1
  ServantVoiceEntity_o *v38; // x0
  ServantVoiceEntity_o *v39; // x23
  int v40; // w22
  System_Action_o *v41; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5D88 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)rewardAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v23, v24, v25);
    sub_B5D5C4(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v26, v27, v28);
    byte_42E5D88 = 1;
  }
  entity = 0LL;
  v29 = (ServantRewardAction_StateTalk___c__DisplayClass0_0_o *)sub_B5D694(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
  ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_33;
  v29->fields.rewardAction = rewardAction;
  p_fields = &v29->fields;
  sub_B5D560(&v29->fields);
  v33 = v29->fields.rewardAction;
  if ( !v33 )
    goto LABEL_33;
  mServantId = v33->fields.mServantId;
  v29->fields.svtId = mServantId;
  v29->fields.limitCount = v33->fields.mLimitCount;
  v29->fields.isEventSvtGet = (v33->fields.mPlayFlag & 8) != 0;
  v29->fields.checkQuestOpen = v33->fields.mPlayFlag & 1;
  v29->fields.isEventJoinSkip = (v33->fields.mPlayFlag & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(mServantId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !p_fields->rewardAction )
    goto LABEL_33;
  v36 = (ServantVoiceMaster_o *)Instance;
  Instance = (DataManager_o *)p_fields->rewardAction->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  if ( !v36 )
    goto LABEL_33;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v37 = 4;
  else
    v37 = 3;
  v38 = ServantVoiceMaster__getEntity(v36, v37, SvtVoiceId, v29->fields.limitCount, 0LL);
  v29->fields.summonScriptId = 0LL;
  v39 = v38;
  sub_B5D560(&v29->fields.summonScriptId);
  if ( v39 )
  {
    v29->fields.summonScriptId = ServantVoiceEntity__GetSummonScriptId(v39, SvtVoiceId, 0LL);
    sub_B5D560(&v29->fields.summonScriptId);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         v29->fields.svtId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  v29->fields.svtId,
                                  0LL);
    if ( !entity )
      goto LABEL_33;
    v40 = (Instance != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v40 = 0;
  }
  v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v29,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v40 )
  {
    if ( p_fields->rewardAction )
    {
      Instance = (DataManager_o *)p_fields->rewardAction->fields.mUICharaGraph;
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v41, 0LL);
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_B5D69C(Instance, v31);
  }
  ActionExtensions__Call(v41, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v16; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42F547C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v8, v9, v10);
    byte_42F547C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v16 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v16 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  ScriptManager__PlayGacha_17818740(
    v16,
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
    sub_B5D69C(0LL, method);
  ServantRewardAction__SetState(rewardAction, 6, 0LL);
}


void __fastcall ServantRewardAction_StateTouchWait___ctor(
        ServantRewardAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateTouchWait___begin_b__1_0(
        ServantRewardAction_StateTouchWait_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5D8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, (_DWORD)method, v3);
    byte_42E5D8B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isWaitCloseDialog = 0;
}


void __fastcall ServantRewardAction_StateTouchWait__begin(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantRewardAction_StateTouchWait_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_String_o *v39; // x20
  EventServantEntity_o *EventServant_21854464; // x0
  EventServantEntity_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x21
  CommonUI_o *Instance; // x22
  NotificationDialog_ClickDelegate_o *v49; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_int__o v51; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o v54; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+90h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v58; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v61; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  v5 = this;
  if ( (byte_42E5D89 & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Nullable_int___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12613/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    this = (ServantRewardAction_StateTouchWait_o *)sub_B5D5C4(&StringLiteral_12612/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v36, v37, v38);
    byte_42E5D89 = 1;
  }
  entity = 0LL;
  v5->fields.isWaitCloseDialog = 0;
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
    v39 = (System_String_o *)StringLiteral_1/*""*/;
    EventServant_21854464 = UserServantEntity__getEventServant_21854464((UserServantEntity_o *)this, 1, 0LL);
    if ( EventServant_21854464
      && (v41 = EventServant_21854464,
          v42 = EventServantEntity__GetGetMessage(EventServant_21854464, 0LL),
          !System_String__IsNullOrEmpty(v42, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v41, 0LL);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_28;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_21;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12612/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
                                                       0LL);
      if ( !entity )
        goto LABEL_28;
      v43 = (System_String_o *)this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0LL);
      Message = System_String__Format(v43, Name, 0LL);
    }
    v39 = Message;
LABEL_21:
    if ( System_String__IsNullOrEmpty(v39, 0LL) )
      return;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12613/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0LL);
    v5->fields.isWaitCloseDialog = 1;
    v47 = v46;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v49 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v49,
      (Il2CppObject *)v5,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    v58 = (System_Nullable_float__o)&v54;
    v54 = 0LL;
    System_Nullable_float____ctor(v58, 8.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    v61 = (System_Nullable_int__o)&v51;
    v51 = 0LL;
    System_Nullable_int____ctor(v61, 217, (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_18204284(
        Instance,
        v47,
        v39,
        v49,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v54,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v51,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_28:
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t mSvtType; // w8

  if ( (byte_42E5D8A & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    byte_42E5D8A = 1;
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
              v14 = 5;
LABEL_13:
              ServantRewardAction__SetState(that, v14, 0LL);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v14 = 7;
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
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_12;
LABEL_24:
              v14 = 4;
              goto LABEL_13;
            }
          }
        }
      }
      sub_B5D69C(isTouchPush, v13);
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantRewardAction___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D7A & 1) == 0 )
  {
    sub_B5D5C4(&ServantRewardAction___c_TypeInfo, v1, v2, v3);
    byte_42E5D7A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantRewardAction___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantRewardAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantRewardAction___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}