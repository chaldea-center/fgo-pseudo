void ScrPlayerBP___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  Il2CppClass *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x19
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct ScrPlayerBP_StaticFields *static_fields; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int v39; // w8
  __int64 v40; // x1
  ScrPlayerBP_c *v41; // x8
  struct ScrPlayerBP_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Int32_array *v49; // x1
  struct ScrPlayerBP_StaticFields *v50; // x0

  if ( (byte_596D65E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&ScrPlayerBP_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_24954/*"status_raid_frame_old"*/);
    sub_2213A60(&StringLiteral_16615/*"[ffb505]"*/);
    sub_2213A60(&StringLiteral_24953/*"status_raid_frame"*/);
    byte_596D65E = 1;
  }
  v7 = StringLiteral_16615/*"[ffb505]"*/;
  ScrPlayerBP_TypeInfo->static_fields->RP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16615/*"[ffb505]"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)ScrPlayerBP_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = string___TypeInfo;
  ScrPlayerBP_TypeInfo->static_fields->RP_COUNT_STOP = 99;
  v9 = sub_2213B20(v8, 2);
  if ( !v9 )
    goto LABEL_13;
  v17 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_12;
  v18 = StringLiteral_24954/*"status_raid_frame_old"*/;
  *(_QWORD *)(v9 + 32) = StringLiteral_24954/*"status_raid_frame_old"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), v18, v11, v12, v13, v14, v15, v16);
  if ( (*(_DWORD *)(v17 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v25 = StringLiteral_24953/*"status_raid_frame"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_24953/*"status_raid_frame"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 40), v25, v19, v20, v21, v22, v23, v24);
  static_fields = ScrPlayerBP_TypeInfo->static_fields;
  static_fields->RP_FRAME_SP = (struct System_String_array *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->RP_FRAME_SP, v17, v27, v28, v29, v30, v31, v32);
  v9 = sub_2213B20(int___TypeInfo, 2);
  if ( !v9 )
    goto LABEL_13;
  v39 = *(_DWORD *)(v9 + 24);
  v40 = v9;
  if ( !v39 || (*(_DWORD *)(v9 + 32) = 26, v39 == 1) )
LABEL_12:
    sub_2213CE4(v9);
  v41 = ScrPlayerBP_TypeInfo;
  *(_DWORD *)(v9 + 36) = 10;
  v42 = v41->static_fields;
  v42->RP_GRID_WIDTH = (struct System_Int32_array *)v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->RP_GRID_WIDTH, v40, v33, v34, v35, v36, v37, v38);
  v9 = sub_2213B20(int___TypeInfo, 2);
  if ( !v9 )
LABEL_13:
    sub_2213CDC(v9, v10);
  v49 = (struct System_Int32_array *)v9;
  if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v50 = ScrPlayerBP_TypeInfo->static_fields;
  v49->m_Items[1] = 7;
  v50->RP_FRAME_DEPTH = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->RP_FRAME_DEPTH, (int32_t)v49, v43, v44, v45, v46, v47, v48);
}


void ScrPlayerBP___ctor(ScrPlayerBP_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596D65D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
    byte_596D65D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
  this->fields.raidPointComponents = (struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.raidPointComponents,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrPlayerBP__Awake(ScrPlayerBP_o *this, const MethodInfo *method)
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
        UIWidget__set_color(mRpRecoverBtnSp, v5, 0),
        (mRpRecoverBtnSp = (UIWidget_o *)this->fields.rpFrameR) == 0) )
  {
    sub_2213CDC(mRpRecoverBtnSp, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRpRecoverBtnSp, 0);
  this->fields.initPosRpFrameR = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
}


System_String_o *ScrPlayerBP__GetTimeStr(ScrPlayerBP_o *this, int64_t time, const MethodInfo *method)
{
  int v3; // w19
  int v4; // w22
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x0
  int v8; // [xsp+8h] [xbp-28h] BYREF
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  v3 = time;
  if ( (byte_596D65C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26473/*"{0:D}:{1:D2}"*/);
    byte_596D65C = 1;
  }
  v4 = v3 % 60;
  v9 = v3 / 60;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
  v8 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26473/*"{0:D}:{1:D2}"*/, v5, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerBP__SetRpRecoverBtnEnable(ScrPlayerBP_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  float v4; // s0 OVERLAPPED
  float v5; // s3
  float v6; // s1
  float v7; // s2

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  if ( !mRpRecoverBtnSp )
    sub_2213CDC(0, is_enable);
  v4 = 0.5;
  v5 = 1.0;
  if ( is_enable )
    v4 = 1.0;
  v6 = v4;
  v7 = v4;
  UIWidget__set_color(mRpRecoverBtnSp, *(UnityEngine_Color_o *)&v4, 0);
}


