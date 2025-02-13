void __fastcall ScrPlayerBP___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  __int64 v7; // x0
  int64_t v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x19
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct ScrPlayerBP_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int v37; // w8
  struct ScrPlayerBP_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct ScrPlayerBP_StaticFields *v45; // x0

  if ( (byte_4BD96BD & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&ScrPlayerBP_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_23959/*"status_raid_frame_old"*/);
    sub_1C21E38(&StringLiteral_16266/*"[ffb505]"*/);
    sub_1C21E38(&StringLiteral_23958/*"status_raid_frame"*/);
    byte_4BD96BD = 1;
  }
  ScrPlayerBP_TypeInfo->static_fields->RP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16266/*"[ffb505]"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ScrPlayerBP_TypeInfo->static_fields,
    StringLiteral_16266/*"[ffb505]"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  ScrPlayerBP_TypeInfo->static_fields->RP_COUNT_STOP = 99;
  v7 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v7 )
    goto LABEL_13;
  v15 = v7;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  v16 = StringLiteral_23959/*"status_raid_frame_old"*/;
  *(_QWORD *)(v7 + 32) = StringLiteral_23959/*"status_raid_frame_old"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), v16, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_12;
  v23 = StringLiteral_23958/*"status_raid_frame"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_23958/*"status_raid_frame"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 40), v23, v17, v18, v19, v20, v21, v22);
  static_fields = ScrPlayerBP_TypeInfo->static_fields;
  static_fields->RP_FRAME_SP = (struct System_String_array *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->RP_FRAME_SP, v15, v25, v26, v27, v28, v29, v30);
  v7 = sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v7 )
    goto LABEL_13;
  v37 = *(_DWORD *)(v7 + 24);
  v8 = v7;
  if ( !v37 || (*(_DWORD *)(v7 + 32) = 26, v37 == 1) )
LABEL_12:
    sub_1C2209C(v7, v8);
  *(_DWORD *)(v7 + 36) = 10;
  v38 = ScrPlayerBP_TypeInfo->static_fields;
  v38->RP_GRID_WIDTH = (struct System_Int32_array *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v38->RP_GRID_WIDTH, v8, v31, v32, v33, v34, v35, v36);
  v7 = sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v7 )
LABEL_13:
    sub_1C22094(v7, v8);
  v8 = v7;
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  *(_DWORD *)(v7 + 36) = 7;
  v45 = ScrPlayerBP_TypeInfo->static_fields;
  v45->RP_FRAME_DEPTH = (struct System_Int32_array *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v45->RP_FRAME_DEPTH, v8, v39, v40, v41, v42, v43, v44);
}


void __fastcall ScrPlayerBP___ctor(ScrPlayerBP_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD96BC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
    byte_4BD96BC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
  this->fields.raidPointComponents = (struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.raidPointComponents, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrPlayerBP__Awake(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  if ( !mRpRecoverBtnSp
    || (v5.fields.r = 1.0,
        v5.fields.g = 1.0,
        v5.fields.b = 1.0,
        v5.fields.a = 1.0,
        UIWidget__set_color(mRpRecoverBtnSp, v5, 0LL),
        (mRpRecoverBtnSp = (UIWidget_o *)this->fields.rpFrameR) == 0LL) )
  {
    sub_1C22094(mRpRecoverBtnSp, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRpRecoverBtnSp, 0LL);
  this->fields.initPosRpFrameR = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__GetTimeStr(ScrPlayerBP_o *this, int64_t time, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int v5; // w19
  int v6; // w22
  Il2CppObject *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  int v13; // [xsp+8h] [xbp-28h] BYREF
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  v5 = time;
  if ( (byte_4BD96BB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25414/*"{0:D}:{1:D2}"*/);
    byte_4BD96BB = 1;
  }
  v6 = v5 % 60;
  v14 = v5 / 60;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v13 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8, v9, v10);
  return System_String__Format_63129848((System_String_o *)StringLiteral_25414/*"{0:D}:{1:D2}"*/, v7, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerBP__SetRpRecoverBtnEnable(ScrPlayerBP_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  float v4; // s0
  float v5; // s3
  float v6; // s1
  float v7; // s2

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  v4 = 0.5;
  if ( is_enable )
    v4 = 1.0;
  if ( !mRpRecoverBtnSp )
    sub_1C22094(0LL, is_enable);
  v5 = 1.0;
  v6 = v4;
  v7 = v4;
  UIWidget__set_color(mRpRecoverBtnSp, *(UnityEngine_Color_o *)&v4, 0LL);
}


void __fastcall ScrPlayerBP__SetupDispRaidPoint(
        ScrPlayerBP_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PlayerStatusRaidPointComponent_o *rpFrameR; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  BalanceConfig_c *v13; // x0
  struct UIGrid_o *rpGrid; // x24
  __int64 BpExpresssionType; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BalanceConfig_c *v17; // x0
  int UerGameRpMax; // w24
  int v19; // w21
  Il2CppObject *raidPointPrefab; // x22
  PlayerStatusRaidPointComponent_o *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  UISprite_o *rpFrameL; // x21
  __int64 v34; // x8
  struct System_String_array *RP_FRAME_SP; // x8
  struct System_Int32_array *RP_FRAME_DEPTH; // x8
  struct System_Int32_array *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  struct UIGrid_o *v39; // x8
  struct UIGrid_o *v40; // x8

  if ( (byte_4BD96B8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ScrPlayerBP_TypeInfo);
    byte_4BD96B8 = 1;
  }
  this->fields.userGameEntity = userGame;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)userGame,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  raidPointComponents = this->fields.raidPointComponents;
  if ( !raidPointComponents )
    goto LABEL_51;
  if ( raidPointComponents->fields._size <= 0 )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    rpGrid = this->fields.rpGrid;
    BpExpresssionType = v13->static_fields->BpExpresssionType;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
      rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    }
    m_CancellationTokenSource = rpFrameR[2].fields.raidFrameSp->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
      goto LABEL_52;
    if ( !rpGrid )
      goto LABEL_51;
    rpGrid->fields.cellWidth = (float)*(&m_CancellationTokenSource->fields._state + BpExpresssionType);
    if ( !this->fields.userGameEntity )
      goto LABEL_51;
    if ( !byte_4BD9335 )
    {
      sub_1C21E38(&BalanceConfig_TypeInfo);
      byte_4BD9335 = 1;
    }
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    UerGameRpMax = v17->static_fields->UerGameRpMax;
    if ( UerGameRpMax >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        raidPointPrefab = (Il2CppObject *)this->fields.raidPointPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                         raidPointPrefab,
                                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
        if ( !rpFrameR )
          break;
        v21 = rpFrameR;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.rpGrid, 0LL);
        PlayerStatusRaidPointComponent__Setup(v21, ++v19, BpExpresssionType, 0LL);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.raidPointComponents;
        if ( !rpFrameR )
          break;
        v29 = *(_QWORD *)&rpFrameR->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__;
        ++HIDWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( !v29 )
          break;
        m_CancellationTokenSource_low = SLODWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rpFrameR,
            (Il2CppObject *)v21,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * m_CancellationTokenSource_low;
          LODWORD(rpFrameR->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v32 + 32) = v21;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v21, v23, v24, v25, v26, v27, v28);
        }
        if ( UerGameRpMax == v19 )
          goto LABEL_28;
      }
