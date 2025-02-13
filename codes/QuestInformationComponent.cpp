void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x20
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x20
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct QuestInformationComponent_StaticFields *static_fields; // x8

  if ( (byte_4BD9417 & 1) == 0 )
  {
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&string_____TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_23140/*"questinfo_tab_btn_txt_02_off"*/);
    sub_1C21E38(&StringLiteral_23138/*"questinfo_tab_btn_txt_01_off"*/);
    sub_1C21E38(&StringLiteral_23141/*"questinfo_tab_btn_txt_02_on"*/);
    sub_1C21E38(&StringLiteral_23139/*"questinfo_tab_btn_txt_01_on"*/);
    byte_4BD9417 = 1;
  }
  v1 = sub_1C21EE0(string_____TypeInfo, 2LL);
  v2 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_14;
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v11 = StringLiteral_23138/*"questinfo_tab_btn_txt_01_off"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_23138/*"questinfo_tab_btn_txt_01_off"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
LABEL_13:
    sub_1C2209C(v2, v3);
  }
  v18 = StringLiteral_23139/*"questinfo_tab_btn_txt_01_on"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_23139/*"questinfo_tab_btn_txt_01_on"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( !v1 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v1 + 32) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 32), v10, v19, v20, v21, v22, v23, v24);
  v2 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v2 )
LABEL_14:
    sub_1C22094(v2, v3);
  v31 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_13;
  v32 = StringLiteral_23140/*"questinfo_tab_btn_txt_02_off"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_23140/*"questinfo_tab_btn_txt_02_off"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v32, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_13;
  v39 = StringLiteral_23141/*"questinfo_tab_btn_txt_02_on"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_23141/*"questinfo_tab_btn_txt_02_on"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v1 + 40) = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 40), v31, v40, v41, v42, v43, v44, v45);
  QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames = (struct System_String_array_array *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestInformationComponent_TypeInfo->static_fields,
    v1,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
    sub_1C22094(this, questId);
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
  UnityEngine_Object_o *maskObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  Il2CppObject *Component_object; // x19
  float OffsetX; // s0
  float v8; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD940F & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD940F = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v5 = this->fields.maskObj;
    if ( !v5 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
      if ( Component_object )
      {
        v8 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0LL);
        v12 = size.fields.y;
        size.fields.y = (float)(v8 * 0.5) + x;
        v13 = size.fields.z;
        v14 = v8 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0LL);
        v17.fields.x = v14;
        v17.fields.y = v12;
        v17.fields.z = v13;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v17, 0LL);
        return;
      }
LABEL_15:
      sub_1C22094(v5, v4);
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
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  TerminalSceneComponent_c *v8; // x0

  v4 = this;
  if ( (byte_4BD9414 & 1) == 0 )
  {
    sub_1C21E38(&Method_QuestInformationComponent_CloseWindow__);
    this = (QuestInformationComponent_o *)sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9414 = 1;
  }
  listManager = v4->fields.listManager;
  if ( !listManager )
    goto LABEL_21;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v4->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v6 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C21E50(Method_QuestInformationComponent_CloseWindow__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_20;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v8->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0LL);
LABEL_20:
      QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_21:
    sub_1C22094(this, isPlaySe);
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


bool __fastcall QuestInformationComponent__FrameInOut(
        QuestInformationComponent_o *this,
        bool is_framein,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x20
  QuestBoardListViewManager_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UnityEngine_GameObject_o *window; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_GameObject_o *titleBarInfo; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  float OffsetX; // s0
  int v31; // w8
  QuestInformationComponent_c *v32; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v35; // w26
  int v36; // w27
  float LocalPositionX; // s8
  double v38; // d9
  double v39; // d0
  double v40; // d0
  double v41; // d1
  double v42; // d1
  int v43; // w8
  QuestInformationComponent_c *v44; // x0
  UnityEngine_GameObject_o *v45; // x19
  int v46; // w21
  float y; // s12
  float z; // s10
  float v50; // s13
  float v51; // s14
  Il2CppObject *Component_object; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t v59; // w8
  QuestInformationComponent_c *v60; // x0
  MoveObject_o *v61; // x21
  float v62; // s0
  float v63; // s9
  float v64; // s11
  float v65; // s13
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v67; // x22
  System_Action_o *v68; // x23
  TerminalPramsManager_c *v69; // x0
  ListViewSort_c *klass; // x8
  __int64 v71; // x8
  float from; // [xsp+4h] [xbp-9Ch]
  double iptr; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD9415 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__);
    sub_1C21E38(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__);
    sub_1C21E38(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
    byte_4BD9415 = 1;
  }
  v7 = sub_1C22084(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_77;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)this, v10, v11, v12, v13, v14, v15);
  window = this->fields.window;
  *(_QWORD *)(v7 + 16) = window;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)window, v17, v18, v19, v20, v21, v22);
  titleBarInfo = this->fields.titleBarInfo;
  *(_QWORD *)(v7 + 32) = titleBarInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)titleBarInfo, v24, v25, v26, v27, v28, v29);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v31 = 0x80000000;
  else
    v31 = (int)OffsetX;
  *(_DWORD *)(v7 + 40) = v31;
  v32 = QuestInformationComponent_TypeInfo;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v32 = QuestInformationComponent_TypeInfo;
    v31 = *(_DWORD *)(v7 + 40);
  }
  static_fields = v32->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v35 = static_fields->BASE_X - v31;
  if ( is_framein )
    v36 = static_fields->BASE_X - v31;
  else
    v36 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v7 + 44) = v36;
  if ( is_force )
    goto LABEL_34;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), 0LL);
  if ( !byte_4BD7994 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7994 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = LocalPositionX;
  v39 = modf(LocalPositionX, &iptr);
  if ( LocalPositionX >= 0.0 )
  {
    if ( v39 != 0.5 )
    {
      v40 = floor(v38 + 0.5);
      goto LABEL_29;
    }
    v40 = iptr;
    v41 = 1.0;
  }
  else
  {
    if ( v39 != -0.5 )
    {
      v40 = ceil(v38 + -0.5);
      goto LABEL_29;
    }
    v40 = iptr;
    v41 = -1.0;
  }
  v42 = v40 + v41;
  if ( ((__int64)v40 & 1) != 0 )
    v40 = v42;
LABEL_29:
  if ( v40 == INFINITY )
    v43 = 0x80000000;
  else
    v43 = (int)v40;
  if ( v36 != v43 )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v75 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
    v50 = v75.fields.y;
    v51 = v75.fields.z;
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         *(UnityEngine_GameObject_o **)(v7 + 16),
                         (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v7 + 24) = Component_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)Component_object, v53, v54, v55, v56, v57, v58);
    if ( is_framein )
      v59 = 1;
    else
      v59 = 2;
    this->fields.dispAnimState = v59;
    v60 = QuestInformationComponent_TypeInfo;
    v61 = *(MoveObject_o **)(v7 + 24);
    if ( is_framein )
      v62 = v51;
    else
      v62 = z;
    if ( is_framein )
      v63 = v50;
    else
      v63 = y;
    if ( is_framein )
      v64 = (float)FRAME_OUT_POS_X;
    else
      v64 = (float)v35;
    if ( !is_framein )
      z = v51;
    if ( !is_framein )
      y = v50;
    if ( is_framein )
      v65 = (float)v35;
    else
      v65 = (float)FRAME_OUT_POS_X;
    from = v62;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v60 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v60->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v67 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v67,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v68 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v68,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v61 )
    {
      v76.fields.z = from;
      v76.fields.x = v64;
      v76.fields.y = v63;
      v77.fields.x = v65;
      v77.fields.y = y;
      v77.fields.z = z;
      MoveObject__Play(v61, v76, v77, FRAME_IN_OUT_MV_SPD_TIME, v67, v68, 0.0, 17, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9404 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9404 = 1;
      }
      v69 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
      }
      if ( v69->static_fields->_IsBackQuestBoardDisable_k__BackingField )
        return 1;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v8 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v8 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v8->fields.sort->klass;
      if ( klass )
      {
        v71 = *(_QWORD *)&klass->_2.static_fields_size;
        if ( v71 )
        {
          v8 = *(QuestBoardListViewManager_o **)(v71 + 296);
          if ( v8 )
          {
            QuestBoardListViewManager__SetBackMaskActive(v8, !is_framein, 0, 0LL);
            return 1;
          }
        }
      }
    }
LABEL_77:
    sub_1C22094(v8, v9);
  }
  v36 = *(_DWORD *)(v7 + 44);
LABEL_34:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), (float)v36, 0LL);
  v44 = QuestInformationComponent_TypeInfo;
  v45 = *(UnityEngine_GameObject_o **)(v7 + 32);
  v46 = *(_DWORD *)(v7 + 44);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v44 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v45,
    (float)(v44->static_fields->BAR_BASE_OFFSET - v46 - *(_DWORD *)(v7 + 40)),
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
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  QuestEntity_o *v7; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9416 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4BD9416 = 1;
  }
  entity = 0LL;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C73D14(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1C22094(MasterData_object, method);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          targetQuestId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v7 = (QuestEntity_o *)entity;
  if ( QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    if ( !entity )
      return 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    if ( !v7 )
      return 0;
  }
  return !QuestEntity__HasFlag(v7, 2LL, 0LL) && v7->fields.afterClear != 1;
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_35133456(
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
  if ( (byte_4BD9412 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C21E38(&Method_QuestInformationComponent_OnClickTabL__);
    byte_4BD9412 = 1;
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
        v4 = (_QWORD *)sub_1C21E50(Method_QuestInformationComponent_OnClickTabL__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
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
      sub_1C22094(this, method);
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
  if ( (byte_4BD9413 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C21E38(&Method_QuestInformationComponent_OnClickTabR__);
    byte_4BD9413 = 1;
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
        v4 = (_QWORD *)sub_1C21E50(Method_QuestInformationComponent_OnClickTabR__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
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
      sub_1C22094(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_4BD9410 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9410 = 1;
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
    sub_1C22094(v5, v4);
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
    sub_1C22094(this, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  QuestInformationListViewManager_o *listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  QuestInformationComponent___c_c *v26; // x0
  System_Func_object__int__o *_9__30_0; // x22
  Il2CppObject *v28; // x23
  struct QuestInformationComponent___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  const MethodInfo *v37; // x4
  UISprite_o *v38; // x22
  QuestEntity_o *v39; // x21
  QuestInformationComponent_c *v40; // x8
  struct System_String_array_array *v41; // x8
  System_String_array *v42; // x8
  struct System_String_array_array *v43; // x8
  System_String_array *v44; // x8
  bool HasFlag; // w0
  UILabel_o *tabInfoLabel; // x21
  bool v47; // w22
  __int64 *v48; // x8
  const MethodInfo *v49; // x4
  UISprite_o *tabLsprite; // x21
  ListViewSort_c *klass; // x8
  System_String_o **data; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v54; // x8
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v56; // x8
  Il2CppObject *v58; // [xsp+0h] [xbp-50h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD9411 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestInformationComponent___c__Setup_b__30_0__);
    sub_1C21E38(&QuestInformationComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_11091/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/);
    sub_1C21E38(&StringLiteral_11093/*"QUEST_INFO_TOP"*/);
    sub_1C21E38(&StringLiteral_11092/*"QUEST_INFO_TAB_REWARD"*/);
    sub_1C21E38(&StringLiteral_11090/*"QUEST_INFO_TAB_ENEMY"*/);
    byte_4BD9411 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.customOpen,
    (int64_t)customOpen,
    *(int64_t *)&displayScene,
    (int32_t)customOpen,
    (System_String_o *)customClose,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.customClose,
    (int64_t)customClose,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_83;
  QuestInformationListViewManager__DestroyList(listManager, v19);
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
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)listManager,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
        v24);
      goto LABEL_57;
    }
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listManager,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listManager,
                                                         &v58,
                                                         questId,
                                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !v58 )
        goto LABEL_83;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_83;
      QuestInformationListViewManager__CreateEmptyRewardList(
        listManager,
        0,
        (int32_t)v58[1].monitor,
        HIDWORD(v58[1].klass),
        v49);
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
            v54 = TabSpriteNames->m_Items[1];
            if ( !v54 )
              goto LABEL_83;
            if ( v54->max_length )
            {
              listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_83;
              UISprite__set_spriteName((UISprite_o *)listManager, v54->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v48 = &StringLiteral_11092/*"QUEST_INFO_TAB_REWARD"*/;
              goto LABEL_75;
            }
          }
        }
      }