void ScrPlayerBP__SetupDispRaidPoint(ScrPlayerBP_o *this, UserGameEntity_o *userGame, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  PlayerStatusRaidPointComponent_o *rpFrameR; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  struct UIGrid_o *rpGrid; // x24
  ScrPlayerBP_c *v15; // x8
  __int64 m_CancellationTokenSource_high; // x20
  struct System_Int32_array *RP_GRID_WIDTH; // x8
  int v18; // s0
  struct UserGameEntity_o *userGameEntity; // x8
  BalanceConfig_c *v20; // x0
  int UerGameRpMax; // w24
  int v22; // w21
  Il2CppObject *raidPointPrefab; // x22
  PlayerStatusRaidPointComponent_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v35; // x8
  __int64 v36; // x2
  UISprite_o *rpFrameL; // x21
  intptr_t v38; // x8
  struct System_String_array *RP_FRAME_SP; // x8
  struct System_Int32_array *RP_FRAME_DEPTH; // x8
  struct System_Int32_array *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  struct UIGrid_o *v43; // x8
  struct UIGrid_o *v44; // x8

  if ( (byte_596D659 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrPlayerBP_TypeInfo);
    byte_596D659 = 1;
  }
  this->fields.userGameEntity = userGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)userGame,
    (System_String_o *)method,
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
    rpFrameR = (PlayerStatusRaidPointComponent_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v12);
      rpFrameR = (PlayerStatusRaidPointComponent_o *)BalanceConfig_TypeInfo;
    }
    rpGrid = this->fields.rpGrid;
    v15 = ScrPlayerBP_TypeInfo;
    m_CancellationTokenSource_high = SHIDWORD(rpFrameR[2].fields.raidFrameSp[1].fields.m_CancellationTokenSource);
    if ( !*(&ScrPlayerBP_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v11, v12);
      v15 = ScrPlayerBP_TypeInfo;
    }
    RP_GRID_WIDTH = v15->static_fields->RP_GRID_WIDTH;
    if ( !RP_GRID_WIDTH )
      goto LABEL_51;
    if ( (unsigned int)m_CancellationTokenSource_high >= LODWORD(RP_GRID_WIDTH->max_length) )
      goto LABEL_52;
    if ( !rpGrid )
      goto LABEL_51;
    v18 = RP_GRID_WIDTH->m_Items[m_CancellationTokenSource_high];
    userGameEntity = this->fields.userGameEntity;
    rpGrid->fields.cellWidth = (float)v18;
    if ( !userGameEntity )
      goto LABEL_51;
    if ( !byte_596D268 )
    {
      sub_2213A60(&BalanceConfig_TypeInfo);
      byte_596D268 = 1;
    }
    v20 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v12);
      v20 = BalanceConfig_TypeInfo;
    }
    UerGameRpMax = v20->static_fields->UerGameRpMax;
    if ( UerGameRpMax >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        raidPointPrefab = (Il2CppObject *)this->fields.raidPointPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                         raidPointPrefab,
                                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
        if ( !rpFrameR )
          break;
        v24 = rpFrameR;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.rpGrid, 0);
        PlayerStatusRaidPointComponent__Setup(v24, ++v22, m_CancellationTokenSource_high, 0);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.raidPointComponents;
        if ( !rpFrameR )
          break;
        m_CachedPtr = rpFrameR->fields.m_CachedPtr;
        v33 = Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__;
        ++HIDWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rpFrameR,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(rpFrameR->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v35 + 32) = v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v24, v26, v27, v28, v29, v30, v31);
        }
        if ( UerGameRpMax == v22 )
          goto LABEL_28;
      }
LABEL_51:
      sub_2213CDC(rpFrameR, v11);
    }
