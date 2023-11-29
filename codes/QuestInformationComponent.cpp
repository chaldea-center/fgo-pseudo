void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array **v9; // x19
  __int64 v10; // x2
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x20
  __int64 v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x0
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  QuestInformationComponent_c *v56; // x8

  if ( (byte_40F95B1 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v1);
    sub_B16FFC(&string_____TypeInfo, v3);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_21555, v5);
    sub_B16FFC(&StringLiteral_21553, v6);
    sub_B16FFC(&StringLiteral_21556, v7);
    sub_B16FFC(&StringLiteral_21554, v8);
    byte_40F95B1 = 1;
  }
  v9 = (System_Int32_array **)sub_B17014(string_____TypeInfo, 2LL, v2);
  v11 = sub_B17014(string___TypeInfo, 2LL, v10);
  if ( !v11 )
    goto LABEL_33;
  v18 = (System_Int32_array **)v11;
  v19 = StringLiteral_21553;
  if ( StringLiteral_21553 )
  {
    v19 = sub_B170BC(StringLiteral_21553, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_21553;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_31;
  v18[4] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 4), v20, v12, v13, v14, v15, v16, v17);
  v19 = StringLiteral_21554;
  if ( StringLiteral_21554 )
  {
    v19 = sub_B170BC(StringLiteral_21554, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_21554;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_31;
  v18[5] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 5), v20, v12, v21, v22, v23, v24, v25);
  if ( !v9 )
    goto LABEL_33;
  v19 = sub_B170BC(v18, *(_QWORD *)&(*v9)->m_Items[9]);
  if ( !v19 )
    goto LABEL_32;
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_31;
  v9[4] = (System_Int32_array *)v18;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 4), v18, v12, v26, v27, v28, v29, v30);
  v32 = sub_B17014(string___TypeInfo, 2LL, v31);
  if ( !v32 )
LABEL_33:
    sub_B170D4();
  v38 = (System_Int32_array **)v32;
  v19 = StringLiteral_21555;
  if ( StringLiteral_21555 )
  {
    v19 = sub_B170BC(StringLiteral_21555, *(_QWORD *)&(*v38)->m_Items[9]);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_21555;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v38 + 6) )
    goto LABEL_31;
  v38[4] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v38 + 4), v20, v12, v33, v34, v35, v36, v37);
  v19 = StringLiteral_21556;
  if ( StringLiteral_21556 )
  {
    v19 = sub_B170BC(StringLiteral_21556, *(_QWORD *)&(*v38)->m_Items[9]);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_21556;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *((_DWORD *)v38 + 6) <= 1u )
    goto LABEL_31;
  v38[5] = (System_Int32_array *)v20;
  sub_B16F98((BattleServantConfConponent_o *)(v38 + 5), v20, v12, v39, v40, v41, v42, v43);
  v19 = sub_B170BC(v38, *(_QWORD *)&(*v9)->m_Items[9]);
  if ( !v19 )
  {
LABEL_32:
    sub_B170F4(v19);
    sub_B170A0();
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
  {
LABEL_31:
    sub_B17100(v19, v20, v12);
    sub_B170A0();
  }
  v9[5] = (System_Int32_array *)v38;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 5), v38, v12, v44, v45, v46, v47, v48);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, v9, v50, v51, v52, v53, v54, v55);
  v56 = QuestInformationComponent_TypeInfo;
  QuestInformationComponent_TypeInfo->static_fields->BASE_X = -254;
  v56->static_fields->FRAME_OUT_POS_X = -974;
  v56->static_fields->BAR_BASE_OFFSET = -1;
  v56->static_fields->FRAME_IN_OUT_MV_SPD_TIME = 0.4;
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_BoxCollider_o *Component_srcLineSprite; // x19
  float OffsetX; // s0
  float v9; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F95A9 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F95A9 = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v6 = this->fields.maskObj;
    if ( !v6 )
      goto LABEL_18;
    Component_srcLineSprite = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v6,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
      if ( Component_srcLineSprite )
      {
        v9 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center(Component_srcLineSprite, 0LL);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size(Component_srcLineSprite, 0LL);
        v13 = size.fields.y;
        size.fields.y = (float)(v9 * 0.5) + x;
        v14 = size.fields.z;
        v15 = v9 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center(Component_srcLineSprite, size, 0LL);
        v18.fields.x = v15;
        v18.fields.y = v13;
        v18.fields.z = v14;
        UnityEngine_BoxCollider__set_size(Component_srcLineSprite, v18, 0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


void __fastcall QuestInformationComponent__Close(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *customClose; // x8

  customClose = this->fields.customClose;
  this->fields.settedQuestId = -1;
  if ( customClose )
  {
    System_Action__Invoke(customClose, 0LL);
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
  __int64 v5; // x1
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  TerminalSceneComponent_c *v9; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_40F95AE & 1) == 0 )
  {
    sub_B16FFC(&Method_QuestInformationComponent_CloseWindow__, isPlaySe);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    byte_40F95AE = 1;
  }
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_23;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    this->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v7 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 75) & 2) != 0 )
        v7 = (_QWORD *)sub_B17004(Method_QuestInformationComponent_CloseWindow__);
      v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    }
    if ( this->fields.displayScene != 1 )
      goto LABEL_22;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, isPlaySe);
      byte_40F6042 = 1;
    }
    v9 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v9->static_fields->mInstance;
    if ( mInstance )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff(mInstance, 0LL);
