void __fastcall ScrPlayerBP___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x19
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  struct ScrPlayerBP_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w8
  struct ScrPlayerBP_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ScrPlayerBP_StaticFields *v51; // x0

  if ( (byte_4BFA8A9 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, v1);
    sub_1C2E12C(&ScrPlayerBP_TypeInfo, v8);
    sub_1C2E12C(&string___TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_23981/*"status_raid_frame_old"*/, v10);
    sub_1C2E12C(&StringLiteral_16279/*"[ffb505]"*/, v11);
    sub_1C2E12C(&StringLiteral_23980/*"status_raid_frame"*/, v12);
    byte_4BFA8A9 = 1;
  }
  ScrPlayerBP_TypeInfo->static_fields->RP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16279/*"[ffb505]"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ScrPlayerBP_TypeInfo->static_fields,
    StringLiteral_16279/*"[ffb505]"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerBP_TypeInfo->static_fields->RP_COUNT_STOP = 99;
  v13 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v13 )
    goto LABEL_13;
  v21 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_12;
  v22 = StringLiteral_23981/*"status_raid_frame_old"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_23981/*"status_raid_frame_old"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 32), v22, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_12;
  v29 = StringLiteral_23980/*"status_raid_frame"*/;
  *(_QWORD *)(v21 + 40) = StringLiteral_23980/*"status_raid_frame"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 40), v29, v23, v24, v25, v26, v27, v28);
  static_fields = ScrPlayerBP_TypeInfo->static_fields;
  static_fields->RP_FRAME_SP = (struct System_String_array *)v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->RP_FRAME_SP, v21, v31, v32, v33, v34, v35, v36);
  v13 = sub_1C2E1D4(int___TypeInfo, 2LL);
  if ( !v13 )
    goto LABEL_13;
  v43 = *(_DWORD *)(v13 + 24);
  v14 = v13;
  if ( !v43 || (*(_DWORD *)(v13 + 32) = 26, v43 == 1) )
LABEL_12:
    sub_1C2E390(v13, v14);
  *(_DWORD *)(v13 + 36) = 10;
  v44 = ScrPlayerBP_TypeInfo->static_fields;
  v44->RP_GRID_WIDTH = (struct System_Int32_array *)v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v44->RP_GRID_WIDTH, v14, v37, v38, v39, v40, v41, v42);
  v13 = sub_1C2E1D4(int___TypeInfo, 2LL);
  if ( !v13 )
LABEL_13:
    sub_1C2E388(v13, v14);
  v14 = v13;
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_12;
  *(_DWORD *)(v13 + 36) = 7;
  v51 = ScrPlayerBP_TypeInfo->static_fields;
  v51->RP_FRAME_DEPTH = (struct System_Int32_array *)v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v51->RP_FRAME_DEPTH, v14, v45, v46, v47, v48, v49, v50);
}


void __fastcall ScrPlayerBP___ctor(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFA8A8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo, v3);
    byte_4BFA8A8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
  this->fields.raidPointComponents = (struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.raidPointComponents, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1C2E388(mRpRecoverBtnSp, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRpRecoverBtnSp, 0LL);
  this->fields.initPosRpFrameR = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__GetTimeStr(ScrPlayerBP_o *this, int64_t time, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int v5; // w19
  __int64 v6; // x1
  int v7; // w22
  Il2CppObject *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  v5 = time;
  if ( (byte_4BFA8A7 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, time);
    sub_1C2E12C(&StringLiteral_25440/*"{0:D}:{1:D2}"*/, v6);
    byte_4BFA8A7 = 1;
  }
  v7 = v5 % 60;
  v15 = v5 / 60;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4);
  v14 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_63249956((System_String_o *)StringLiteral_25440/*"{0:D}:{1:D2}"*/, v8, v12, 0LL);
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
    sub_1C2E388(0LL, is_enable);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PlayerStatusRaidPointComponent_o *rpFrameR; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  BalanceConfig_c *v18; // x0
  struct UIGrid_o *rpGrid; // x24
  __int64 BpExpresssionType; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BalanceConfig_c *v22; // x0
  int UerGameRpMax; // w24
  int v24; // w21
  Il2CppObject *raidPointPrefab; // x22
  PlayerStatusRaidPointComponent_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8
  UISprite_o *rpFrameL; // x21
  __int64 v39; // x8
  struct System_String_array *RP_FRAME_SP; // x8
  struct System_Int32_array *RP_FRAME_DEPTH; // x8
  struct System_Int32_array *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  struct UIGrid_o *v44; // x8
  struct UIGrid_o *v45; // x8

  if ( (byte_4BFA8A4 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, userGame);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, v11);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&ScrPlayerBP_TypeInfo, v14);
    byte_4BFA8A4 = 1;
  }
  this->fields.userGameEntity = userGame;
  sub_1C2E0D0(
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
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    rpGrid = this->fields.rpGrid;
    BpExpresssionType = v18->static_fields->BpExpresssionType;
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
    if ( !byte_4BFA51F )
    {
      sub_1C2E12C(&BalanceConfig_TypeInfo, v16);
      byte_4BFA51F = 1;
    }
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    UerGameRpMax = v22->static_fields->UerGameRpMax;
    if ( UerGameRpMax >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        raidPointPrefab = (Il2CppObject *)this->fields.raidPointPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                         raidPointPrefab,
                                                         (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
        if ( !rpFrameR )
          break;
        v26 = rpFrameR;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.rpGrid, 0LL);
        PlayerStatusRaidPointComponent__Setup(v26, ++v24, BpExpresssionType, 0LL);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.raidPointComponents;
        if ( !rpFrameR )
          break;
        v34 = *(_QWORD *)&rpFrameR->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__;
        ++HIDWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( !v34 )
          break;
        m_CancellationTokenSource_low = SLODWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rpFrameR,
            (Il2CppObject *)v26,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(rpFrameR->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = v26;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v26, v28, v29, v30, v31, v32, v33);
        }
        if ( UerGameRpMax == v24 )
          goto LABEL_28;
      }