LABEL_28:
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpGrid;
    if ( !rpFrameR )
      goto LABEL_51;
    ((void (__fastcall *)(PlayerStatusRaidPointComponent_o *, Il2CppClass *))rpFrameR->klass[1]._1.element_class)(
      rpFrameR,
      rpFrameR->klass[1]._1.castClass);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    rpFrameL = this->fields.rpFrameL;
    if ( !*(&ScrPlayerBP_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v11, v36);
      rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    }
    v38 = rpFrameR[2].fields.raidFrameSp->fields.m_CachedPtr;
    if ( !v38 )
      goto LABEL_51;
    if ( (unsigned int)m_CancellationTokenSource_high >= *(_DWORD *)(v38 + 24) )
      goto LABEL_52;
    if ( !rpFrameL )
      goto LABEL_51;
    UISprite__set_spriteName(rpFrameL, *(System_String_o **)(v38 + 8 * m_CancellationTokenSource_high + 32), 0);
    RP_FRAME_SP = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_SP;
    if ( !RP_FRAME_SP )
      goto LABEL_51;
    if ( (unsigned int)m_CancellationTokenSource_high >= LODWORD(RP_FRAME_SP->max_length) )
      goto LABEL_52;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)rpFrameR, RP_FRAME_SP->m_Items[m_CancellationTokenSource_high], 0);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameL;
    if ( !rpFrameR )
      goto LABEL_51;
    ((void (__fastcall *)(PlayerStatusRaidPointComponent_o *, void *))rpFrameR->klass[2]._1.parent)(
      rpFrameR,
      rpFrameR->klass[2]._1.generic_class);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)((__int64 (__fastcall *)(PlayerStatusRaidPointComponent_o *, void *))rpFrameR->klass[2]._1.parent)(
                                                     rpFrameR,
                                                     rpFrameR->klass[2]._1.generic_class);
    RP_FRAME_DEPTH = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !RP_FRAME_DEPTH )
      goto LABEL_51;
    if ( (unsigned int)m_CancellationTokenSource_high >= LODWORD(RP_FRAME_DEPTH->max_length) )
      goto LABEL_52;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameL;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, RP_FRAME_DEPTH->m_Items[m_CancellationTokenSource_high], 0);
    v41 = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !v41 )
      goto LABEL_51;
    if ( (unsigned int)m_CancellationTokenSource_high >= LODWORD(v41->max_length) )
LABEL_52:
      sub_2213CE4(rpFrameR);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, v41->m_Items[m_CancellationTokenSource_high], 0);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0);
    GameObjectExtensions__SetLocalPositionX(v42, this->fields.initPosRpFrameR, 0);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0);
    v43 = this->fields.rpGrid;
    if ( !v43 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      v43->fields.cellWidth * (float)UerGameRpMax,
      0);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.mcRpTimeP;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0);
    v44 = this->fields.rpGrid;
    if ( !v44 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      (float)(v44->fields.cellWidth * 0.5) * (float)UerGameRpMax,
      0);
  }
}


void ScrPlayerBP__UpdateRpStatus(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  __int64 v4; // x2
  struct UserGameEntity_o *v5; // x8
  int32_t RP_COUNT_STOP; // w20
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ScrPlayerBP_c *v9; // x0
  int v10; // w9
  struct ScrPlayerBP_StaticFields *v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *mcRpStrP; // x20
  System_String_o *v17; // x22
  ScrPlayerBP_c *v18; // x0
  __int64 v19; // x2
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  int size; // w23
  int32_t v22; // w20
  int32_t v23; // w21
  int v24; // w21
  int32_t v25; // w20
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x2
  __int64 v29; // x8
  __int64 v30; // x8
  ExRoomQuestComponent_o *v31; // x0
  __int64 v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596D65A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
    sub_2213A60(&ScrPlayerBP_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16448/*"[-]/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596D65A = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  v32 = 0;
  if ( !userGameEntity )
    goto LABEL_53;
  userGameEntity = (UserGameEntity_o *)UserGameEntity__getRp(userGameEntity, 0);
  v5 = this->fields.userGameEntity;
  HIDWORD(v32) = (_DWORD)userGameEntity;
  if ( !v5 )
    goto LABEL_53;
  RP_COUNT_STOP = (int)userGameEntity;
  if ( !byte_596D268 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596D268 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v4);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  v9 = ScrPlayerBP_TypeInfo;
  v10 = *(&ScrPlayerBP_TypeInfo->_2.cctor_finished + 1);
  LODWORD(v32) = static_fields->UerGameRpMax;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, method, v4);
    v9 = ScrPlayerBP_TypeInfo;
  }
  v11 = v9->static_fields;
  if ( RP_COUNT_STOP > v11->RP_COUNT_STOP )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, method, v4);
      v11 = ScrPlayerBP_TypeInfo->static_fields;
    }
    RP_COUNT_STOP = v11->RP_COUNT_STOP;
  }
  HIDWORD(v32) = RP_COUNT_STOP;
  v12 = System_Int32__ToString((int32_t)&v32 + 4, 0);
  v13 = System_Int32__ToString((int32_t)&v32, 0);
  mcRpStrP = this->fields.mcRpStrP;
  v17 = v13;
  if ( SHIDWORD(v32) <= (int)v32 )
  {
    userGameEntity = (UserGameEntity_o *)System_String__Concat_75694928(
                                           v12,
                                           (System_String_o *)StringLiteral_1123/*"/"*/,
                                           v13,
                                           0);
    if ( !mcRpStrP )
      goto LABEL_53;
  }
  else
  {
    v18 = ScrPlayerBP_TypeInfo;
    if ( !*(&ScrPlayerBP_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v14, v15);
      v18 = ScrPlayerBP_TypeInfo;
    }
    userGameEntity = (UserGameEntity_o *)System_String__Concat_75696856(
                                           v18->static_fields->RP_OVER_TXT_COLOR_STR,
                                           v12,
                                           (System_String_o *)StringLiteral_16448/*"[-]/"*/,
                                           v17,
                                           0);
    if ( !mcRpStrP )
      goto LABEL_53;
  }
  UILabel__set_text(mcRpStrP, (System_String_o *)userGameEntity, 0);
  raidPointComponents = this->fields.raidPointComponents;
  if ( !raidPointComponents )
    goto LABEL_53;
  size = raidPointComponents->fields._size;
  if ( size >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      userGameEntity = (UserGameEntity_o *)this->fields.raidPointComponents;
      v23 = v22 < SHIDWORD(v32);
      if ( !userGameEntity )
        break;
      userGameEntity = (UserGameEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)userGameEntity,
                                             v22,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        break;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, v23, 0);
      if ( size == ++v22 )
        goto LABEL_27;
    }
