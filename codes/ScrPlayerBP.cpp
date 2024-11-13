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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x0
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x19
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct ScrPlayerBP_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // w8
  struct ScrPlayerBP_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct ScrPlayerBP_StaticFields *v56; // x0

  if ( (byte_4B133D5 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&ScrPlayerBP_TypeInfo, v8, v9);
    sub_1BCA7E0(&string___TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_23779/*"status_raid_frame_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16158/*"[ffb505]"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23778/*"status_raid_frame"*/, v16, v17);
    byte_4B133D5 = 1;
  }
  ScrPlayerBP_TypeInfo->static_fields->RP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16158/*"[ffb505]"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScrPlayerBP_TypeInfo->static_fields,
    StringLiteral_16158/*"[ffb505]"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerBP_TypeInfo->static_fields->RP_COUNT_STOP = 99;
  v18 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_13;
  v26 = v18;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_12;
  v27 = StringLiteral_23779/*"status_raid_frame_old"*/;
  *(_QWORD *)(v18 + 32) = StringLiteral_23779/*"status_raid_frame_old"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 32), v27, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v26 + 24) <= 1u )
    goto LABEL_12;
  v34 = StringLiteral_23778/*"status_raid_frame"*/;
  *(_QWORD *)(v26 + 40) = StringLiteral_23778/*"status_raid_frame"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 40), v34, v28, v29, v30, v31, v32, v33);
  static_fields = ScrPlayerBP_TypeInfo->static_fields;
  static_fields->RP_FRAME_SP = (struct System_String_array *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->RP_FRAME_SP, v26, v36, v37, v38, v39, v40, v41);
  v18 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_13;
  v48 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v48 || (*(_DWORD *)(v18 + 32) = 26, v48 == 1) )
LABEL_12:
    sub_1BCAA44(v18, v19);
  *(_DWORD *)(v18 + 36) = 10;
  v49 = ScrPlayerBP_TypeInfo->static_fields;
  v49->RP_GRID_WIDTH = (struct System_Int32_array *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->RP_GRID_WIDTH, v19, v42, v43, v44, v45, v46, v47);
  v18 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v18 )
LABEL_13:
    sub_1BCAA3C(v18, v19);
  v19 = v18;
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_12;
  *(_DWORD *)(v18 + 36) = 7;
  v56 = ScrPlayerBP_TypeInfo->static_fields;
  v56->RP_FRAME_DEPTH = (struct System_Int32_array *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&v56->RP_FRAME_DEPTH, v19, v50, v51, v52, v53, v54, v55);
}


void __fastcall ScrPlayerBP___ctor(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B133D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo, v5, v6);
    byte_4B133D4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
  this->fields.raidPointComponents = (struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.raidPointComponents, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
    sub_1BCAA3C(mRpRecoverBtnSp, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mRpRecoverBtnSp, 0LL);
  this->fields.initPosRpFrameR = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__GetTimeStr(ScrPlayerBP_o *this, int64_t time, const MethodInfo *method)
{
  int v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w22
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+8h] [xbp-28h] BYREF
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  v3 = time;
  if ( (byte_4B133D3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, time, method);
    sub_1BCA7E0(&StringLiteral_25225/*"{0:D}:{1:D2}"*/, v4, v5);
    byte_4B133D3 = 1;
  }
  v6 = v3 % 60;
  v11 = v3 / 60;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = v6;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25225/*"{0:D}:{1:D2}"*/, v7, v8, 0LL);
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
    sub_1BCAA3C(0LL, is_enable);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  PlayerStatusRaidPointComponent_o *rpFrameR; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  BalanceConfig_c *v24; // x0
  struct UIGrid_o *rpGrid; // x24
  __int64 BpExpresssionType; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BalanceConfig_c *v28; // x0
  int UerGameRpMax; // w24
  int v30; // w21
  Il2CppObject *raidPointPrefab; // x22
  PlayerStatusRaidPointComponent_o *v32; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v43; // x8
  UISprite_o *rpFrameL; // x21
  __int64 v45; // x8
  struct System_String_array *RP_FRAME_SP; // x8
  struct System_Int32_array *RP_FRAME_DEPTH; // x8
  struct System_Int32_array *v48; // x8
  UnityEngine_GameObject_o *v49; // x0
  struct UIGrid_o *v50; // x8
  struct UIGrid_o *v51; // x8

  if ( (byte_4B133D0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userGame, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&ScrPlayerBP_TypeInfo, v18, v19);
    byte_4B133D0 = 1;
  }
  this->fields.userGameEntity = userGame;
  sub_1BCA784(
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
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
      v24 = BalanceConfig_TypeInfo;
    }
    rpGrid = this->fields.rpGrid;
    BpExpresssionType = v24->static_fields->BpExpresssionType;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v21);
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
    if ( !byte_4B1306C )
    {
      sub_1BCA7E0(&BalanceConfig_TypeInfo, v21, v22);
      byte_4B1306C = 1;
    }
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
      v28 = BalanceConfig_TypeInfo;
    }
    UerGameRpMax = v28->static_fields->UerGameRpMax;
    if ( UerGameRpMax >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        raidPointPrefab = (Il2CppObject *)this->fields.raidPointPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                         raidPointPrefab,
                                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
        if ( !rpFrameR )
          break;
        v32 = rpFrameR;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.rpGrid, 0LL);
        PlayerStatusRaidPointComponent__Setup(v32, ++v30, BpExpresssionType, 0LL);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.raidPointComponents;
        if ( !rpFrameR )
          break;
        v40 = *(_QWORD *)&rpFrameR->fields.m_CachedPtr;
        v41 = Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__;
        ++HIDWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( !v40 )
          break;
        m_CancellationTokenSource_low = SLODWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v40 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rpFrameR,
            (Il2CppObject *)v32,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = v40 + 8 * m_CancellationTokenSource_low;
          LODWORD(rpFrameR->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v43 + 32) = v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v32, v34, v35, v36, v37, v38, v39);
        }
        if ( UerGameRpMax == v30 )
          goto LABEL_28;
      }
