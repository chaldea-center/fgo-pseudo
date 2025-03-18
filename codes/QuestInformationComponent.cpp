void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x20
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x20
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct QuestInformationComponent_StaticFields *static_fields; // x8

  if ( (byte_4C1EE5A & 1) == 0 )
  {
    sub_1C3B764(&QuestInformationComponent_TypeInfo, v1);
    sub_1C3B764(&string_____TypeInfo, v2);
    sub_1C3B764(&string___TypeInfo, v3);
    sub_1C3B764(&StringLiteral_23199/*"status_raid_frame_old"*/, v4);
    sub_1C3B764(&StringLiteral_23197/*"status_master_frame1"*/, v5);
    sub_1C3B764(&StringLiteral_23200/*"status_raid_point_frame"*/, v6);
    sub_1C3B764(&StringLiteral_23198/*"status_raid_frame"*/, v7);
    byte_4C1EE5A = 1;
  }
  v8 = sub_1C3B80C(string_____TypeInfo, 2LL);
  v9 = sub_1C3B80C(string___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_14;
  v17 = v9;
  if ( !*(_DWORD *)(v9 + 24)
    || (v18 = StringLiteral_23197/*"status_master_frame1"*/,
        *(_QWORD *)(v9 + 32) = StringLiteral_23197/*"status_master_frame1"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 32), v18, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v17 + 24) <= 1u) )
  {
LABEL_13:
    sub_1C3B9C8(v9, v10);
  }
  v25 = StringLiteral_23198/*"status_raid_frame"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_23198/*"status_raid_frame"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 40), v25, v19, v20, v21, v22, v23, v24);
  if ( !v8 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v8 + 32) = v17;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 32), v17, v26, v27, v28, v29, v30, v31);
  v9 = sub_1C3B80C(string___TypeInfo, 2LL);
  if ( !v9 )
LABEL_14:
    sub_1C3B9C0(v9, v10);
  v38 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_13;
  v39 = StringLiteral_23199/*"status_raid_frame_old"*/;
  *(_QWORD *)(v9 + 32) = StringLiteral_23199/*"status_raid_frame_old"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 32), v39, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
    goto LABEL_13;
  v46 = StringLiteral_23200/*"status_raid_point_frame"*/;
  *(_QWORD *)(v38 + 40) = StringLiteral_23200/*"status_raid_point_frame"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 40), v46, v40, v41, v42, v43, v44, v45);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v8 + 40) = v38;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 40), v38, v47, v48, v49, v50, v51, v52);
  QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames = (struct System_String_array_array *)v8;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestInformationComponent_TypeInfo->static_fields,
    v8,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  static_fields = QuestInformationComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BASE_X = 0xFFFFFC32FFFFFF02LL;
  *(_QWORD *)&static_fields->BAR_BASE_OFFSET = 0x3ECCCCCDFFFFFFFFLL;
}


void __fastcall QuestInformationComponent___ctor(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
  this->fields.dispAnimState = 0;
  this->fields.mIsLetAutoOpen = 0;
}


bool __fastcall QuestInformationComponent__AutoOpen(
        QuestInformationComponent_o *this,
        int32_t questId,
        int32_t displayScene,
        System_Action_o *customOpen,
        System_Action_o *customClose,
        const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8
  const MethodInfo *v8; // x1

  if ( !this->fields.mIsLetAutoOpen )
    return 0;
  listManager = this->fields.listManager;
  if ( !listManager )
    sub_1C3B9C0(this, questId);
  if ( listManager->fields.mIsBuildingList
    || !QuestInformationComponent__Setup(this, questId, displayScene, customOpen, customClose, method) )
  {
    return 0;
  }
  QuestInformationComponent__Open(this, v8);
  return 1;
}


void __fastcall QuestInformationComponent__Awake(QuestInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *maskObj; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *Component_object; // x19
  float OffsetX; // s0
  float v10; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v14; // s11
  float v15; // s12
  float v16; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1EE52 & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1EE52 = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v7 = this->fields.maskObj;
    if ( !v7 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v7,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
      if ( Component_object )
      {
        v10 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0LL);
        v14 = size.fields.y;
        size.fields.y = (float)(v10 * 0.5) + x;
        v15 = size.fields.z;
        v16 = v10 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0LL);
        v19.fields.x = v16;
        v19.fields.y = v14;
        v19.fields.z = v15;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v19, 0LL);
        return;
      }
LABEL_15:
      sub_1C3B9C0(v7, v6);
    }
  }
}


void __fastcall QuestInformationComponent__Close(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Action_o *customClose; // x8

  customClose = this->fields.customClose;
  this->fields.settedQuestId = -1;
  if ( customClose )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))customClose->fields.m_target)(
      customClose->fields.original_method_info,
      *(_QWORD *)&customClose->fields.extra_arg);
  }
  else if ( this->fields.dispAnimState != 2 )
  {
    QuestInformationComponent__FrameInOut(this, 0, 0, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationComponent__CloseWindow(
        QuestInformationComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  QuestInformationComponent_o *v4; // x19
  __int64 v5; // x1
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  TerminalSceneComponent_c *v9; // x0

  v4 = this;
  if ( (byte_4C1EE57 & 1) == 0 )
  {
    sub_1C3B764(&Method_QuestInformationComponent_CloseWindow__, isPlaySe);
    this = (QuestInformationComponent_o *)sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C1EE57 = 1;
  }
  listManager = v4->fields.listManager;
  if ( !listManager )
    goto LABEL_21;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v4->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v7 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C3B77C(Method_QuestInformationComponent_CloseWindow__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_20;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, isPlaySe);
      byte_4C1CAE3 = 1;
    }
    v9 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v9->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0LL);
LABEL_20:
      QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_21:
    sub_1C3B9C0(this, isPlaySe);
  }
}


bool __fastcall QuestInformationComponent__FrameIn(
        QuestInformationComponent_o *this,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (is_force || this->fields.dispAnimState != 1) && QuestInformationComponent__FrameInOut(this, 1, is_force, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestInformationComponent__FrameInOut(
        QuestInformationComponent_o *this,
        bool is_framein,
        bool is_force,
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
  __int64 v15; // x20
  QuestBoardListViewManager_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UnityEngine_GameObject_o *window; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UnityEngine_GameObject_o *titleBarInfo; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  float OffsetX; // s0
  int v39; // w8
  QuestInformationComponent_c *v40; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v43; // w26
  int v44; // w27
  __int64 v45; // x1
  float LocalPositionX; // s8
  double v47; // d9
  double v48; // d0
  double v49; // d0
  double v50; // d1
  double v51; // d1
  int v52; // w8
  QuestInformationComponent_c *v53; // x0
  UnityEngine_GameObject_o *v54; // x19
  int v55; // w21
  float y; // s12
  float z; // s10
  float v59; // s13
  float v60; // s14
  Il2CppObject *Component_object; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int32_t v68; // w8
  QuestInformationComponent_c *v69; // x0
  MoveObject_o *v70; // x21
  float v71; // s0
  float v72; // s9
  float v73; // s11
  float v74; // s13
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v76; // x22
  System_Action_o *v77; // x23
  TerminalPramsManager_c *v78; // x0
  ListViewSort_c *klass; // x8
  __int64 v80; // x8
  float from; // [xsp+4h] [xbp-9Ch]
  double iptr; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C1EE58 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, is_framein);
    sub_1C3B764(&FSUtility_TypeInfo, v7);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v8);
    sub_1C3B764(&QuestInformationComponent_TypeInfo, v9);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v11);
    sub_1C3B764(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__, v12);
    sub_1C3B764(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__, v13);
    sub_1C3B764(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo, v14);
    byte_4C1EE58 = 1;
  }
  v15 = sub_1C3B9B0(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_77;
  *(_QWORD *)(v15 + 48) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)this, v18, v19, v20, v21, v22, v23);
  window = this->fields.window;
  *(_QWORD *)(v15 + 16) = window;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)window, v25, v26, v27, v28, v29, v30);
  titleBarInfo = this->fields.titleBarInfo;
  *(_QWORD *)(v15 + 32) = titleBarInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)titleBarInfo, v32, v33, v34, v35, v36, v37);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v39 = 0x80000000;
  else
    v39 = (int)OffsetX;
  *(_DWORD *)(v15 + 40) = v39;
  v40 = QuestInformationComponent_TypeInfo;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v40 = QuestInformationComponent_TypeInfo;
    v39 = *(_DWORD *)(v15 + 40);
  }
  static_fields = v40->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v43 = static_fields->BASE_X - v39;
  if ( is_framein )
    v44 = static_fields->BASE_X - v39;
  else
    v44 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v15 + 44) = v44;
  if ( is_force )
    goto LABEL_34;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v15 + 16), 0LL);
  if ( !byte_4C1D2F4 )
  {
    sub_1C3B764(&System_Math_TypeInfo, v45);
    byte_4C1D2F4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v47 = LocalPositionX;
  v48 = modf(LocalPositionX, &iptr);
  if ( LocalPositionX >= 0.0 )
  {
    if ( v48 != 0.5 )
    {
      v49 = floor(v47 + 0.5);
      goto LABEL_29;
    }
    v49 = iptr;
    v50 = 1.0;
  }
  else
  {
    if ( v48 != -0.5 )
    {
      v49 = ceil(v47 + -0.5);
      goto LABEL_29;
    }
    v49 = iptr;
    v50 = -1.0;
  }
  v51 = v49 + v50;
  if ( ((__int64)v49 & 1) != 0 )
    v49 = v51;
LABEL_29:
  if ( v49 == INFINITY )
    v52 = 0x80000000;
  else
    v52 = (int)v49;
  if ( v44 != v52 )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v84 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0LL);
    v59 = v84.fields.y;
    v60 = v84.fields.z;
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         *(UnityEngine_GameObject_o **)(v15 + 16),
                         (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v15 + 24) = Component_object;
    sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)Component_object, v62, v63, v64, v65, v66, v67);
    if ( is_framein )
      v68 = 1;
    else
      v68 = 2;
    this->fields.dispAnimState = v68;
    v69 = QuestInformationComponent_TypeInfo;
    v70 = *(MoveObject_o **)(v15 + 24);
    if ( is_framein )
      v71 = v60;
    else
      v71 = z;
    if ( is_framein )
      v72 = v59;
    else
      v72 = y;
    if ( is_framein )
      v73 = (float)FRAME_OUT_POS_X;
    else
      v73 = (float)v43;
    if ( !is_framein )
      z = v60;
    if ( !is_framein )
      y = v59;
    if ( is_framein )
      v74 = (float)v43;
    else
      v74 = (float)FRAME_OUT_POS_X;
    from = v71;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v69 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v69->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v76 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v15,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v77 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v15,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v70 )
    {
      v85.fields.z = from;
      v85.fields.x = v73;
      v85.fields.y = v72;
      v86.fields.x = v74;
      v86.fields.y = y;
      v86.fields.z = z;
      MoveObject__Play(v70, v85, v86, FRAME_IN_OUT_MV_SPD_TIME, v76, v77, 0.0, 17, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1EDF5 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v17);
        byte_4C1EDF5 = 1;
      }
      v78 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v78 = TerminalPramsManager_TypeInfo;
      }
      if ( v78->static_fields->_IsBackQuestBoardDisable_k__BackingField )
        return 1;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v17);
        byte_4C1CAE3 = 1;
      }
      v16 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v16 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v16->fields.sort->klass;
      if ( klass )
      {
        v80 = *(_QWORD *)&klass->_2.static_fields_size;
        if ( v80 )
        {
          v16 = *(QuestBoardListViewManager_o **)(v80 + 296);
          if ( v16 )
          {
            QuestBoardListViewManager__SetBackMaskActive(v16, !is_framein, 0, 0LL);
            return 1;
          }
        }
      }
    }
LABEL_77:
    sub_1C3B9C0(v16, v17);
  }
  v44 = *(_DWORD *)(v15 + 44);
LABEL_34:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v15 + 16), (float)v44, 0LL);
  v53 = QuestInformationComponent_TypeInfo;
  v54 = *(UnityEngine_GameObject_o **)(v15 + 32);
  v55 = *(_DWORD *)(v15 + 44);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v53 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v54,
    (float)(v53->static_fields->BAR_BASE_OFFSET - v55 - *(_DWORD *)(v15 + 40)),
    0LL);
  return 0;
}


bool __fastcall QuestInformationComponent__FrameOut(
        QuestInformationComponent_o *this,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (is_force || this->fields.dispAnimState != 2) && QuestInformationComponent__FrameInOut(this, 0, is_force, v3);
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation(int32_t targetQuestId, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  QuestEntity_o *v10; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1EE59 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&QuestInformationComponent_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4C1EE59 = 1;
  }
  entity = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8D640(v2);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8D640(v2);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1C3B9C0(MasterData_object, method);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          targetQuestId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v10 = (QuestEntity_o *)entity;
  if ( QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    if ( !entity )
      return 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    if ( !v10 )
      return 0;
  }
  return !QuestEntity__HasFlag(v10, 2LL, 0LL) && v10->fields.afterClear != 1;
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_35370000(
        QuestEntity_o *questEntity,
        const MethodInfo *method)
{
  return questEntity && !QuestEntity__HasFlag(questEntity, 2LL, 0LL) && questEntity->fields.afterClear != 1;
}


void __fastcall QuestInformationComponent__LateUpdate(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  if ( this->fields.mSetUpOnUpdate )
    QuestInformationComponent__Setup(
      this,
      this->fields.settedQuestId,
      this->fields.displayScene,
      this->fields.customOpen,
      this->fields.customClose,
      v2);
}


void __fastcall QuestInformationComponent__OnClickClose(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestInformationComponent__CloseWindow(this, 1, v2);
}


void __fastcall QuestInformationComponent__OnClickTabL(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4C1EE55 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C3B764(&Method_QuestInformationComponent_OnClickTabL__, method);
    byte_4C1EE55 = 1;
  }
  if ( v2->fields.TabOpened )
  {
    listManager = v2->fields.listManager;
    if ( !listManager )
      goto LABEL_12;
    if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
    {
      v4 = Method_QuestInformationComponent_OnClickTabL__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_OnClickTabL__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C3B77C(Method_QuestInformationComponent_OnClickTabL__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 0;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_1C3B9C0(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4C1EE56 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C3B764(&Method_QuestInformationComponent_OnClickTabR__, method);
    byte_4C1EE56 = 1;
  }
  if ( v2->fields.TabOpened != 1 )
  {
    listManager = v2->fields.listManager;
    if ( !listManager )
      goto LABEL_12;
    if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
    {
      v4 = Method_QuestInformationComponent_OnClickTabR__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_OnClickTabR__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C3B77C(Method_QuestInformationComponent_OnClickTabR__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 1;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_1C3B9C0(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_4C1EE53 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EE53 = 1;
  }
  this->fields.dispAnimState = 0;
  listManager = (UnityEngine_Object_o *)this->fields.listManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listManager, 0LL, 0LL) )
  {
    v5 = this->fields.listManager;
    if ( !v5 )
      goto LABEL_14;
    QuestInformationListViewManager__DestroyList(v5, v4);
  }
  this->fields.settedQuestId = -1;
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v5 = (QuestInformationListViewManager_o *)this->fields.maskObj;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1C3B9C0(v5, v4);
  }
}


void __fastcall QuestInformationComponent__Open(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Action_o *customOpen; // x8

  customOpen = this->fields.customOpen;
  if ( customOpen )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))customOpen->fields.m_target)(
      customOpen->fields.original_method_info,
      *(_QWORD *)&customOpen->fields.extra_arg);
  }
  else if ( this->fields.dispAnimState != 1 )
  {
    QuestInformationComponent__FrameInOut(this, 1, 0, v2);
  }
}


void __fastcall QuestInformationComponent__SetResetReady(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8

  listManager = this->fields.listManager;
  if ( !listManager )
    sub_1C3B9C0(this, method);
  listManager->fields.mIsResetReady = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestInformationComponent__Setup(
        QuestInformationComponent_o *this,
        int32_t questId,
        int32_t displayScene,
        System_Action_o *customOpen,
        System_Action_o *customClose,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1
  QuestInformationListViewManager_o *listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v42; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  QuestInformationComponent___c_c *v44; // x0
  System_Func_object__int__o *_9__30_0; // x22
  Il2CppObject *v46; // x23
  struct QuestInformationComponent___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  const MethodInfo *v55; // x4
  UISprite_o *v56; // x22
  QuestEntity_o *v57; // x21
  QuestInformationComponent_c *v58; // x8
  struct System_String_array_array *v59; // x8
  System_String_array *v60; // x8
  struct System_String_array_array *v61; // x8
  System_String_array *v62; // x8
  bool HasFlag; // w0
  UILabel_o *tabInfoLabel; // x21
  bool v65; // w22
  __int64 *v66; // x8
  const MethodInfo *v67; // x4
  UISprite_o *tabLsprite; // x21
  ListViewSort_c *klass; // x8
  System_String_o **data; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v72; // x8
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v74; // x8
  Il2CppObject *v76; // [xsp+0h] [xbp-50h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C1EE54 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_ViewEnemyMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v17);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v18);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v19);
    sub_1C3B764(&System_Func_ViewEnemyEntity__int__TypeInfo, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&NetworkManager_TypeInfo, v22);
    sub_1C3B764(&QuestInformationComponent_TypeInfo, v23);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C3B764(&Method_QuestInformationComponent___c__Setup_b__30_0__, v25);
    sub_1C3B764(&QuestInformationComponent___c_TypeInfo, v26);
    sub_1C3B764(&StringLiteral_11106/*"Rethrow statement is valid only inside a Catch block."*/, v27);
    sub_1C3B764(&StringLiteral_11108/*"RetrieveProducts failed: "*/, v28);
    sub_1C3B764(&StringLiteral_11107/*"RetrieveProducts"*/, v29);
    sub_1C3B764(&StringLiteral_11105/*"Rethrow as "*/, v30);
    byte_4C1EE54 = 1;
  }
  v76 = 0LL;
  entity = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.customOpen,
    (int64_t)customOpen,
    *(int64_t *)&displayScene,
    (int32_t)customOpen,
    (System_String_o *)customClose,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.customClose,
    (int64_t)customClose,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_83;
  QuestInformationListViewManager__DestroyList(listManager, v37);
  TabOpened = this->fields.TabOpened;
  this->fields.mSetUpOnUpdate = 0;
  if ( TabOpened != 1 )
  {
    LOBYTE(EntityListFromQuestId) = 0;
    if ( TabOpened )
      return (char)EntityListFromQuestId;
    listManager = (QuestInformationListViewManager_o *)this->fields.baseListTabSp;
    if ( !listManager )
      goto LABEL_83;
    UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 0, 0LL);
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)listManager,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v37);
      byte_4C1C955 = 1;
    }
    listManager = (QuestInformationListViewManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      listManager = (QuestInformationListViewManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)UserQuestInfoMaster__TryGetEntity(
                                                         (UserQuestInfoMaster_o *)MasterData_object,
                                                         &entity,
                                                         *(_QWORD *)&listManager->fields.sort->fields.bonusKind,
                                                         questId,
                                                         0LL);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_83;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_83;
      QuestInformationListViewManager__CreateRewardList(
        listManager,
        0,
        entity->fields.dropItemIds,
        entity->fields.dropSvtIds,
        v42);
      goto LABEL_57;
    }
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listManager,
                                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listManager,
                                                         &v76,
                                                         questId,
                                                         (const MethodInfo_329AE94 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !v76 )
        goto LABEL_83;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_83;
      QuestInformationListViewManager__CreateEmptyRewardList(
        listManager,
        0,
        (int32_t)v76[1].monitor,
        HIDWORD(v76[1].klass),
        v67);