LABEL_22:
      QuestInformationComponent__Close(this, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_23:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **window; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **titleBarInfo; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  float OffsetX; // s0
  double v36; // d0
  int v37; // w8
  QuestInformationComponent_c *v38; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v41; // w26
  int v42; // w27
  float LocalPositionX; // s0
  QuestInformationComponent_c *v44; // x0
  UnityEngine_GameObject_o *v45; // x20
  int v46; // w21
  float y; // s12
  float z; // s13
  float v50; // s11
  float v51; // s14
  float v52; // s15
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int32_t v64; // w8
  QuestInformationComponent_c *v65; // x0
  MoveObject_o *v66; // x20
  float v67; // s0
  float v68; // s9
  float v69; // s10
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x22
  float v77; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F95AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, is_framein);
    sub_B16FFC(&FSUtility_TypeInfo, v8);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v9);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v10);
    sub_B16FFC(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__, v11);
    sub_B16FFC(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__, v12);
    sub_B16FFC(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo, v13);
    byte_40F95AF = 1;
  }
  v14 = sub_B170CC(QuestInformationComponent___c__DisplayClass43_0_TypeInfo, is_framein, is_force, method, v4);
  QuestInformationComponent___c__DisplayClass43_0___ctor((QuestInformationComponent___c__DisplayClass43_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_46;
  *(_QWORD *)(v14 + 48) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 48), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  window = (System_Int32_array **)this->fields.window;
  *(_QWORD *)(v14 + 16) = window;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), window, v22, v23, v24, v25, v26, v27);
  titleBarInfo = (System_Int32_array **)this->fields.titleBarInfo;
  *(_QWORD *)(v14 + 32) = titleBarInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), titleBarInfo, v29, v30, v31, v32, v33, v34);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v36 = -OffsetX;
  else
    v36 = OffsetX;
  v37 = (int)v36;
  *(_DWORD *)(v14 + 40) = (int)v36;
  v38 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v38 = QuestInformationComponent_TypeInfo;
    v37 = *(_DWORD *)(v14 + 40);
  }
  static_fields = v38->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v41 = static_fields->BASE_X - v37;
  if ( is_framein )
    v42 = static_fields->BASE_X - v37;
  else
    v42 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v14 + 44) = v42;
  if ( is_force )
    goto LABEL_19;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v14 + 16), 0LL);
  if ( v42 != UnityEngine_Mathf__RoundToInt(LocalPositionX, 0LL) )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v14 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v50 = (float)v41;
    v79 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v14 + 16), 0LL);
    v51 = v79.fields.y;
    v52 = v79.fields.z;
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  *(UnityEngine_GameObject_o **)(v14 + 16),
                                                  (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v14 + 24) = Component_UIWidget;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), Component_UIWidget, v54, v55, v56, v57, v58, v59);
    if ( is_framein )
      v64 = 1;
    else
      v64 = 2;
    this->fields.dispAnimState = v64;
    v65 = QuestInformationComponent_TypeInfo;
    v66 = *(MoveObject_o **)(v14 + 24);
    if ( is_framein )
      v67 = v52;
    else
      v67 = z;
    if ( is_framein )
      v68 = v51;
    else
      v68 = y;
    if ( is_framein )
      v69 = (float)FRAME_OUT_POS_X;
    else
      v69 = (float)v41;
    if ( !is_framein )
      v50 = (float)FRAME_OUT_POS_X;
    if ( !is_framein )
      y = v51;
    if ( !is_framein )
      z = v52;
    v77 = v67;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v65 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v65->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v71 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v14,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v14,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v66 )
    {
      v80.fields.z = v77;
      v80.fields.x = v69;
      v80.fields.y = v68;
      v81.fields.x = v50;
      v81.fields.y = y;
      v81.fields.z = z;
      MoveObject__Play(v66, v80, v81, FRAME_IN_OUT_MV_SPD_TIME, v71, v76, 0.0, 17, 0LL);
      return 1;
    }