LABEL_51:
      sub_1BCAA3C(rpFrameR, v21);
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
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v21);
      rpFrameR = (PlayerStatusRaidPointComponent_o *)ScrPlayerBP_TypeInfo;
    }
    v45 = *(_QWORD *)&rpFrameR[2].fields.raidFrameSp->fields.m_CachedPtr;
    if ( !v45 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v45 + 24) )
      goto LABEL_52;
    if ( !rpFrameL )
      goto LABEL_51;
    UISprite__set_spriteName(rpFrameL, *(System_String_o **)(v45 + 8 * BpExpresssionType + 32), 0LL);
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
    v48 = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !v48 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= v48->max_length )
LABEL_52:
      sub_1BCAA44(rpFrameR, v21);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, v48->m_Items[BpExpresssionType + 1], 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
    GameObjectExtensions__SetLocalPositionX(v49, this->fields.initPosRpFrameR, 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v50 = this->fields.rpGrid;
    if ( !v50 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      v50->fields.cellWidth * (float)UerGameRpMax,
      0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.mcRpTimeP;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v51 = this->fields.rpGrid;
    if ( !v51 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      (float)(v51->fields.cellWidth * 0.5) * (float)UerGameRpMax,
      0LL);
  }
}


void __fastcall ScrPlayerBP__UpdateRpStatus(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *userGameEntity; // x0
  __int64 v15; // x2
  int RP_COUNT_STOP; // w20
  BalanceConfig_c *v17; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ScrPlayerBP_c *v19; // x0
  struct ScrPlayerBP_StaticFields *v20; // x8
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  UILabel_o *mcRpStrP; // x20
  System_String_o *v25; // x22
  ScrPlayerBP_c *v26; // x0
  __int64 v27; // x2
  int v28; // w20
  int v29; // w8
  bool v30; // w23
  int v31; // w22
  int v32; // w8
  int v33; // w22
  int32_t v34; // w20
  __int64 v35; // x8
  __int64 v36; // x8
  const MethodInfo *v37; // x1
  int32_t UerGameRpMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B133D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&ScrPlayerBP_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_15998/*"[-]/"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v12, v13);
    byte_4B133D1 = 1;
  }
  v39 = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_46;
  userGameEntity = (void *)UserGameEntity__getRp((UserGameEntity_o *)userGameEntity, 0LL);
  if ( !this->fields.userGameEntity )
    goto LABEL_46;
  RP_COUNT_STOP = (int)userGameEntity;
  if ( !byte_4B1306C )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v15);
    byte_4B1306C = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v17 = BalanceConfig_TypeInfo;
  }
  static_fields = v17->static_fields;
  v19 = ScrPlayerBP_TypeInfo;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, method);
    v19 = ScrPlayerBP_TypeInfo;
  }
  v20 = v19->static_fields;
  if ( RP_COUNT_STOP > v20->RP_COUNT_STOP )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, method);
      v20 = ScrPlayerBP_TypeInfo->static_fields;
    }
    RP_COUNT_STOP = v20->RP_COUNT_STOP;
  }
  v39 = RP_COUNT_STOP;
  v21 = System_Int32__ToString((int32_t)&v39, 0LL);
  v22 = System_Int32__ToString((int32_t)&UerGameRpMax, 0LL);
  mcRpStrP = this->fields.mcRpStrP;
  v25 = v22;
  if ( v39 <= UerGameRpMax )
  {
    userGameEntity = System_String__Concat_62412480(v21, (System_String_o *)StringLiteral_1120/*"/"*/, v22, 0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  else
  {
    v26 = ScrPlayerBP_TypeInfo;
    if ( !ScrPlayerBP_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerBP_TypeInfo, v23);
      v26 = ScrPlayerBP_TypeInfo;
    }
    userGameEntity = System_String__Concat_62414484(
                       v26->static_fields->RP_OVER_TXT_COLOR_STR,
                       v21,
                       (System_String_o *)StringLiteral_15998/*"[-]/"*/,
                       v25,
                       0LL);
    if ( !mcRpStrP )
      goto LABEL_46;
  }
  UILabel__set_text(mcRpStrP, (System_String_o *)userGameEntity, 0LL);
  userGameEntity = this->fields.raidPointComponents;
  if ( !userGameEntity )
    goto LABEL_46;
  v28 = *((_DWORD *)userGameEntity + 6);
  v29 = v39;
  if ( v28 >= 1 )
  {
    v30 = v39 > 0;
    v31 = 1;
    do
    {
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v31 - 1,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        break;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, v30, 0LL);
      v29 = v39;
      if ( v28 == v31 )
        goto LABEL_28;
      userGameEntity = this->fields.raidPointComponents;
      v30 = v31++ < v39;
    }
    while ( userGameEntity );