LABEL_51:
      sub_1C2E388(rpFrameR, v16);
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
    v39 = *(_QWORD *)&rpFrameR[2].fields.raidFrameSp->fields.m_CachedPtr;
    if ( !v39 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v39 + 24) )
      goto LABEL_52;
    if ( !rpFrameL )
      goto LABEL_51;
    UISprite__set_spriteName(rpFrameL, *(System_String_o **)(v39 + 8 * BpExpresssionType + 32), 0LL);
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
    v42 = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !v42 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= v42->max_length )
LABEL_52:
      sub_1C2E390(rpFrameR, v16);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, v42->m_Items[BpExpresssionType + 1], 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
    GameObjectExtensions__SetLocalPositionX(v43, this->fields.initPosRpFrameR, 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v44 = this->fields.rpGrid;
    if ( !v44 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      v44->fields.cellWidth * (float)UerGameRpMax,
      0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.mcRpTimeP;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v45 = this->fields.rpGrid;
    if ( !v45 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      (float)(v45->fields.cellWidth * 0.5) * (float)UerGameRpMax,
      0LL);
  }
}


void __fastcall ScrPlayerBP__UpdateRpStatus(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *userGameEntity; // x0
  int RP_COUNT_STOP; // w20
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ScrPlayerBP_c *v12; // x0
  struct ScrPlayerBP_StaticFields *v13; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  UILabel_o *mcRpStrP; // x20
  System_String_o *v17; // x22
  ScrPlayerBP_c *v18; // x0
  int v19; // w20
  int v20; // w8
  bool v21; // w23
  int v22; // w22
  int v23; // w8
  int v24; // w22
  int32_t v25; // w20
  __int64 v26; // x8
  __int64 v27; // x8
  const MethodInfo *v28; // x1
  int32_t UerGameRpMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFA8A5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__, v3);
    sub_1C2E12C(&ScrPlayerBP_TypeInfo, v4);
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_16119/*"[-]/"*/, v6);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v7);
    byte_4BFA8A5 = 1;
  }
  v30 = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_46;
  userGameEntity = (void *)UserGameEntity__getRp((UserGameEntity_o *)userGameEntity, 0LL);
  if ( !this->fields.userGameEntity )
    goto LABEL_46;
  RP_COUNT_STOP = (int)userGameEntity;
  if ( !byte_4BFA51F )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    byte_4BFA51F = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  v12 = ScrPlayerBP_TypeInfo;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
    v12 = ScrPlayerBP_TypeInfo;
  }
  v13 = v12->static_fields;
  if ( RP_COUNT_STOP > v13->RP_COUNT_STOP )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v13 = ScrPlayerBP_TypeInfo->static_fields;
    }
    RP_COUNT_STOP = v13->RP_COUNT_STOP;
  }
  v30 = RP_COUNT_STOP;
  v14 = System_Int32__ToString((int32_t)&v30, 0LL);
  v15 = System_Int32__ToString((int32_t)&UerGameRpMax, 0LL);
  mcRpStrP = this->fields.mcRpStrP;
  v17 = v15;
  if ( v30 <= UerGameRpMax )
  {
    userGameEntity = System_String__Concat_63246844(v14, (System_String_o *)StringLiteral_1102/*"/"*/, v15, 0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  else
  {
    v18 = ScrPlayerBP_TypeInfo;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo);
      v18 = ScrPlayerBP_TypeInfo;
    }
    userGameEntity = System_String__Concat_63248848(
                       v18->static_fields->RP_OVER_TXT_COLOR_STR,
                       v14,
                       (System_String_o *)StringLiteral_16119/*"[-]/"*/,
                       v17,
                       0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  UILabel__set_text(mcRpStrP, (System_String_o *)userGameEntity, 0LL);
  userGameEntity = this->fields.raidPointComponents;
  if ( !userGameEntity )
    goto LABEL_46;
  v19 = *((_DWORD *)userGameEntity + 6);
  v20 = v30;
  if ( v19 >= 1 )
  {
    v21 = v30 > 0;
    v22 = 1;
    do
    {
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v22 - 1,
                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        break;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, v21, 0LL);
      v20 = v30;
      if ( v19 == v22 )
        goto LABEL_28;
      userGameEntity = this->fields.raidPointComponents;
      v21 = v22++ < v30;
    }
    while ( userGameEntity );
LABEL_46:
    sub_1C2E388(userGameEntity, method);
  }
LABEL_28:
  v23 = v20 - v19;
  if ( v23 <= v19 )
    v24 = v23;
  else
    v24 = v19;
  if ( v24 >= 1 )
  {
    v25 = 0;
    do
    {
      userGameEntity = this->fields.raidPointComponents;
      if ( !userGameEntity )
        goto LABEL_46;
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v25,
                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        goto LABEL_46;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, 2, 0LL);
    }
    while ( v24 != ++v25 );
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BF8363 )
  {
    sub_1C2E12C(&TerminalSceneComponent_TypeInfo, method);
    byte_4BF8363 = 1;
  }
  userGameEntity = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    userGameEntity = TerminalSceneComponent_TypeInfo;
  }
  v26 = **((_QWORD **)userGameEntity + 23);
  if ( !v26 )
    goto LABEL_46;
  v27 = *(_QWORD *)(v26 + 256);
  if ( !v27 )
    goto LABEL_46;
  userGameEntity = *(void **)(v27 + 296);
  if ( !userGameEntity )
    goto LABEL_46;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)userGameEntity, 0LL);
  ScrPlayerBP__UpdateRpTimeStr(this, v28);
}


void __fastcall ScrPlayerBP__UpdateRpTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UILabel_o *mcRpTimeP; // x19
  System_String_o *RpRecoverTimeStr; // x0
  __int64 v4; // x1

  mcRpTimeP = this->fields.mcRpTimeP;
  RpRecoverTimeStr = ScrPlayerBP__mfGetRpRecoverTimeStr(this, method);
  if ( !mcRpTimeP )
    sub_1C2E388(RpRecoverTimeStr, v4);
  UILabel__set_text(mcRpTimeP, RpRecoverTimeStr, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__mfGetRpRecoverTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  ScrPlayerBP_o *RpNextRecoverTime; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BFA8A6 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFA8A6 = 1;
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
    sub_1C2E388(userGameEntity, method);
  }
  return v4;
}