LABEL_84:
      sub_1C2209C(listManager, v19);
    }
    goto LABEL_72;
  }
  listManager = (QuestInformationListViewManager_o *)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_83;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_83;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( !*(_QWORD *)&EntityListFromQuestId->max_length )
    {
LABEL_72:
      LOBYTE(EntityListFromQuestId) = 0;
      return (char)EntityListFromQuestId;
    }
    v26 = QuestInformationComponent___c_TypeInfo;
    if ( !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
      v26 = QuestInformationComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__int__o *)v26->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestInformationComponent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__30_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_ViewEnemyEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__30_0, v28, Method_QuestInformationComponent___c__Setup_b__30_0__, 0LL);
      static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
        (int64_t)_9__30_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    listManager = (QuestInformationListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v36,
                                                         (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !this->fields.listManager )
      goto LABEL_83;
    QuestInformationListViewManager__CreateEnemyList(
      this->fields.listManager,
      0,
      questId,
      (System_Int32_array *)listManager,
      v37);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)listManager,
                                                         questId,
                                                         0LL);
    v38 = this->fields.tabLsprite;
    v39 = (QuestEntity_o *)listManager;
    v40 = QuestInformationComponent_TypeInfo;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v40 = QuestInformationComponent_TypeInfo;
    }
    v41 = v40->static_fields->TabSpriteNames;
    if ( !v41 )
      goto LABEL_83;
    if ( !v41->max_length )
      goto LABEL_84;
    v42 = v41->m_Items[0];
    if ( !v42 )
      goto LABEL_83;
    if ( !v42->max_length )
      goto LABEL_84;
    if ( !v38 )
      goto LABEL_83;
    UISprite__set_spriteName(v38, v42->m_Items[0], 0LL);
    v43 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
    if ( !v43 )
      goto LABEL_83;
    if ( v43->max_length <= 1 )
      goto LABEL_84;
    v44 = v43->m_Items[1];
    if ( !v44 )
      goto LABEL_83;
    if ( v44->max_length <= 1 )
      goto LABEL_84;
    listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
    if ( !listManager )
      goto LABEL_83;
    UISprite__set_spriteName((UISprite_o *)listManager, v44->m_Items[1], 0LL);
    if ( !v39 )
      goto LABEL_83;
    HasFlag = QuestEntity__HasFlag(v39, 0x200000000000000LL, 0LL);
    tabInfoLabel = this->fields.tabInfoLabel;
    v47 = HasFlag;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( HasFlag )
      {
LABEL_50:
        v48 = &StringLiteral_11091/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
LABEL_75:
        listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
        if ( tabInfoLabel )
        {
          UILabel__set_text(tabInfoLabel, (System_String_o *)listManager, 0LL);
          this->fields.settedQuestId = questId;
          titleBarInfoLabel = this->fields.titleBarInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11093/*"QUEST_INFO_TOP"*/,
                                                               0LL);
          if ( titleBarInfoLabel )
          {
            UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0LL);
            listManager = (QuestInformationListViewManager_o *)this->fields.maskObj;
            this->fields.mIsLetAutoOpen = 1;
            if ( listManager )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0LL);
              v56 = this->fields.listManager;
              if ( v56 )
              {
                LOBYTE(EntityListFromQuestId) = 1;
                v56->fields.mIsResetReady = 0;
                return (char)EntityListFromQuestId;
              }
            }
          }
        }
LABEL_83:
        sub_1C22094(listManager, v19);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v47 )
        goto LABEL_50;
    }
    v48 = &StringLiteral_11090/*"QUEST_INFO_TAB_ENEMY"*/;
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
    sub_1C22094(this, method);
  return listManager->fields.mIsBuildingList;
}


bool __fastcall QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void __fastcall QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9418 & 1) == 0 )
  {
    sub_1C21E38(&QuestInformationComponent___c_TypeInfo);
    byte_4BD9418 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestInformationComponent___c_TypeInfo->static_fields->__9 = (struct QuestInformationComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestInformationComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
  if ( (byte_4BD9419 & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_1C21E38(&QuestInformationComponent_TypeInfo);
    byte_4BD9419 = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.x, 0LL),
        (v4 = v2->fields.mo) == 0LL) )
  {
    sub_1C22094(this, method);
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

  if ( (byte_4BD941A & 1) == 0 )
  {
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    byte_4BD941A = 1;
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
    sub_1C22094(listManager, v7);
  }
  v10->fields.settedQuestId = -1;
}