LABEL_46:
    sub_1BCAA3C(userGameEntity, method);
  }
LABEL_28:
  v32 = v29 - v28;
  if ( v32 <= v28 )
    v33 = v32;
  else
    v33 = v28;
  if ( v33 >= 1 )
  {
    v34 = 0;
    do
    {
      userGameEntity = this->fields.raidPointComponents;
      if ( !userGameEntity )
        goto LABEL_46;
      userGameEntity = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)userGameEntity,
                         v34,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        goto LABEL_46;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, 2, 0LL);
    }
    while ( v33 != ++v34 );
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v27);
    byte_4B10F83 = 1;
  }
  userGameEntity = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    userGameEntity = TerminalSceneComponent_TypeInfo;
  }
  v35 = **((_QWORD **)userGameEntity + 23);
  if ( !v35 )
    goto LABEL_46;
  v36 = *(_QWORD *)(v35 + 256);
  if ( !v36 )
    goto LABEL_46;
  userGameEntity = *(void **)(v36 + 296);
  if ( !userGameEntity )
    goto LABEL_46;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)userGameEntity, 0LL);
  ScrPlayerBP__UpdateRpTimeStr(this, v37);
}


void __fastcall ScrPlayerBP__UpdateRpTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UILabel_o *mcRpTimeP; // x19
  System_String_o *RpRecoverTimeStr; // x0
  __int64 v4; // x1

  mcRpTimeP = this->fields.mcRpTimeP;
  RpRecoverTimeStr = ScrPlayerBP__mfGetRpRecoverTimeStr(this, method);
  if ( !mcRpTimeP )
    sub_1BCAA3C(RpRecoverTimeStr, v4);
  UILabel__set_text(mcRpTimeP, RpRecoverTimeStr, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__mfGetRpRecoverTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v5; // x20
  ScrPlayerBP_o *RpNextRecoverTime; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B133D2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B133D2 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_8;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( UserGameEntity__IsNeedRecoverRp(userGameEntity, 0LL) )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      RpNextRecoverTime = (ScrPlayerBP_o *)UserGameEntity__getRpNextRecoverTime(userGameEntity, 0LL);
      return ScrPlayerBP__GetTimeStr(RpNextRecoverTime, (int64_t)RpNextRecoverTime, v7);
    }
LABEL_8:
    sub_1BCAA3C(userGameEntity, method);
  }
  return v5;
}