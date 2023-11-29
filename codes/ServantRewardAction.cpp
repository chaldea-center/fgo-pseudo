void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CStateManager_ServantRewardAction__o *mFSM; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ServantRewardAction_StateNone_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  ServantRewardAction_StatePlay_o *v39; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  ServantRewardAction_StateNumDisplay_o *v45; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  ServantRewardAction_StateTouchWait_o *v51; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  ServantRewardAction_StateTalk_o *v57; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  ServantRewardAction_StateDetail_o *v63; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  ServantRewardAction_StateSecretTreasureDevice_o *v69; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  ServantRewardAction_StateEnd_o *v75; // x21
  const MethodInfo *v76; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v79; // x21
  UnityEngine_GameObject_o *v80; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBBA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ServantRewardAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_ServantRewardAction__add__, v6);
    sub_B16FFC(&CStateManager_ServantRewardAction__TypeInfo, v7);
    sub_B16FFC(&CTouch_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&ServantRewardAction_StateDetail_TypeInfo, v12);
    sub_B16FFC(&ServantRewardAction_StateEnd_TypeInfo, v13);
    sub_B16FFC(&ServantRewardAction_StateNone_TypeInfo, v14);
    sub_B16FFC(&ServantRewardAction_StateNumDisplay_TypeInfo, v15);
    sub_B16FFC(&ServantRewardAction_StatePlay_TypeInfo, v16);
    sub_B16FFC(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v17);
    sub_B16FFC(&ServantRewardAction_StateTalk_TypeInfo, v18);
    sub_B16FFC(&ServantRewardAction_StateTouchWait_TypeInfo, v19);
    byte_40FBBA4 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_ServantRewardAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v21,
      (QAASpotStateController_IMapSpot_o *)this,
      8,
      (const MethodInfo_2907EF0 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v21;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    mFSM = this->fields.mFSM;
    v33 = (ServantRewardAction_StateNone_o *)sub_B170CC(ServantRewardAction_StateNone_TypeInfo, v29, v30, v31, v32);
    ServantRewardAction_StateNone___ctor(v33, 0LL);
    if ( !mFSM )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v33,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v39 = (ServantRewardAction_StatePlay_o *)sub_B170CC(ServantRewardAction_StatePlay_TypeInfo, v35, v36, v37, v38);
    ServantRewardAction_StatePlay___ctor(v39, 0LL);
    if ( !v34 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      1,
      (IState_T__o *)v39,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v40 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v45 = (ServantRewardAction_StateNumDisplay_o *)sub_B170CC(
                                                     ServantRewardAction_StateNumDisplay_TypeInfo,
                                                     v41,
                                                     v42,
                                                     v43,
                                                     v44);
    ServantRewardAction_StateNumDisplay___ctor(v45, 0LL);
    if ( !v40 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v40,
      2,
      (IState_T__o *)v45,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v46 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v51 = (ServantRewardAction_StateTouchWait_o *)sub_B170CC(
                                                    ServantRewardAction_StateTouchWait_TypeInfo,
                                                    v47,
                                                    v48,
                                                    v49,
                                                    v50);
    ServantRewardAction_StateTouchWait___ctor(v51, 0LL);
    if ( !v46 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v46,
      3,
      (IState_T__o *)v51,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v52 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v57 = (ServantRewardAction_StateTalk_o *)sub_B170CC(ServantRewardAction_StateTalk_TypeInfo, v53, v54, v55, v56);
    ServantRewardAction_StateTalk___ctor(v57, 0LL);
    if ( !v52 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v52,
      4,
      (IState_T__o *)v57,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v58 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v63 = (ServantRewardAction_StateDetail_o *)sub_B170CC(ServantRewardAction_StateDetail_TypeInfo, v59, v60, v61, v62);
    ServantRewardAction_StateDetail___ctor(v63, 0LL);
    if ( !v58 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v58,
      5,
      (IState_T__o *)v63,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v64 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v69 = (ServantRewardAction_StateSecretTreasureDevice_o *)sub_B170CC(
                                                               ServantRewardAction_StateSecretTreasureDevice_TypeInfo,
                                                               v65,
                                                               v66,
                                                               v67,
                                                               v68);
    ServantRewardAction_StateSecretTreasureDevice___ctor(v69, 0LL);
    if ( !v64 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v64,
      6,
      (IState_T__o *)v69,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    v70 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v75 = (ServantRewardAction_StateEnd_o *)sub_B170CC(ServantRewardAction_StateEnd_TypeInfo, v71, v72, v73, v74);
    ServantRewardAction_StateEnd___ctor(v75, 0LL);
    if ( !v70 )
      goto LABEL_32;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v70,
      7,
      (IState_T__o *)v75,
      (const MethodInfo_2907FBC *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v76);
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
      v79 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v80 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v79,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v80, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v80, zero, 0LL);
        if ( v80 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v80,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v80;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v80,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            goto LABEL_28;
          }
        }
LABEL_32:
        sub_B170D4();
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
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  if ( (byte_40FBBAB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ServantRewardAction__getState__, method);
    byte_40FBBAB = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantRewardAction__Play_28281988(
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
  sub_B16F98(
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

  if ( (byte_40FBBAC & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ServantRewardAction__setState__, *(_QWORD *)&state);
    byte_40FBBAC = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_ServantRewardAction__setState__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x2

  if ( (byte_40FBBA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FBBA7 = 1;
  }
  if ( isDoEffect )
    v19 = is_svt_new | play_flag | 0x10;
  else
    v19 = is_svt_new | play_flag;
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               user_svt_id,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_28279456(
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
    sub_B170D4();
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_28281216(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_28281192(
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
  ServantRewardAction__SetupCommandCode_28281216(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode_28281216(
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
  UnityEngine_Component_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x23
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Component_o *v48; // x0
  struct SimpleAnimation_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Component_o *v56; // x0
  UIWidget_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  const MethodInfo *v59; // x1
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x21
  UnityEngine_GameObject_o *mCardParent; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Action_o *v66; // x23
  struct UICharaGraphTexture_o *TexturePrefab_26887824; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_40FBBAA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, user_command_code_id);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FBBAA = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v15) == 7 )
  {
    p_mUICharaGraph = (UnityEngine_Component_o **)&this->fields.mUICharaGraph;
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      if ( !*p_mUICharaGraph )
        goto LABEL_23;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mUICharaGraph, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v19, v20, v21, v22, v23, v24);
    }
    this->fields.mIsCommandCode = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   user_command_code_id,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity,
          (System_Int32_array **)Entity,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v34, v35, v36, v37, v38, v39);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( transform )
        {
          ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                             transform,
                                                                             (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = ComponentInChildren_UIWidget;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.mAnimation,
            (System_Int32_array **)ComponentInChildren_UIWidget,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v48 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( v48 )
          {
            v49 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                v48,
                                                (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = v49;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
              (System_Int32_array **)v49,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55);
            v56 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( v56 )
            {
              v57 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                      v56,
                      (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
              if ( v57 )
              {
                *(&v57->fields.mAnchorsCached + 5) = 1;
                v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( v58 )
                {
                  UnityEngine_GameObject__SetActive(v58, 0, 0LL);
                  this->fields.mIsDoneLoad = 0;
                  ServantRewardAction__SetupScreenTouchInfo(this, v59);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v62, v63, v64, v65);
                  System_Action___ctor(
                    v66,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_26887824 = CharaGraphManager__CreateTexturePrefab_26887824(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v66,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_26887824;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                    (System_Int32_array **)TexturePrefab_26887824,
                    v68,
                    v69,
                    v70,
                    v71,
                    v72,
                    v73);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBBA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FBBA6 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v14 = this->fields.mTouchParent;
      if ( !v14 || (v15 = UnityEngine_GameObject__get_transform(v14, 0LL), !Instance) )
LABEL_21:
        sub_B170D4();
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v15, 0, 0LL);
      v13 = ScreeenTouchInfo;
      v12 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v12, 0LL);
    if ( !v13 )
      goto LABEL_21;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v13,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
    sub_B16F98(p_mScreenTouchInfo, Component_srcLineSprite, v17, v18, v19, v20, v21, v22);
  }
  if ( !p_mScreenTouchInfo->klass )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p_mScreenTouchInfo->klass, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28279456(
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
  UnityEngine_Component_o **p_mUICharaGraph; // x20
  UnityEngine_Object_o *mUICharaGraph; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *gameObject; // x26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *servantGetObj; // x0
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_GameObject_o *v54; // x0
  struct SimpleAnimation_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_GameObject_o *v62; // x0
  srcLineSprite_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v68; // x1
  int32_t v69; // w8
  UnityEngine_GameObject_o *numDisplayObj; // x0
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  UnityEngine_Object_o *numText; // x21
  WebViewManager_o *v77; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v78; // x0
  UILabel_o *v79; // x21
  System_String_o *v80; // x22
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  struct UnityEngine_Animation_o *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_GameObject_o *v91; // x0
  struct SimpleAnimation_o *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UnityEngine_GameObject_o *v99; // x0
  srcLineSprite_o *v100; // x0
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v104; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  int32_t servantNum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FBBA9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&servant_id);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_ServantRewardAction__Setup_b__52_0__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_6802, v23);
    byte_40FBBA9 = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v24) == 7) )
  {
    p_mUICharaGraph = (UnityEngine_Component_o **)&this->fields.mUICharaGraph;
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      if ( !*p_mUICharaGraph )
        goto LABEL_44;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mUICharaGraph, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.mUICharaGraph, 0LL, v34, v35, v36, v37, v38, v39);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.mUserCommandCodeEntity, 0LL, v27, v28, v29, v30, v31, v32);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
      (System_Int32_array **)usrSvtEntity,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    servantGetObj,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mAnimation,
        (System_Int32_array **)Component_srcLineSprite,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v54 = this->fields.servantGetObj;
      if ( v54 )
      {
        v55 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v54,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = v55;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
          (System_Int32_array **)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        v62 = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( v62 )
        {
          v63 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  v62,
                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( v63 )
          {
            *((_BYTE *)&v63->fields.mcTo + 9) = 1;
            v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( v64 )
            {
              UnityEngine_GameObject__SetActive(v64, 0, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             MasterData_WarQuestSelectionMaster,
                             this->fields.mServantId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( Entity )
                  {
                    v69 = *(&Entity->fields.startType + 1);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v69;
                    ServantRewardAction__SetupScreenTouchInfo(this, v68);
                    numDisplayObj = this->fields.numDisplayObj;
                    if ( numDisplayObj )
                    {
                      v71 = UnityEngine_GameObject__get_gameObject(numDisplayObj, 0LL);
                      if ( v71 )
                      {
                        UnityEngine_GameObject__SetActive(v71, 0, 0LL);
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
                        v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( v77 )
                        {
                          v78 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v77,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( v78 )
                          {
                            if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v78,
                                    this->fields.mServantId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_42:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v104 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
                              System_Action___ctor(
                                v104,
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
                                                v104,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)&this->fields.mUICharaGraph,
                                (System_Int32_array **)TexturePrefab,
                                v106,
                                v107,
                                v108,
                                v109,
                                v110,
                                v111);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v79 = this->fields.numText;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6802, 0LL);
                            servantNum = this->fields.servantNum;
                            v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            v82 = System_String__Format(v80, v81, 0LL);
                            if ( v79 )
                            {
                              UILabel__set_text(v79, v82, 0LL);
                              v83 = this->fields.numDisplayObj;
                              if ( v83 )
                              {
                                v84 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v83,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = v84;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)&this->fields.numDisplayAnimation,
                                  (System_Int32_array **)v84,
                                  v85,
                                  v86,
                                  v87,
                                  v88,
                                  v89,
                                  v90);
                                v91 = this->fields.numDisplayObj;
                                if ( v91 )
                                {
                                  v92 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v91,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = v92;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)&this->fields.numDisplaySimpleAnimation,
                                    (System_Int32_array **)v92,
                                    v93,
                                    v94,
                                    v95,
                                    v96,
                                    v97,
                                    v98);
                                  v99 = this->fields.numDisplayObj;
                                  if ( v99 )
                                  {
                                    v100 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v99,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
                                    if ( v100 )
                                    {
                                      *((_BYTE *)&v100->fields.mcTo + 9) = 1;
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28280644(
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
  ServantRewardAction__Setup_28279456(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_28280668(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x2

  if ( (byte_40FBBA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FBBA8 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               user_svt_id,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_28279456(this, servant_id, Entity, limit_count, svt_num, play_flag, method);
}


void __fastcall ServantRewardAction__Setup_28280972(
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
    sub_B170D4();
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
  __int64 v15; // x3
  __int64 v16; // x4
  float mFadeInTime; // s8
  CommonUI_o *v18; // x20
  AvalonSceneManager_c *v19; // x0
  ServantRewardAction___c_c *v20; // x0
  struct ServantRewardAction___c_StaticFields *static_fields; // x8
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v23; // x22
  struct ServantRewardAction___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FBBA5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CStateManager_ServantRewardAction__update__, v4);
    sub_B16FFC(&CTouch_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_ServantRewardAction___c__Update_b__46_0__, v7);
    sub_B16FFC(&ServantRewardAction___c_TypeInfo, v8);
    byte_40FBBA5 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v18 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v19 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v19 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v19->static_fields->DEFAULT_FADE_TIME;
      }
      v20 = ServantRewardAction___c_TypeInfo;
      if ( (BYTE3(ServantRewardAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v20 = ServantRewardAction___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__46_0 = static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
        System_Action___ctor(_9__46_0, v23, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        v24 = ServantRewardAction___c_TypeInfo->static_fields;
        v24->__9__46_0 = _9__46_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v24->__9__46_0,
          (System_Int32_array **)_9__46_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      if ( !v18 )
        sub_B170D4();
      CommonUI__maskFadein(v18, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v9);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  SimpleAnimation_o *v6; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBBAE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBBAE = 1;
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
    v6 = this->fields.mSimpleAnimation;
    if ( v6 )
    {
      SimpleAnimation__Stop(v6, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v8 = this->fields.mAnimation;
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Animation__Stop(v8, 0LL);
  }
}


void __fastcall ServantRewardAction___Setup_b__52_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  SimpleAnimation_o *v6; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  SimpleAnimation_o *v10; // x0
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v12; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBBAD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBBAD = 1;
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
    v6 = this->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_29;
    SimpleAnimation__Stop(v6, 0LL);
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
      v8 = this->fields.mAnimation;
      if ( !v8 )
        goto LABEL_29;
      UnityEngine_Animation__Stop(v8, 0LL);
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
    v10 = this->fields.numDisplaySimpleAnimation;
    if ( v10 )
    {
      SimpleAnimation__Stop(v10, 0LL);
      return;
    }
LABEL_29:
    sub_B170D4();
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    v12 = this->fields.numDisplayAnimation;
    if ( !v12 )
      goto LABEL_29;
    UnityEngine_Animation__Stop(v12, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantRewardAction_o *that; // x8
  _BOOL4 mIsCommandCode; // w21
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct ServantRewardAction_o *v14; // x8
  CommonUI_o *v15; // x20
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x21
  __int64 v17; // x22
  __int64 v18; // x9
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x23
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v31; // x22
  __int64 v32; // x9
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x23

  if ( (byte_40F7649 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail_detailEnd__, v5);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail_detailOpen__, v6);
    byte_40F7649 = 1;
  }
  that = this->fields.that;
  if ( !that )
    goto LABEL_10;
  mIsCommandCode = that->fields.mIsCommandCode;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = this->fields.that;
  if ( !v14 )
    goto LABEL_10;
  v15 = (CommonUI_o *)Instance;
  if ( mIsCommandCode )
  {
    mUserCommandCodeEntity = v14->fields.mUserCommandCodeEntity;
    v17 = sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
    v18 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v17 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
    *(_QWORD *)(v17 + 16) = v18;
    *(_QWORD *)(v17 + 32) = this;
    sub_B16F98((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
    v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v15 )
    {
      CommonUI__OpenServantStatusDialog_18250552(
        v15,
        6,
        mUserCommandCodeEntity,
        (ServantStatusDialog_EndDelegate_o *)v17,
        v29,
        0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  userSvtEntity = v14->fields.userSvtEntity;
  v31 = sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
  v32 = *(_QWORD *)Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v31 + 40) = Method_ServantRewardAction_StateDetail_detailEnd__;
  *(_QWORD *)(v31 + 16) = v32;
  *(_QWORD *)(v31 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v15 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_18247320(v15, 6, userSvtEntity, (ServantStatusDialog_EndDelegate_o *)v31, v43, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F764A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v5);
    byte_40F764A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  ServantRewardAction_o *that; // x0

  if ( (byte_40F764C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F764C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (that = this->fields.that) == 0LL) )
    sub_B170D4();
  ServantRewardAction__SetState(that, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  ServantRewardAction_o *that; // x0

  if ( (byte_40F764B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F764B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (that = this->fields.that) == 0LL) )
    sub_B170D4();
  ServantRewardAction__SetState(that, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ServantRewardAction_o *that; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_40F7646 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, servantrewardAction);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v12);
    byte_40F7646 = 1;
  }
  this->fields.that = servantrewardAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)servantrewardAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  that = this->fields.that;
  if ( !that )
    goto LABEL_11;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantRewardAction_o *that; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  System_Action_o *v19; // x20
  struct ServantRewardAction_o *v20; // x8

  if ( (byte_40F7648 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v8);
    sub_B16FFC(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, v9);
    byte_40F7648 = 1;
  }
  that = this->fields.that;
  if ( !that )
    goto LABEL_12;
  if ( (that->fields.mPlayFlag & 1) == 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v20 = this->fields.that;
  if ( !v20 )
    goto LABEL_12;
  EventTutorialMaster__CheckTutorial(-1, 11, v19, v20->fields.mServantId, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19

  if ( (byte_40F7647 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F7647 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x21
  MissionNotifyManager_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_40F764D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v10);
    sub_B16FFC(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v11);
    byte_40F764D = 1;
  }
  v12 = sub_B170CC(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(
    (ServantRewardAction_StateEnd___c__DisplayClass0_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = that;
  v19 = v12 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)that, v13, v14, v15, v16, v17, v18);
  if ( !*(_QWORD *)(v12 + 16) )
    goto LABEL_17;
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 16) + 72LL) & 4) == 0 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v20 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v20 )
    {
      MissionNotifyManager__EndPause(v20, 0LL);
      if ( *(_QWORD *)v19 )
      {
        ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v19 + 88LL), 0LL);
        return;
      }
    }
LABEL_17:
    sub_B170D4();
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v12,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v28, 0LL);
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
    sub_B170D4();
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

  if ( (byte_4106699 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4106699 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 || (MissionNotifyManager__EndPause(v4, 0LL), (that = this->fields.that) == 0LL) )
    sub_B170D4();
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
  UnityEngine_GameObject_o *numDisplayObj; // x0
  __int64 v6; // x8
  UnityEngine_AnimationClip_o *v7; // x21
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  SimpleAnimation_o *v9; // x0
  struct SimpleAnimation_o *v10; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  struct SimpleAnimation_o *v13; // x20
  UnityEngine_Object_o *v14; // x0
  System_String_o *v15; // x0
  struct SimpleAnimation_State_o *Item; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v25; // x0
  UnityEngine_Animation_o *v26; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v28; // x0
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Object_o *v30; // x0
  System_String_o *v31; // x0

  if ( (byte_40F764E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40F764E = 1;
  }
  if ( !that )
    goto LABEL_29;
  numDisplayObj = that->fields.numDisplayObj;
  v6 = 208LL;
  if ( that->fields.servantNum >= 10 )
    v6 = 216LL;
  if ( !numDisplayObj )
    goto LABEL_29;
  v7 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v6);
  UnityEngine_GameObject__SetActive(numDisplayObj, 1, 0LL);
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    v9 = that->fields.numDisplaySimpleAnimation;
    if ( v9 )
    {
      SimpleAnimation__set_clip(v9, v7, 0LL);
      v10 = that->fields.numDisplaySimpleAnimation;
      if ( v10 )
      {
        monitor = (UnityEngine_Object_o *)v10[1].monitor;
        if ( monitor )
        {
          name = UnityEngine_Object__get_name(monitor, 0LL);
          SimpleAnimation__Play_16380456(v10, name, 0LL);
          v13 = that->fields.numDisplaySimpleAnimation;
          if ( v13 )
          {
            v14 = (UnityEngine_Object_o *)v13[1].monitor;
            if ( v14 )
            {
              v15 = UnityEngine_Object__get_name(v14, 0LL);
              Item = SimpleAnimation__get_Item(v13, v15, 0LL);
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (BattleServantConfConponent_o *)&this->fields.mSimpleAnimState;
LABEL_27:
              sub_B16F98(p_mSimpleAnimState, (System_Int32_array **)Item, v17, v18, v19, v20, v21, v22);
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
    v25 = that->fields.numDisplayAnimation;
    if ( v25 )
    {
      UnityEngine_Animation__set_clip(v25, v7, 0LL);
      v26 = that->fields.numDisplayAnimation;
      if ( v26 )
      {
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.numDisplayAnimation, 0LL);
        if ( clip )
        {
          v28 = UnityEngine_Object__get_name(clip, 0LL);
          UnityEngine_Animation__Play_49744236(v26, v28, 0LL);
          v29 = that->fields.numDisplayAnimation;
          if ( v29 )
          {
            v30 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v29, 0LL);
            if ( v30 )
            {
              v31 = UnityEngine_Object__get_name(v30, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v29, v31, 0LL);
              this->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = (BattleServantConfConponent_o *)&this->fields;
              goto LABEL_27;
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
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
  __int64 v5; // x1
  UnityEngine_AnimationState_o *mAnimState; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v8; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v16; // x20
  UnityEngine_Object_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_Object_o *v21; // x0
  System_String_o *v22; // x0

  if ( (byte_40F764F & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F764F = 1;
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
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_45;
    UnityEngine_AnimationState__set_normalizedTime(mAnimState, 1.0, 0LL);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_45;
    monitor = (UnityEngine_Object_o *)v8[1].monitor;
    if ( !monitor )
      goto LABEL_45;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    if ( SimpleAnimation__IsPlaying(v8, name, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v12 = that->fields.mAnimation;
    if ( !v12 )
      goto LABEL_45;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !clip )
      goto LABEL_45;
    v14 = UnityEngine_Object__get_name(clip, 0LL);
    if ( !UnityEngine_Animation__IsPlaying(v12, v14, 0LL) )
      goto LABEL_26;
  }
LABEL_27:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    v16 = that->fields.numDisplaySimpleAnimation;
    if ( v16 )
    {
      v17 = (UnityEngine_Object_o *)v16[1].monitor;
      if ( v17 )
      {
        v18 = UnityEngine_Object__get_name(v17, 0LL);
        if ( SimpleAnimation__IsPlaying(v16, v18, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    v20 = that->fields.numDisplayAnimation;
    if ( v20 )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.numDisplayAnimation, 0LL);
      if ( v21 )
      {
        v22 = UnityEngine_Object__get_name(v21, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v20, v22, 0LL) )
          return;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_B170D4();
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
  MissionNotifyManager_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v9; // x9
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  UnityEngine_Object_o *mSimpleAnimation; // x22
  SimpleAnimation_o *v12; // x0
  struct SimpleAnimation_o *v13; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  struct SimpleAnimation_o *v16; // x20
  UnityEngine_Object_o *v17; // x0
  System_String_o *v18; // x0
  struct SimpleAnimation_State_o *Item; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v28; // x0
  UnityEngine_Animation_o *v29; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v31; // x0
  UnityEngine_Animation_o *v32; // x20
  UnityEngine_Object_o *v33; // x0
  System_String_o *v34; // x0
  int32_t mSvtType; // w8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7650 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    byte_40F7650 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v7 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v7 )
    goto LABEL_39;
  MissionNotifyManager__StartPause(v7, 0LL);
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
    v12 = that->fields.mSimpleAnimation;
    if ( v12 )
    {
      SimpleAnimation__set_clip(v12, mAnimCommandCodeNew, 0LL);
      v13 = that->fields.mSimpleAnimation;
      if ( v13 )
      {
        monitor = (UnityEngine_Object_o *)v13[1].monitor;
        if ( monitor )
        {
          name = UnityEngine_Object__get_name(monitor, 0LL);
          SimpleAnimation__Play_16380456(v13, name, 0LL);
          v16 = that->fields.mSimpleAnimation;
          if ( v16 )
          {
            v17 = (UnityEngine_Object_o *)v16[1].monitor;
            if ( v17 )
            {
              v18 = UnityEngine_Object__get_name(v17, 0LL);
              Item = SimpleAnimation__get_Item(v16, v18, 0LL);
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (BattleServantConfConponent_o *)&this->fields.mSimpleAnimState;
LABEL_33:
              sub_B16F98(p_mSimpleAnimState, (System_Int32_array **)Item, v20, v21, v22, v23, v24, v25);
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
    v28 = that->fields.mAnimation;
    if ( v28 )
    {
      UnityEngine_Animation__set_clip(v28, mAnimCommandCodeNew, 0LL);
      v29 = that->fields.mAnimation;
      if ( v29 )
      {
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( clip )
        {
          v31 = UnityEngine_Object__get_name(clip, 0LL);
          UnityEngine_Animation__Play_49744236(v29, v31, 0LL);
          v32 = that->fields.mAnimation;
          if ( v32 )
          {
            v33 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v32, 0LL);
            if ( v33 )
            {
              v34 = UnityEngine_Object__get_name(v33, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v32, v34, 0LL);
              this->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = (BattleServantConfConponent_o *)&this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
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
  UnityEngine_AnimationState_o *mAnimState; // x0
  float totalTime; // s8
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v14; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v16; // x0
  int32_t v17; // w1

  if ( (byte_40F7651 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7651 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( !that )
      goto LABEL_36;
    that->fields.isSkip = 1;
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_36;
    UnityEngine_AnimationState__set_normalizedTime(mAnimState, 1.0, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v10 = that->fields.mSimpleAnimation;
    if ( v10 )
    {
      monitor = (UnityEngine_Object_o *)v10[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        if ( SimpleAnimation__IsPlaying(v10, name, 0LL) )
          return;
LABEL_32:
        if ( that->fields.isDispNum )
          v17 = 2;
        else
          v17 = 3;
        ServantRewardAction__SetState(that, v17, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v14 = that->fields.mAnimation;
    if ( v14 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        v16 = UnityEngine_Object__get_name(clip, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v14, v16, 0LL) )
          return;
        goto LABEL_32;
      }
    }
LABEL_36:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_40F7652 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v8);
    sub_B16FFC(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v9);
    byte_40F7652 = 1;
  }
  v10 = sub_B170CC(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(
    (ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)that, v11, v12, v13, v14, v15, v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v24, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_410669A & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v4);
    byte_410669A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                              CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                              v6,
                                                              v7,
                                                              v8,
                                                              v9);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v13 )
LABEL_8:
    sub_B170D4();
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v13, mServantId, _9__1, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x19
  _DWORD *v22; // x8
  int32_t v23; // w0
  int32_t SvtVoiceId; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantVoiceMaster_o *v27; // x22
  UserServantEntity_o *v28; // x0
  bool IsEventJoin; // w0
  int32_t v30; // w1
  ServantVoiceEntity_o *v31; // x0
  ServantVoiceEntity_o *v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **SummonScriptId; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  ServantVoiceMaster_o *v51; // x0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  int v53; // w22
  System_Action_o *v54; // x21
  UICharaGraphTexture_o *v55; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7653 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, rewardAction);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantVoiceMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v12);
    sub_B16FFC(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v13);
    byte_40F7653 = 1;
  }
  entity = 0LL;
  v14 = sub_B170CC(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, rewardAction, method, v3, v4);
  ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(
    (ServantRewardAction_StateTalk___c__DisplayClass0_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 16) = rewardAction;
  v21 = v14 + 16;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)rewardAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = *(_DWORD **)(v14 + 16);
  if ( !v22 )
    goto LABEL_33;
  v23 = v22[16];
  *(_DWORD *)(v14 + 24) = v23;
  *(_DWORD *)(v14 + 28) = v22[17];
  *(_BYTE *)(v14 + 32) = (v22[18] & 8) != 0;
  *(_BYTE *)(v14 + 33) = v22[18] & 1;
  *(_BYTE *)(v14 + 34) = (v22[18] & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v23, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !*(_QWORD *)v21 )
    goto LABEL_33;
  v27 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster;
  v28 = *(UserServantEntity_o **)(*(_QWORD *)v21 + 256LL);
  if ( !v28 )
    goto LABEL_33;
  IsEventJoin = UserServantEntity__IsEventJoin(v28, 0LL);
  if ( !v27 )
    goto LABEL_33;
  if ( IsEventJoin )
    v30 = 4;
  else
    v30 = 3;
  v31 = ServantVoiceMaster__getEntity(v27, v30, SvtVoiceId, *(_DWORD *)(v14 + 28), 0LL);
  *(_QWORD *)(v14 + 40) = 0LL;
  v32 = v31;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), 0LL, v33, v34, v35, v36, v37, v38);
  if ( v32 )
  {
    SummonScriptId = (System_Int32_array **)ServantVoiceEntity__GetSummonScriptId(v32, SvtVoiceId, 0LL);
    *(_QWORD *)(v14 + 40) = SummonScriptId;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), SummonScriptId, v40, v41, v42, v43, v44, v45);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         *(_DWORD *)(v14 + 24),
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v51 = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !v51 )
      goto LABEL_33;
    SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(v51, *(_DWORD *)(v14 + 24), 0LL);
    if ( !entity )
      goto LABEL_33;
    v53 = (SvtEquipVoiceEntity != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v53 = 0;
  }
  v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v14,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v53 )
  {
    if ( *(_QWORD *)v21 )
    {
      v55 = *(UICharaGraphTexture_o **)(*(_QWORD *)v21 + 248LL);
      if ( v55 )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout(v55, 0.5, v54, 0LL);
        goto LABEL_31;
      }
    }
LABEL_33:
    sub_B170D4();
  }
  ActionExtensions__Call(v54, 0LL);
LABEL_31:
  if ( !*(_QWORD *)v21 )
    goto LABEL_33;
  *(_DWORD *)(*(_QWORD *)v21 + 264LL) = 0;
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
  __int64 v8; // x3
  __int64 v9; // x4
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v13; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_410669B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v3);
    sub_B16FFC(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v4);
    byte_410669B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v13 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v13 )
LABEL_8:
    sub_B170D4();
  ScriptManager__PlayGacha_17680224(
    v13,
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
    sub_B170D4();
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

  if ( (byte_40F7656 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_40F7656 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isWaitCloseDialog = 0;
}


void __fastcall ServantRewardAction_StateTouchWait__begin(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
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
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UserServantEntity_o *userSvtEntity; // x0
  System_String_o *v19; // x20
  EventServantEntity_o *EventServant_21459540; // x0
  EventServantEntity_o *v21; // x22
  System_String_o *v22; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  CommonUI_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  NotificationDialog_ClickDelegate_o *v36; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_int__o v38; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o v41; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+90h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v45; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v48; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  if ( (byte_40F7654 & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, that);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v8);
    sub_B16FFC(&Method_System_Nullable_int___ctor__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v12);
    sub_B16FFC(&StringLiteral_12409, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    sub_B16FFC(&StringLiteral_12408, v15);
    byte_40F7654 = 1;
  }
  entity = 0LL;
  this->fields.isWaitCloseDialog = 0;
  if ( !that )
    goto LABEL_28;
  mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo;
  if ( !mScreenTouchInfo )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( that->fields.mSvtType == 12 && (that->fields.mPlayFlag & 0x10) != 0 )
  {
    userSvtEntity = that->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_28;
    v19 = (System_String_o *)StringLiteral_1;
    EventServant_21459540 = UserServantEntity__getEventServant_21459540(userSvtEntity, 1, 0LL);
    if ( EventServant_21459540
      && (v21 = EventServant_21459540,
          v22 = EventServantEntity__GetGetMessage(EventServant_21459540, 0LL),
          !System_String__IsNullOrEmpty(v22, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v21, 0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_21;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12408, 0LL);
      if ( !entity )
        goto LABEL_28;
      v26 = v25;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0LL);
      Message = System_String__Format(v26, Name, 0LL);
    }
    v19 = Message;
LABEL_21:
    if ( System_String__IsNullOrEmpty(v19, 0LL) )
      return;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12409, 0LL);
    this->fields.isWaitCloseDialog = 1;
    v30 = v29;
    v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                  NotificationDialog_ClickDelegate_TypeInfo,
                                                  v32,
                                                  v33,
                                                  v34,
                                                  v35);
    NotificationDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    v45 = (System_Nullable_float__o)&v41;
    v41 = 0LL;
    System_Nullable_float____ctor(v45, 8.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_296877C *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    v48 = (System_Nullable_int__o)&v38;
    v38 = 0LL;
    System_Nullable_int____ctor(v48, 217, (const MethodInfo_296877C *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_296877C *)Method_System_Nullable_int___ctor__);
    if ( v31 )
    {
      CommonUI__OpenNotificationDialog_18239760(
        v31,
        v30,
        v19,
        v36,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v41,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v38,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_28:
    sub_B170D4();
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
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w1
  int32_t mSvtType; // w8
  ServantVoiceMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40F7655 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, that);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantVoiceMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40F7655 = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isTouchPush(0LL) )
    {
      if ( that )
      {
        mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo;
        if ( mScreenTouchInfo )
        {
          gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            if ( that->fields.mIsCommandCode )
            {
LABEL_12:
              v9 = 5;
LABEL_13:
              ServantRewardAction__SetState(that, v9, 0LL);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v9 = 7;
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
            Master_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( Master_WarQuestSelectionMaster )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      Master_WarQuestSelectionMaster,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_12;
LABEL_24:
              v9 = 4;
              goto LABEL_13;
            }
          }
        }
      }
      sub_B170D4();
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7645 & 1) == 0 )
  {
    sub_B16FFC(&ServantRewardAction___c_TypeInfo, v1);
    byte_40F7645 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantRewardAction___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantRewardAction___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}