LABEL_57:
      tabLsprite = this->fields.tabLsprite;
      listManager = (QuestInformationListViewManager_o *)QuestInformationComponent_TypeInfo;
      if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        listManager = (QuestInformationListViewManager_o *)QuestInformationComponent_TypeInfo;
      }
      klass = listManager->fields.sort->klass;
      if ( !klass )
        goto LABEL_83;
      if ( LODWORD(klass->_1.namespaze) )
      {
        data = (System_String_o **)klass->_1.byval_arg.data;
        if ( !data )
          goto LABEL_83;
        if ( *((_DWORD *)data + 6) > 1u )
        {
          if ( !tabLsprite )
            goto LABEL_83;
          UISprite__set_spriteName(tabLsprite, data[5], 0LL);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_83;
          if ( TabSpriteNames->max_length > 1 )
          {
            v72 = TabSpriteNames->m_Items[1];
            if ( !v72 )
              goto LABEL_83;
            if ( v72->max_length )
            {
              listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_83;
              UISprite__set_spriteName((UISprite_o *)listManager, v72->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v66 = &StringLiteral_11107/*"RetrieveProducts"*/;
              goto LABEL_75;
            }
          }
        }
      }
LABEL_84:
      sub_1C3B9C8(listManager, v37);
    }
    goto LABEL_72;
  }
  listManager = (QuestInformationListViewManager_o *)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_83;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_83;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( !*(_QWORD *)&EntityListFromQuestId->max_length )
    {
LABEL_72:
      LOBYTE(EntityListFromQuestId) = 0;
      return (char)EntityListFromQuestId;
    }
    v44 = QuestInformationComponent___c_TypeInfo;
    if ( !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
      v44 = QuestInformationComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__int__o *)v44->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = QuestInformationComponent___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__30_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ViewEnemyEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__30_0, v46, Method_QuestInformationComponent___c__Setup_b__30_0__, 0LL);
      static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
        (int64_t)_9__30_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v43,
                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                 (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    listManager = (QuestInformationListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v54,
                                                         (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !this->fields.listManager )
      goto LABEL_83;
    QuestInformationListViewManager__CreateEnemyList(
      this->fields.listManager,
      0,
      questId,
      (System_Int32_array *)listManager,
      v55);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)listManager,
                                                         questId,
                                                         0LL);
    v56 = this->fields.tabLsprite;
    v57 = (QuestEntity_o *)listManager;
    v58 = QuestInformationComponent_TypeInfo;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v58 = QuestInformationComponent_TypeInfo;
    }
    v59 = v58->static_fields->TabSpriteNames;
    if ( !v59 )
      goto LABEL_83;
    if ( !v59->max_length )
      goto LABEL_84;
    v60 = v59->m_Items[0];
    if ( !v60 )
      goto LABEL_83;
    if ( !v60->max_length )
      goto LABEL_84;
    if ( !v56 )
      goto LABEL_83;
    UISprite__set_spriteName(v56, v60->m_Items[0], 0LL);
    v61 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
    if ( !v61 )
      goto LABEL_83;
    if ( v61->max_length <= 1 )
      goto LABEL_84;
    v62 = v61->m_Items[1];
    if ( !v62 )
      goto LABEL_83;
    if ( v62->max_length <= 1 )
      goto LABEL_84;
    listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
    if ( !listManager )
      goto LABEL_83;
    UISprite__set_spriteName((UISprite_o *)listManager, v62->m_Items[1], 0LL);
    if ( !v57 )
      goto LABEL_83;
    HasFlag = QuestEntity__HasFlag(v57, 0x200000000000000LL, 0LL);
    tabInfoLabel = this->fields.tabInfoLabel;
    v65 = HasFlag;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( HasFlag )
      {
LABEL_50:
        v66 = &StringLiteral_11106/*"Rethrow statement is valid only inside a Catch block."*/;
LABEL_75:
        listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get((System_String_o *)*v66, 0LL);
        if ( tabInfoLabel )
        {
          UILabel__set_text(tabInfoLabel, (System_String_o *)listManager, 0LL);
          this->fields.settedQuestId = questId;
          titleBarInfoLabel = this->fields.titleBarInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11108/*"RetrieveProducts failed: "*/,
                                                               0LL);
          if ( titleBarInfoLabel )
          {
            UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0LL);
            listManager = (QuestInformationListViewManager_o *)this->fields.maskObj;
            this->fields.mIsLetAutoOpen = 1;
            if ( listManager )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0LL);
              v74 = this->fields.listManager;
              if ( v74 )
              {
                LOBYTE(EntityListFromQuestId) = 1;
                v74->fields.mIsResetReady = 0;
                return (char)EntityListFromQuestId;
              }
            }
          }
        }