LABEL_46:
    sub_B170D4();
  }
  v42 = *(_DWORD *)(v14 + 44);
LABEL_19:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v14 + 16), (float)v42, 0LL);
  v44 = QuestInformationComponent_TypeInfo;
  v45 = *(UnityEngine_GameObject_o **)(v14 + 32);
  v46 = *(_DWORD *)(v14 + 44);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v44 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v45,
    (float)(v44->static_fields->BAR_BASE_OFFSET - v46 - *(_DWORD *)(v14 + 40)),
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  DataManager_o *v8; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x1
  QuestEntity_o *v11; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F95B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F95B0 = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              v8,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         targetQuestId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v11 = (QuestEntity_o *)entity;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    return QuestInformationComponent__IsDisplayQuestInformation_23891536(v11, v10);
  }
  else
  {
    return 0;
  }
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_23891536(
        QuestEntity_o *questEntity,
        const MethodInfo *method)
{
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  bool result; // w0

  result = 0;
  if ( questEntity )
  {
    if ( questEntity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(questEntity, method)) == 0LL )
      p_flag = &questEntity->fields.flag;
    else
      p_flag = &PhaseDetail->fields.flag;
    if ( (*(_BYTE *)p_flag & 2) == 0 && questEntity->fields.afterClear != 1 )
      return 1;
  }
  return result;
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
  struct QuestInformationListViewManager_o *listManager; // x8
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0

  if ( (byte_40F95AC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F95AC = 1;
  }
  if ( this->fields.TabOpened )
  {
    listManager = this->fields.listManager;
    if ( !listManager )
      goto LABEL_13;
    if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v5 = this->fields.listManager;
      this->fields.TabOpened = 0;
      if ( v5 )
      {
        QuestInformationListViewManager__DestroyList(v5, v4);
        this->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0

  if ( (byte_40F95AD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F95AD = 1;
  }
  if ( this->fields.TabOpened != 1 )
  {
    listManager = this->fields.listManager;
    if ( !listManager )
      goto LABEL_13;
    if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v5 = this->fields.listManager;
      this->fields.TabOpened = 1;
      if ( v5 )
      {
        QuestInformationListViewManager__DestroyList(v5, v4);
        this->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_40F95AA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F95AA = 1;
  }
  this->fields.dispAnimState = 0;
  listManager = (UnityEngine_Object_o *)this->fields.listManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listManager, 0LL, 0LL) )
  {
    v5 = this->fields.listManager;
    if ( !v5 )
      goto LABEL_16;
    QuestInformationListViewManager__DestroyList(v5, v4);
  }
  this->fields.settedQuestId = -1;
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v7 = this->fields.maskObj;
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall QuestInformationComponent__Open(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.customOpen )
  {
    System_Action__Invoke(this->fields.customOpen, 0LL);
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
    sub_B170D4();
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  QuestInformationListViewManager_o *listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  UIBasicSprite_o *baseListTabSp; // x0
  WebViewManager_o *Instance; // x0
  UserQuestInfoMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  const MethodInfo *v46; // x4
  QuestInformationListViewManager_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  UIBasicSprite_o *v50; // x0
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  QuestInformationComponent___c_c *v57; // x0
  struct QuestInformationComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x22
  Il2CppObject *v60; // x23
  struct QuestInformationComponent___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Int32_array *v69; // x0
  const MethodInfo *v70; // x4
  QuestMaster_o *v71; // x0
  const MethodInfo *v72; // x2
  QuestEntity_o *QuestEntity; // x0
  UISprite_o *v74; // x22
  QuestEntity_o *v75; // x21
  QuestInformationComponent_c *v76; // x8
  struct System_String_array_array *v77; // x8
  System_String_array *v78; // x8
  struct System_String_array_array *v79; // x8
  System_String_array *v80; // x8
  UISprite_o *v81; // x0
  const MethodInfo *v82; // x1
  int64_t *p_flag; // x8
  WebViewManager_o *v84; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v85; // x0
  const MethodInfo *v86; // x4
  QuestInformationListViewManager_o *v87; // x0
  UISprite_o *tabLsprite; // x21
  _QWORD *image; // x8
  __int64 v90; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v92; // x8
  UISprite_o *tabRsprite; // x0
  UILabel_o *tabInfoLabel; // x21
  __int64 *v95; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  System_String_o *v97; // x0
  UILabel_o *titleBarInfoLabel; // x20
  System_String_o *v99; // x0
  UnityEngine_GameObject_o *maskObj; // x0
  struct QuestInformationListViewManager_o *v101; // x8
  WarEntity_o *v103; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F95AB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v19);
    sub_B16FFC(&Method_System_Func_ViewEnemyEntity__int___ctor__, v20);
    sub_B16FFC(&System_Func_ViewEnemyEntity__int__TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_QuestInformationComponent___c__Setup_b__30_0__, v26);
    sub_B16FFC(&QuestInformationComponent___c_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_10906, v28);
    sub_B16FFC(&StringLiteral_10908, v29);
    sub_B16FFC(&StringLiteral_10907, v30);
    sub_B16FFC(&StringLiteral_10905, v31);
    byte_40F95AB = 1;
  }
  entity = 0LL;
  v103 = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.customOpen,
    (System_Int32_array **)customOpen,
    *(System_String_array ***)&displayScene,
    (System_String_array **)customOpen,
    (System_Boolean_array **)customClose,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.customClose,
    (System_Int32_array **)customClose,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_96;
  QuestInformationListViewManager__DestroyList(listManager, v38);
  TabOpened = this->fields.TabOpened;
  this->fields.mSetUpOnUpdate = 0;
  if ( TabOpened != 1 )
  {
    LOBYTE(EntityListFromQuestId) = 0;
    if ( TabOpened )
      return (char)EntityListFromQuestId;
    baseListTabSp = (UIBasicSprite_o *)this->fields.baseListTabSp;
    if ( !baseListTabSp )
      goto LABEL_96;
    UIBasicSprite__set_flip(baseListTabSp, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    MasterData_WarQuestSelectionMaster = (UserQuestInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_96;
    if ( UserQuestInfoMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, questId, 0LL) )
    {
      if ( !entity )
        goto LABEL_96;
      v47 = this->fields.listManager;
      if ( !v47 )
        goto LABEL_96;
      QuestInformationListViewManager__CreateRewardList(
        v47,
        0,
        entity->fields.dropItemIds,
        entity->fields.dropSvtIds,
        v46);
      goto LABEL_58;
    }
    v84 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v84 )
      goto LABEL_96;
    v85 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v84,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !v85 )
      goto LABEL_96;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v85,
           &v103,
           questId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__) )
    {
      if ( !v103 )
        goto LABEL_96;
      v87 = this->fields.listManager;
      if ( !v87 )
        goto LABEL_96;
      QuestInformationListViewManager__CreateEmptyRewardList(
        v87,
        0,
        (int32_t)v103->fields.age,
        *(&v103->fields.id + 1),
        v86);
LABEL_58:
      tabLsprite = this->fields.tabLsprite;
      QuestEntity = (QuestEntity_o *)QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        QuestEntity = (QuestEntity_o *)QuestInformationComponent_TypeInfo;
      }
      image = QuestEntity[1].klass->_1.image;
      if ( !image )
        goto LABEL_96;
      if ( *((_DWORD *)image + 6) )
      {
        v90 = image[4];
        if ( !v90 )
          goto LABEL_96;
        if ( *(_DWORD *)(v90 + 24) > 1u )
        {
          if ( !tabLsprite )
            goto LABEL_96;
          UISprite__set_spriteName(tabLsprite, *(System_String_o **)(v90 + 40), 0LL);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_96;
          if ( TabSpriteNames->max_length > 1 )
          {
            v92 = TabSpriteNames->m_Items[1];
            if ( !v92 )
              goto LABEL_96;
            if ( v92->max_length )
            {
              tabRsprite = this->fields.tabRsprite;
              if ( !tabRsprite )
                goto LABEL_96;
              UISprite__set_spriteName(tabRsprite, v92->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v95 = &StringLiteral_10907;
LABEL_87:
              v97 = LocalizationManager__Get((System_String_o *)*v95, 0LL);
              if ( tabInfoLabel )
              {
                UILabel__set_text(tabInfoLabel, v97, 0LL);
                this->fields.settedQuestId = questId;
                titleBarInfoLabel = this->fields.titleBarInfoLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v99 = LocalizationManager__Get((System_String_o *)StringLiteral_10908, 0LL);
                if ( titleBarInfoLabel )
                {
                  UILabel__set_text(titleBarInfoLabel, v99, 0LL);
                  maskObj = this->fields.maskObj;
                  this->fields.mIsLetAutoOpen = 1;
                  if ( maskObj )
                  {
                    UnityEngine_GameObject__SetActive(maskObj, 1, 0LL);
                    v101 = this->fields.listManager;
                    if ( v101 )
                    {
                      LOBYTE(EntityListFromQuestId) = 1;
                      v101->fields.mIsResetReady = 0;
                      return (char)EntityListFromQuestId;
                    }
                  }
                }
              }
LABEL_96:
              sub_B170D4();
            }
          }
        }
      }
      goto LABEL_97;
    }
    goto LABEL_75;
  }
  v50 = (UIBasicSprite_o *)this->fields.baseListTabSp;
  if ( !v50 )
    goto LABEL_96;
  UIBasicSprite__set_flip(v50, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_96;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_WarQuestSelectionMaster, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( *(_QWORD *)&EntityListFromQuestId->max_length )
    {
      v57 = QuestInformationComponent___c_TypeInfo;
      if ( (BYTE3(QuestInformationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
        v57 = QuestInformationComponent___c_TypeInfo;
      }
      static_fields = v57->static_fields;
      _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)static_fields->__9;
        _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_ViewEnemyEntity__int__TypeInfo,
                                                                                     v52,
                                                                                     v53,
                                                                                     v54,
                                                                                     v55);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__30_0,
          v60,
          Method_QuestInformationComponent___c__Setup_b__30_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_ViewEnemyEntity__int___ctor__);
        v61 = QuestInformationComponent___c_TypeInfo->static_fields;
        v61->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v61->__9__30_0,
          (System_Int32_array **)_9__30_0,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v56,
                                                                   (System_Func_TSource__TResult__o *)_9__30_0,
                                                                   (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
      v69 = System_Linq_Enumerable__ToArray_int_(
              v68,
              (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !this->fields.listManager )
        goto LABEL_96;
      QuestInformationListViewManager__CreateEnemyList(this->fields.listManager, 0, questId, v69, v70);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v71 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( !v71 )
        goto LABEL_96;
      QuestEntity = QuestMaster__getQuestEntity(v71, questId, v72);
      v74 = this->fields.tabLsprite;
      v75 = QuestEntity;
      v76 = QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        v76 = QuestInformationComponent_TypeInfo;
      }
      v77 = v76->static_fields->TabSpriteNames;
      if ( !v77 )
        goto LABEL_96;
      if ( v77->max_length )
      {
        v78 = v77->m_Items[0];
        if ( !v78 )
          goto LABEL_96;
        if ( v78->max_length )
        {
          if ( !v74 )
            goto LABEL_96;
          UISprite__set_spriteName(v74, v78->m_Items[0], 0LL);
          v79 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !v79 )
            goto LABEL_96;
          if ( v79->max_length > 1 )
          {
            v80 = v79->m_Items[1];
            if ( !v80 )
              goto LABEL_96;
            if ( v80->max_length > 1 )
            {
              v81 = this->fields.tabRsprite;
              if ( !v81 )
                goto LABEL_96;
              UISprite__set_spriteName(v81, v80->m_Items[1], 0LL);
              if ( !v75 )
                goto LABEL_96;
              if ( v75->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(v75, v82)) == 0LL )
                p_flag = &v75->fields.flag;
              else
                p_flag = &PhaseDetail->fields.flag;
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( (*((_BYTE *)p_flag + 7) & 2) != 0 )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v95 = &StringLiteral_10906;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v95 = &StringLiteral_10905;
              }
              goto LABEL_87;
            }
          }
        }
      }