LABEL_53:
    sub_2213CDC(userGameEntity, method);
  }
LABEL_27:
  if ( HIDWORD(v32) - size >= size )
    v24 = size;
  else
    v24 = HIDWORD(v32) - size;
  if ( v24 >= 1 )
  {
    v25 = 0;
    do
    {
      userGameEntity = (UserGameEntity_o *)this->fields.raidPointComponents;
      if ( !userGameEntity )
        goto LABEL_53;
      userGameEntity = (UserGameEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)userGameEntity,
                                             v25,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        goto LABEL_53;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, 2, 0);
    }
    while ( v24 != ++v25 );
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v19);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  userGameEntity = (UserGameEntity_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v19);
    userGameEntity = (UserGameEntity_o *)TerminalSceneComponent_TypeInfo;
  }
  v26 = **(_QWORD **)&userGameEntity->fields.stone;
  if ( !v26 )
    goto LABEL_53;
  v27 = *(_QWORD *)(v26 + 256);
  if ( !v27 )
    goto LABEL_53;
  userGameEntity = *(UserGameEntity_o **)(v27 + 328);
  if ( !userGameEntity )
    goto LABEL_53;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)userGameEntity, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  userGameEntity = (UserGameEntity_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v28);
    userGameEntity = (UserGameEntity_o *)TerminalSceneComponent_TypeInfo;
  }
  v29 = **(_QWORD **)&userGameEntity->fields.stone;
  if ( !v29 )
    goto LABEL_53;
  v30 = *(_QWORD *)(v29 + 376);
  if ( !v30 )
    goto LABEL_53;
  v31 = *(ExRoomQuestComponent_o **)(v30 + 72);
  if ( v31 )
    ExRoomQuestComponent__RequestConsumeColorReset(v31, 0);
  ScrPlayerBP__UpdateRpTimeStr(this, method);
}


void ScrPlayerBP__UpdateRpTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UILabel_o *mcRpTimeP; // x19
  System_String_o *RpRecoverTimeStr; // x0
  __int64 v4; // x1

  mcRpTimeP = this->fields.mcRpTimeP;
  RpRecoverTimeStr = ScrPlayerBP__mfGetRpRecoverTimeStr(this, method);
  if ( !mcRpTimeP )
    sub_2213CDC(RpRecoverTimeStr, v4);
  UILabel__set_text(mcRpTimeP, RpRecoverTimeStr, 0);
}


System_String_o *ScrPlayerBP__mfGetRpRecoverTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  ScrPlayerBP_o *RpNextRecoverTime; // x0
  const MethodInfo *v6; // x2

  if ( (byte_596D65B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D65B = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_8;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( UserGameEntity__IsNeedRecoverRp(userGameEntity, 0) )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      RpNextRecoverTime = (ScrPlayerBP_o *)UserGameEntity__getRpNextRecoverTime(userGameEntity, 0);
      return ScrPlayerBP__GetTimeStr(RpNextRecoverTime, (int64_t)RpNextRecoverTime, v6);
    }
LABEL_8:
    sub_2213CDC(userGameEntity, method);
  }
  return v4;
}