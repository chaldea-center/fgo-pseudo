void __fastcall ScrPlayerBP___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  struct System_Int32_array *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x19
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct ScrPlayerBP_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  struct ScrPlayerBP_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct ScrPlayerBP_StaticFields *v27; // x0

  if ( (byte_49B7FB6 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, v1);
    sub_1B4CF90(&ScrPlayerBP_TypeInfo, v4);
    sub_1B4CF90(&string___TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_23249/*"status_raid_frame_old"*/, v6);
    sub_1B4CF90(&StringLiteral_15686/*"[ffb505]"*/, v7);
    sub_1B4CF90(&StringLiteral_23248/*"status_raid_frame"*/, v8);
    byte_49B7FB6 = 1;
  }
  ScrPlayerBP_TypeInfo->static_fields->RP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_15686/*"[ffb505]"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)ScrPlayerBP_TypeInfo->static_fields, StringLiteral_15686/*"[ffb505]"*/, v2, v3);
  ScrPlayerBP_TypeInfo->static_fields->RP_COUNT_STOP = 99;
  v9 = sub_1B4D038(string___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_13;
  v13 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_12;
  v14 = StringLiteral_23249/*"status_raid_frame_old"*/;
  *(_QWORD *)(v9 + 32) = StringLiteral_23249/*"status_raid_frame_old"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 32), v14, v11, v12);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_12;
  v17 = StringLiteral_23248/*"status_raid_frame"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_23248/*"status_raid_frame"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 40), v17, v15, v16);
  static_fields = ScrPlayerBP_TypeInfo->static_fields;
  static_fields->RP_FRAME_SP = (struct System_String_array *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->RP_FRAME_SP, v13, v19, v20);
  v9 = sub_1B4D038(int___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_13;
  v23 = *(_DWORD *)(v9 + 24);
  v10 = (struct System_Int32_array *)v9;
  if ( !v23 || (*(_DWORD *)(v9 + 32) = 26, v23 == 1) )
LABEL_12:
    sub_1B4D1F4(v9, v10);
  *(_DWORD *)(v9 + 36) = 10;
  v24 = ScrPlayerBP_TypeInfo->static_fields;
  v24->RP_GRID_WIDTH = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&v24->RP_GRID_WIDTH, (int32_t)v10, v21, v22);
  v9 = sub_1B4D038(int___TypeInfo, 2LL);
  if ( !v9 )
LABEL_13:
    sub_1B4D1EC(v9, v10);
  v10 = (struct System_Int32_array *)v9;
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_12;
  *(_DWORD *)(v9 + 36) = 7;
  v27 = ScrPlayerBP_TypeInfo->static_fields;
  v27->RP_FRAME_DEPTH = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&v27->RP_FRAME_DEPTH, (int32_t)v10, v25, v26);
}


void __fastcall ScrPlayerBP___ctor(ScrPlayerBP_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B7FB5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo, v3);
    byte_49B7FB5 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_PlayerStatusRaidPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent___ctor__);
  this->fields.raidPointComponents = (struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.raidPointComponents, (int32_t)v4, v5, v6);
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
    sub_1B4D1EC(mRpRecoverBtnSp, method);
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
  if ( (byte_49B7FB4 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, time);
    sub_1B4CF90(&StringLiteral_24682/*"{0:D}:{1:D2}"*/, v6);
    byte_49B7FB4 = 1;
  }
  v7 = v5 % 60;
  v15 = v5 / 60;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4);
  v14 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_61134760((System_String_o *)StringLiteral_24682/*"{0:D}:{1:D2}"*/, v8, v12, 0LL);
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
    sub_1B4D1EC(0LL, is_enable);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PlayerStatusRaidPointComponent_o *rpFrameR; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_PlayerStatusRaidPointComponent__o *raidPointComponents; // x8
  BalanceConfig_c *v14; // x0
  struct UIGrid_o *rpGrid; // x24
  __int64 BpExpresssionType; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BalanceConfig_c *v18; // x0
  int UerGameRpMax; // w24
  int v20; // w21
  Il2CppObject *raidPointPrefab; // x22
  PlayerStatusRaidPointComponent_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UISprite_o *rpFrameL; // x21
  __int64 v31; // x8
  struct System_String_array *RP_FRAME_SP; // x8
  struct System_Int32_array *RP_FRAME_DEPTH; // x8
  struct System_Int32_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct UIGrid_o *v36; // x8
  struct UIGrid_o *v37; // x8

  if ( (byte_49B7FB1 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, userGame);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, v7);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&ScrPlayerBP_TypeInfo, v10);
    byte_49B7FB1 = 1;
  }
  this->fields.userGameEntity = userGame;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)userGame, (int32_t)method, v3);
  raidPointComponents = this->fields.raidPointComponents;
  if ( !raidPointComponents )
    goto LABEL_51;
  if ( raidPointComponents->fields._size <= 0 )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    rpGrid = this->fields.rpGrid;
    BpExpresssionType = v14->static_fields->BpExpresssionType;
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
    if ( !byte_49B7C20 )
    {
      sub_1B4CF90(&BalanceConfig_TypeInfo, v12);
      byte_49B7C20 = 1;
    }
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    UerGameRpMax = v18->static_fields->UerGameRpMax;
    if ( UerGameRpMax >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        raidPointPrefab = (Il2CppObject *)this->fields.raidPointPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                         raidPointPrefab,
                                                         (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_PlayerStatusRaidPointComponent___);
        if ( !rpFrameR )
          break;
        v22 = rpFrameR;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.rpGrid, 0LL);
        PlayerStatusRaidPointComponent__Setup(v22, ++v20, BpExpresssionType, 0LL);
        rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.raidPointComponents;
        if ( !rpFrameR )
          break;
        v26 = *(_QWORD *)&rpFrameR->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__Add__;
        ++HIDWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( !v26 )
          break;
        m_CancellationTokenSource_low = SLODWORD(rpFrameR->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rpFrameR,
            (Il2CppObject *)v22,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * m_CancellationTokenSource_low;
          LODWORD(rpFrameR->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v29 + 32) = v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v22, v24, v25);
        }
        if ( UerGameRpMax == v20 )
          goto LABEL_28;
      }