LABEL_83:
        sub_1C3B9C0(listManager, v37);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v65 )
        goto LABEL_50;
    }
    v66 = &StringLiteral_11105/*"Rethrow as "*/;
    goto LABEL_75;
  }
  return (char)EntityListFromQuestId;
}


int32_t __fastcall QuestInformationComponent__Showing(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.settedQuestId;
}


bool __fastcall QuestInformationComponent__isListBuilding(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8

  listManager = this->fields.listManager;
  if ( !listManager )
    sub_1C3B9C0(this, method);
  return listManager->fields.mIsBuildingList;
}


bool __fastcall QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void __fastcall QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1EE5B & 1) == 0 )
  {
    sub_1C3B764(&QuestInformationComponent___c_TypeInfo, v1);
    byte_4C1EE5B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestInformationComponent___c_TypeInfo->static_fields->__9 = (struct QuestInformationComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestInformationComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestInformationComponent___c___ctor(QuestInformationComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestInformationComponent___c___Setup_b__30_0(
        QuestInformationComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C3B9C0(this, 0LL);
  return value->fields.enemyId;
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___ctor(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__0(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent___c__DisplayClass43_0_o *v2; // x19
  struct MoveObject_o *mo; // x8
  struct MoveObject_o *v4; // x8
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  float x; // s8
  QuestInformationComponent_c *v7; // x0

  v2 = this;
  if ( (byte_4C1EE5C & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_1C3B764(&QuestInformationComponent_TypeInfo, method);
    byte_4C1EE5C = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.x, 0LL),
        (v4 = v2->fields.mo) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  tgtTitleBarObj = v2->fields.tgtTitleBarObj;
  x = v4->fields.mNow.fields.x;
  v7 = QuestInformationComponent_TypeInfo;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v7 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)((float)v7->static_fields->BAR_BASE_OFFSET - x) - (float)v2->fields.offsetX,
    0LL);
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_c *v3; // x0
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  int32_t tgt_x; // w22
  QuestInformationListViewManager_o *listManager; // x0
  const MethodInfo *v7; // x1
  struct QuestInformationComponent_o *_4__this; // x8
  struct QuestInformationComponent_o *v9; // x8
  struct QuestInformationComponent_o *v10; // x8

  if ( (byte_4C1EE5D & 1) == 0 )
  {
    sub_1C3B764(&QuestInformationComponent_TypeInfo, method);
    byte_4C1EE5D = 1;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, (float)this->fields.tgt_x, 0LL);
  v3 = QuestInformationComponent_TypeInfo;
  tgtTitleBarObj = this->fields.tgtTitleBarObj;
  tgt_x = this->fields.tgt_x;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v3 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)(v3->static_fields->BAR_BASE_OFFSET - tgt_x - this->fields.offsetX),
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.dispAnimState = 0;
  if ( this->fields.tgt_x != QuestInformationComponent_TypeInfo->static_fields->FRAME_OUT_POS_X )
    return;
  listManager = _4__this->fields.listManager;
  if ( !listManager
    || (QuestInformationListViewManager__DestroyList(listManager, v7), (v9 = this->fields.__4__this) == 0LL)
    || (listManager = (QuestInformationListViewManager_o *)v9->fields.maskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
LABEL_13:
    sub_1C3B9C0(listManager, v7);
  }
  v10->fields.settedQuestId = -1;
}