LABEL_51:
      sub_1C22094(rpFrameR, v11);
    }
LABEL_28:
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpGrid;
    if ( !rpFrameR )
      goto LABEL_51;
    ((void (__fastcall *)(PlayerStatusRaidPointComponent_o *, Il2CppClass *))rpFrameR->klass[1]._1.castClass)(
      rpFrameR,
      rpFrameR->klass[1]._1.declaringType);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    rpFrameL = this->fields.rpFrameL;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
      rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    }
    v34 = *(_QWORD *)&rpFrameR[2].fields.raidFrameSp->fields.m_CachedPtr;
    if ( !v34 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v34 + 24) )
      goto LABEL_52;
    if ( !rpFrameL )
      goto LABEL_51;
    UISprite__set_spriteName(rpFrameL, *(System_String_o **)(v34 + 8 * BpExpresssionType + 32), 0LL);
    RP_FRAME_SP = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_SP;
    if ( !RP_FRAME_SP )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= RP_FRAME_SP->max_length )
      goto LABEL_52;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)rpFrameR, RP_FRAME_SP->m_Items[BpExpresssionType], 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameL;
    if ( !rpFrameR )
      goto LABEL_51;
    ((void (__fastcall *)(PlayerStatusRaidPointComponent_o *, void *))rpFrameR->klass[2]._1.typeMetadataHandle)(
      rpFrameR,
      rpFrameR->klass[2]._1.interopData);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)((__int64 (__fastcall *)(PlayerStatusRaidPointComponent_o *, void *))rpFrameR->klass[2]._1.typeMetadataHandle)(
                                                     rpFrameR,
                                                     rpFrameR->klass[2]._1.interopData);
    RP_FRAME_DEPTH = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !RP_FRAME_DEPTH )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= RP_FRAME_DEPTH->max_length )
      goto LABEL_52;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameL;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, RP_FRAME_DEPTH->m_Items[BpExpresssionType + 1], 0LL);
    v37 = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !v37 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= v37->max_length )
LABEL_52:
      sub_1C2209C(rpFrameR, v11);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, v37->m_Items[BpExpresssionType + 1], 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
    GameObjectExtensions__SetLocalPositionX(v38, this->fields.initPosRpFrameR, 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v39 = this->fields.rpGrid;
    if ( !v39 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      v39->fields.cellWidth * (float)UerGameRpMax,
      0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.mcRpTimeP;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v40 = this->fields.rpGrid;
    if ( !v40 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      (float)(v40->fields.cellWidth * 0.5) * (float)UerGameRpMax,
      0LL);
  }
}