LABEL_51:
      sub_1B4D1EC(rpFrameR, v12);
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
    v31 = *(_QWORD *)&rpFrameR[2].fields.raidFrameSp->fields.m_CachedPtr;
    if ( !v31 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v31 + 24) )
      goto LABEL_52;
    if ( !rpFrameL )
      goto LABEL_51;
    UISprite__set_spriteName(rpFrameL, *(System_String_o **)(v31 + 8 * BpExpresssionType + 32), 0LL);
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
    v34 = ScrPlayerBP_TypeInfo->static_fields->RP_FRAME_DEPTH;
    if ( !v34 )
      goto LABEL_51;
    if ( (unsigned int)BpExpresssionType >= v34->max_length )
LABEL_52:
      sub_1B4D1F4(rpFrameR, v12);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    UIWidget__set_depth((UIWidget_o *)rpFrameR, v34->m_Items[BpExpresssionType + 1], 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rpFrameR, 0LL);
    GameObjectExtensions__SetLocalPositionX(v35, this->fields.initPosRpFrameR, 0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.rpFrameR;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v36 = this->fields.rpGrid;
    if ( !v36 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      v36->fields.cellWidth * (float)UerGameRpMax,
      0LL);
    rpFrameR = (PlayerStatusRaidPointComponent_o *)this->fields.mcRpTimeP;
    if ( !rpFrameR )
      goto LABEL_51;
    rpFrameR = (PlayerStatusRaidPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)rpFrameR,
                                                     0LL);
    v37 = this->fields.rpGrid;
    if ( !v37 )
      goto LABEL_51;
    GameObjectExtensions__AddLocalPositionX(
      (UnityEngine_GameObject_o *)rpFrameR,
      (float)(v37->fields.cellWidth * 0.5) * (float)UerGameRpMax,
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

  if ( (byte_49B7FB2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__, v3);
    sub_1B4CF90(&ScrPlayerBP_TypeInfo, v4);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_15527/*"[-]/"*/, v6);
    sub_1B4CF90(&StringLiteral_1057/*"/"*/, v7);
    byte_49B7FB2 = 1;
  }
  v30 = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_46;
  userGameEntity = (void *)UserGameEntity__getRp((UserGameEntity_o *)userGameEntity, 0LL);
  if ( !this->fields.userGameEntity )
    goto LABEL_46;
  RP_COUNT_STOP = (int)userGameEntity;
  if ( !byte_49B7C20 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B7C20 = 1;
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
    userGameEntity = System_String__Concat_61131716(v14, (System_String_o *)StringLiteral_1057/*"/"*/, v15, 0LL);
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
    userGameEntity = System_String__Concat_61133720(
                       v18->static_fields->RP_OVER_TXT_COLOR_STR,
                       v14,
                       (System_String_o *)StringLiteral_15527/*"[-]/"*/,
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
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
    sub_1B4D1EC(userGameEntity, method);
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PlayerStatusRaidPointComponent__get_Item__);
      if ( !userGameEntity )
        goto LABEL_46;
      PlayerStatusRaidPointComponent__SetDispType((PlayerStatusRaidPointComponent_o *)userGameEntity, 2, 0LL);
    }
    while ( v24 != ++v25 );
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
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
    sub_1B4D1EC(RpRecoverTimeStr, v4);
  UILabel__set_text(mcRpTimeP, RpRecoverTimeStr, 0LL);
}


System_String_o *__fastcall ScrPlayerBP__mfGetRpRecoverTimeStr(ScrPlayerBP_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  ScrPlayerBP_o *RpNextRecoverTime; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49B7FB3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B7FB3 = 1;
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
    sub_1B4D1EC(userGameEntity, method);
  }
  return v4;
}