LABEL_97:
      sub_B17100(QuestEntity, v48, v49);
      sub_B170A0();
    }
LABEL_75:
    LOBYTE(EntityListFromQuestId) = 0;
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
    sub_B170D4();
  return listManager->fields.mIsBuildingList;
}


bool __fastcall QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void __fastcall QuestInformationComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40FA302 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationComponent___c_TypeInfo, v1);
    byte_40FA302 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestInformationComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct MoveObject_o *mo; // x8
  struct MoveObject_o *v4; // x8
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  float y; // s8
  QuestInformationComponent_c *v7; // x0

  if ( (byte_40FA303 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationComponent_TypeInfo, method);
    byte_40FA303 = 1;
  }
  mo = this->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL),
        (v4 = this->fields.mo) == 0LL) )
  {
    sub_B170D4();
  }
  tgtTitleBarObj = this->fields.tgtTitleBarObj;
  y = v4->fields.mNow.fields.y;
  v7 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v7 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)((float)v7->static_fields->BAR_BASE_OFFSET - y) - (float)this->fields.offsetX,
    0LL);
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  int32_t tgt_x; // w22
  QuestInformationComponent_c *v5; // x0
  struct QuestInformationComponent_o *_4__this; // x8
  struct QuestInformationComponent_o *v7; // x8
  QuestInformationListViewManager_o *listManager; // x0
  struct QuestInformationComponent_o *v9; // x8
  UnityEngine_GameObject_o *maskObj; // x0
  struct QuestInformationComponent_o *v11; // x8

  if ( (byte_40FA304 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationComponent_TypeInfo, method);
    byte_40FA304 = 1;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, (float)this->fields.tgt_x, 0LL);
  tgtTitleBarObj = this->fields.tgtTitleBarObj;
  tgt_x = this->fields.tgt_x;
  v5 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v5 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)(v5->static_fields->BAR_BASE_OFFSET - tgt_x - this->fields.offsetX),
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.dispAnimState = 0;
  if ( this->fields.tgt_x != QuestInformationComponent_TypeInfo->static_fields->FRAME_OUT_POS_X )
    return;
  v7 = this->fields.__4__this;
  if ( !v7
    || (listManager = v7->fields.listManager) == 0LL
    || (QuestInformationListViewManager__DestroyList(listManager, 0LL), (v9 = this->fields.__4__this) == 0LL)
    || (maskObj = v9->fields.maskObj) == 0LL
    || (UnityEngine_GameObject__SetActive(maskObj, 0, 0LL), (v11 = this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  v11->fields.settedQuestId = -1;
}