void __fastcall ScrPlayerBP__UpdateRpStatus(ScrPlayerBP_o *this, const MethodInfo *method)
{
  void *userGameEntity; // x0
  int RP_COUNT_STOP; // w20
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ScrPlayerBP_c *v7; // x0
  struct ScrPlayerBP_StaticFields *v8; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  UILabel_o *mcRpStrP; // x20
  System_String_o *v12; // x22
  ScrPlayerBP_c *v13; // x0
  int v14; // w20
  int v15; // w8
  bool v16; // w23
  int v17; // w22
  int v18; // w8
  int v19; // w22
  int32_t v20; // w20
  __int64 v21; // x8
  __int64 v22; // x8
  const MethodInfo *v23; // x1
  int32_t UerGameRpMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD96B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
    sub_1C21E38(&ScrPlayerBP_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16106/*"[-]/"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BD96B9 = 1;
  }
  v25 = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_46;
  userGameEntity = (void *)UserGameEntity__getRp((UserGameEntity_o *)userGameEntity, 0LL);
  if ( !this->fields.userGameEntity )
    goto LABEL_46;
  RP_COUNT_STOP = (int)userGameEntity;
  if ( !byte_4BD9335 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD9335 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = ScrPlayerBP_TypeInfo;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
    v7 = ScrPlayerBP_TypeInfo;
  }
  v8 = v7->static_fields;
  if ( RP_COUNT_STOP > v8->RP_COUNT_STOP )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v8 = ScrPlayerBP_TypeInfo->static_fields;
    }
    RP_COUNT_STOP = v8->RP_COUNT_STOP;
  }
  v25 = RP_COUNT_STOP;
  v9 = System_Int32__ToString((int32_t)&v25, 0LL);
  v10 = System_Int32__ToString((int32_t)&UerGameRpMax, 0LL);
  mcRpStrP = this->fields.mcRpStrP;
  v12 = v10;
  if ( v25 <= UerGameRpMax )
  {
    userGameEntity = System_String__Concat_63126736(v9, (System_String_o *)StringLiteral_1123/*"/"*/, v10, 0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  else
  {
    v13 = ScrPlayerBP_TypeInfo;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
      v13 = ScrPlayerBP_TypeInfo;
    }
    userGameEntity = System_String__Concat_63128740(
                       v13->static_fields->RP_OVER_TXT_COLOR_STR,
                       v9,
                       (System_String_o *)StringLiteral_16106/*"[-]/"*/,
                       v12,
                       0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  UILabel__set_text(mcRpStrP, (System_String_o *)userGameEntity, 0LL);
  userGameEntity = this->fields.raidPointComponents;
  if ( !userGameEntity )
    goto LABEL_46;
  v14 = *((_DWORD *)userGameEntity + 6);
  v15 = v25;
  if ( v14 >= 1 )
  {
    v16 = v25 > 0;
    v17 = 1;
    do
    {
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v17 - 1,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        break;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, v16, 0LL);
      v15 = v25;
      if ( v14 == v17 )
        goto LABEL_28;
      userGameEntity = this->fields.raidPointComponents;
      v16 = v17++ < v25;
    }
    while ( userGameEntity );
LABEL_46:
    sub_1C22094(userGameEntity, method);
  }
LABEL_28:
  v18 = v15 - v14;
  if ( v18 <= v14 )
    v19 = v18;
  else
    v19 = v14;
  if ( v19 >= 1 )
  {
    v20 = 0;
    do
    {
      userGameEntity = this->fields.raidPointComponents;
      if ( !userGameEntity )
        goto LABEL_46;
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v20,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        goto LABEL_46;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, 2, 0LL);
    }
    while ( v19 != ++v20 );
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  userGameEntity = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    userGameEntity = TerminalSceneComponent_TypeInfo;
  }
  v21 = **((_QWORD **)userGameEntity + 23);
  if ( !v21 )
    goto LABEL_46;
  v22 = *(_QWORD *)(v21 + 256);
  if ( !v22 )
    goto LABEL_46;
  userGameEntity = *(void **)(v22 + 296);
  if ( !userGameEntity )
    goto LABEL_46;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)userGameEntity, 0LL);
  ScrPlayerBP__UpdateRpTimeStr(this, v23);
}


void __fastcall ScrPlayerBP__UpdateRpTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UILabel_o *mcRpTimeP; // x19
  System_String_o *RpRecoverTimeStr; // x0
  __int64 v4; // x1

  mcRpTimeP = this->fields.mcRpTimeP;
  RpRecoverTimeStr = ScrPlayerBP__mfGetRpRecoverTimeStr(this, method);
  if ( !mcRpTimeP )
    sub_1C22094(RpRecoverTimeStr, v4);
  UILabel__set_text(mcRpTimeP, RpRecoverTimeStr, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__mfGetRpRecoverTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  ScrPlayerBP_o *RpNextRecoverTime; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD96BA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD96BA = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_8;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( UserGameEntity__IsNeedRecoverRp(userGameEntity, 0LL) )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      RpNextRecoverTime = (ScrPlayerBP_o *)UserGameEntity__getRpNextRecoverTime(userGameEntity, 0LL);
      return ScrPlayerBP__GetTimeStr(RpNextRecoverTime, (int64_t)RpNextRecoverTime, v6);
    }
LABEL_8:
    sub_1C22094(userGameEntity, method);
  }
  return v4;
}