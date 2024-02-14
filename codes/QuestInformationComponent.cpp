void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array **v8; // x19
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  QuestInformationComponent_c *v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0

  if ( (byte_4213CCD & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v1);
    sub_B0D8A4(&string_____TypeInfo, v2);
    sub_B0D8A4(&string___TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_21717/*"questinfo_tab_btn_txt_02_off"*/, v4);
    sub_B0D8A4(&StringLiteral_21715/*"questinfo_tab_btn_txt_01_off"*/, v5);
    sub_B0D8A4(&StringLiteral_21718/*"questinfo_tab_btn_txt_02_on"*/, v6);
    sub_B0D8A4(&StringLiteral_21716/*"questinfo_tab_btn_txt_01_on"*/, v7);
    byte_4213CCD = 1;
  }
  v8 = (System_Int32_array **)sub_B0D8BC(string_____TypeInfo, 2LL);
  v9 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_33;
  v16 = (System_Int32_array **)v9;
  v17 = StringLiteral_21715/*"questinfo_tab_btn_txt_01_off"*/;
  if ( StringLiteral_21715/*"questinfo_tab_btn_txt_01_off"*/ )
  {
    v17 = sub_B0D964(StringLiteral_21715/*"questinfo_tab_btn_txt_01_off"*/, *(_QWORD *)&(*v16)->m_Items[9]);
    if ( !v17 )
      goto LABEL_32;
    v18 = (System_Int32_array **)StringLiteral_21715/*"questinfo_tab_btn_txt_01_off"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !*((_DWORD *)v16 + 6) )
    goto LABEL_31;
  v16[4] = (System_Int32_array *)v18;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 4), v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_21716/*"questinfo_tab_btn_txt_01_on"*/;
  if ( StringLiteral_21716/*"questinfo_tab_btn_txt_01_on"*/ )
  {
    v17 = sub_B0D964(StringLiteral_21716/*"questinfo_tab_btn_txt_01_on"*/, *(_QWORD *)&(*v16)->m_Items[9]);
    if ( !v17 )
      goto LABEL_32;
    v25 = (System_Int32_array **)StringLiteral_21716/*"questinfo_tab_btn_txt_01_on"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *((_DWORD *)v16 + 6) <= 1u )
    goto LABEL_31;
  v16[5] = (System_Int32_array *)v25;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 5), v25, v19, v20, v21, v22, v23, v24);
  if ( !v8 )
    goto LABEL_33;
  v17 = sub_B0D964(v16, *(_QWORD *)&(*v8)->m_Items[9]);
  if ( !v17 )
    goto LABEL_32;
  if ( !*((_DWORD *)v8 + 6) )
    goto LABEL_31;
  v8[4] = (System_Int32_array *)v16;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 4), v16, v26, v27, v28, v29, v30, v31);
  v9 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v9 )
LABEL_33:
    sub_B0D97C(v9);
  v38 = (System_Int32_array **)v9;
  v17 = StringLiteral_21717/*"questinfo_tab_btn_txt_02_off"*/;
  if ( StringLiteral_21717/*"questinfo_tab_btn_txt_02_off"*/ )
  {
    v17 = sub_B0D964(StringLiteral_21717/*"questinfo_tab_btn_txt_02_off"*/, *(_QWORD *)&(*v38)->m_Items[9]);
    if ( !v17 )
      goto LABEL_32;
    v39 = (System_Int32_array **)StringLiteral_21717/*"questinfo_tab_btn_txt_02_off"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( !*((_DWORD *)v38 + 6) )
    goto LABEL_31;
  v38[4] = (System_Int32_array *)v39;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 4), v39, v32, v33, v34, v35, v36, v37);
  v17 = StringLiteral_21718/*"questinfo_tab_btn_txt_02_on"*/;
  if ( StringLiteral_21718/*"questinfo_tab_btn_txt_02_on"*/ )
  {
    v17 = sub_B0D964(StringLiteral_21718/*"questinfo_tab_btn_txt_02_on"*/, *(_QWORD *)&(*v38)->m_Items[9]);
    if ( !v17 )
      goto LABEL_32;
    v46 = (System_Int32_array **)StringLiteral_21718/*"questinfo_tab_btn_txt_02_on"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( *((_DWORD *)v38 + 6) <= 1u )
    goto LABEL_31;
  v38[5] = (System_Int32_array *)v46;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 5), v46, v40, v41, v42, v43, v44, v45);
  v17 = sub_B0D964(v38, *(_QWORD *)&(*v8)->m_Items[9]);
  if ( !v17 )
  {
LABEL_32:
    v62 = sub_B0D99C(v17);
    sub_B0D948(v62, 0LL);
  }
  if ( *((_DWORD *)v8 + 6) <= 1u )
  {
LABEL_31:
    v61 = sub_B0D9A8(v17);
    sub_B0D948(v61, 0LL);
  }
  v8[5] = (System_Int32_array *)v38;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 5), v38, v47, v48, v49, v50, v51, v52);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v54, v55, v56, v57, v58, v59);
  v60 = QuestInformationComponent_TypeInfo;
  QuestInformationComponent_TypeInfo->static_fields->BASE_X = -254;
  v60->static_fields->FRAME_OUT_POS_X = -974;
  v60->static_fields->BAR_BASE_OFFSET = -1;
  v60->static_fields->FRAME_IN_OUT_MV_SPD_TIME = 0.4;
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
    sub_B0D97C(this);
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

  if ( (byte_4213CC5 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4213CC5 = 1;
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
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
      sub_B0D97C(v6);
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
  QuestInformationComponent_o *v4; // x19
  __int64 v5; // x1
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  TerminalSceneComponent_c *v9; // x0

  v4 = this;
  if ( (byte_4213CCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_QuestInformationComponent_CloseWindow__, isPlaySe);
    this = (QuestInformationComponent_o *)sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    byte_4213CCA = 1;
  }
  listManager = v4->fields.listManager;
  if ( !listManager )
    goto LABEL_23;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v4->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v7 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 75) & 2) != 0 )
        v7 = (_QWORD *)sub_B0D8AC(Method_QuestInformationComponent_CloseWindow__);
      v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_22;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, isPlaySe);
      byte_421083D = 1;
    }
    v9 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v9->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0LL);
LABEL_22:
      QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_23:
    sub_B0D97C(this);
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
  __int64 v13; // x19
  __int64 v14; // x0
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
  int32_t v62; // w8
  QuestInformationComponent_c *v63; // x0
  MoveObject_o *v64; // x20
  float v65; // s0
  float v66; // s9
  float v67; // s10
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  System_Action_o *v72; // x22
  float v73; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4213CCB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, is_framein);
    sub_B0D8A4(&FSUtility_TypeInfo, v7);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v8);
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__, v10);
    sub_B0D8A4(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__, v11);
    sub_B0D8A4(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo, v12);
    byte_4213CCB = 1;
  }
  v13 = sub_B0D974(QuestInformationComponent___c__DisplayClass43_0_TypeInfo, is_framein, is_force);
  QuestInformationComponent___c__DisplayClass43_0___ctor((QuestInformationComponent___c__DisplayClass43_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_46;
  *(_QWORD *)(v13 + 48) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  window = (System_Int32_array **)this->fields.window;
  *(_QWORD *)(v13 + 16) = window;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), window, v22, v23, v24, v25, v26, v27);
  titleBarInfo = (System_Int32_array **)this->fields.titleBarInfo;
  *(_QWORD *)(v13 + 32) = titleBarInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), titleBarInfo, v29, v30, v31, v32, v33, v34);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v36 = -OffsetX;
  else
    v36 = OffsetX;
  v37 = (int)v36;
  *(_DWORD *)(v13 + 40) = (int)v36;
  v38 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v38 = QuestInformationComponent_TypeInfo;
    v37 = *(_DWORD *)(v13 + 40);
  }
  static_fields = v38->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v41 = static_fields->BASE_X - v37;
  if ( is_framein )
    v42 = static_fields->BASE_X - v37;
  else
    v42 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v13 + 44) = v42;
  if ( is_force )
    goto LABEL_19;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v13 + 16), 0LL);
  if ( v42 != UnityEngine_Mathf__RoundToInt(LocalPositionX, 0LL) )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v50 = (float)v41;
    v75 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
    v51 = v75.fields.y;
    v52 = v75.fields.z;
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  *(UnityEngine_GameObject_o **)(v13 + 16),
                                                  (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v13 + 24) = Component_UIWidget;
    sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), Component_UIWidget, v54, v55, v56, v57, v58, v59);
    if ( is_framein )
      v62 = 1;
    else
      v62 = 2;
    this->fields.dispAnimState = v62;
    v63 = QuestInformationComponent_TypeInfo;
    v64 = *(MoveObject_o **)(v13 + 24);
    if ( is_framein )
      v65 = v52;
    else
      v65 = z;
    if ( is_framein )
      v66 = v51;
    else
      v66 = y;
    if ( is_framein )
      v67 = (float)FRAME_OUT_POS_X;
    else
      v67 = (float)v41;
    if ( !is_framein )
      v50 = (float)FRAME_OUT_POS_X;
    if ( !is_framein )
      y = v51;
    if ( !is_framein )
      z = v52;
    v73 = v65;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v63 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v63->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v69 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v13,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v70, v71);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v13,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v64 )
    {
      v76.fields.z = v73;
      v76.fields.x = v67;
      v76.fields.y = v66;
      v77.fields.x = v50;
      v77.fields.y = y;
      v77.fields.z = z;
      MoveObject__Play(v64, v76, v77, FRAME_IN_OUT_MV_SPD_TIME, v69, v72, 0.0, 17, 0LL);
      return 1;
    }
LABEL_46:
    sub_B0D97C(v14);
  }
  v42 = *(_DWORD *)(v13 + 44);
LABEL_19:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v13 + 16), (float)v42, 0LL);
  v44 = QuestInformationComponent_TypeInfo;
  v45 = *(UnityEngine_GameObject_o **)(v13 + 32);
  v46 = *(_DWORD *)(v13 + 44);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v44 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v45,
    (float)(v44->static_fields->BAR_BASE_OFFSET - v46 - *(_DWORD *)(v13 + 40)),
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
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x1
  QuestEntity_o *v10; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213CCC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4213CCC = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(v7);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
         &entity,
         targetQuestId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v10 = (QuestEntity_o *)entity;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    return QuestInformationComponent__IsDisplayQuestInformation_23213664(v10, v9);
  }
  else
  {
    return 0;
  }
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_23213664(
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
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4213CC8 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213CC8 = 1;
  }
  if ( v2->fields.TabOpened )
  {
    listManager = v2->fields.listManager;
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
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 0;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, v4);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B0D97C(this);
    }
  }
}


void __fastcall QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4213CC9 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213CC9 = 1;
  }
  if ( v2->fields.TabOpened != 1 )
  {
    listManager = v2->fields.listManager;
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
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 1;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, v4);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B0D97C(this);
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_4213CC6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213CC6 = 1;
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
    v5 = (QuestInformationListViewManager_o *)this->fields.maskObj;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(v5);
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
    sub_B0D97C(this);
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
  int64_t listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  UserQuestInfoMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v43; // x4
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  QuestInformationComponent___c_c *v47; // x0
  struct QuestInformationComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x22
  Il2CppObject *v50; // x23
  struct QuestInformationComponent___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  const MethodInfo *v59; // x4
  const MethodInfo *v60; // x2
  UISprite_o *v61; // x22
  QuestEntity_o *v62; // x21
  QuestInformationComponent_c *v63; // x8
  struct System_String_array_array *v64; // x8
  System_String_array *v65; // x8
  struct System_String_array_array *v66; // x8
  System_String_array *v67; // x8
  const MethodInfo *v68; // x1
  int64_t *p_flag; // x8
  const MethodInfo *v70; // x4
  UISprite_o *tabLsprite; // x21
  __int64 v72; // x8
  __int64 v73; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v75; // x8
  UILabel_o *tabInfoLabel; // x21
  __int64 *v77; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v80; // x8
  __int64 v81; // x0
  WarEntity_o *v83; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4213CC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v15);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v19);
    sub_B0D8A4(&Method_System_Func_ViewEnemyEntity__int___ctor__, v20);
    sub_B0D8A4(&System_Func_ViewEnemyEntity__int__TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&NetworkManager_TypeInfo, v23);
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&Method_QuestInformationComponent___c__Setup_b__30_0__, v26);
    sub_B0D8A4(&QuestInformationComponent___c_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_10968/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/, v28);
    sub_B0D8A4(&StringLiteral_10970/*"QUEST_INFO_TOP"*/, v29);
    sub_B0D8A4(&StringLiteral_10969/*"QUEST_INFO_TAB_REWARD"*/, v30);
    sub_B0D8A4(&StringLiteral_10967/*"QUEST_INFO_TAB_ENEMY"*/, v31);
    byte_4213CC7 = 1;
  }
  entity = 0LL;
  v83 = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.customOpen,
    (System_Int32_array **)customOpen,
    *(System_String_array ***)&displayScene,
    (System_String_array **)customOpen,
    (System_Boolean_array **)customClose,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.customClose,
    (System_Int32_array **)customClose,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  listManager = (int64_t)this->fields.listManager;
  if ( !listManager )
    goto LABEL_96;
  QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)listManager, v38);
  TabOpened = this->fields.TabOpened;
  this->fields.mSetUpOnUpdate = 0;
  if ( TabOpened != 1 )
  {
    LOBYTE(EntityListFromQuestId) = 0;
    if ( TabOpened )
      return (char)EntityListFromQuestId;
    listManager = (int64_t)this->fields.baseListTabSp;
    if ( !listManager )
      goto LABEL_96;
    UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 0, 0LL);
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_96;
    MasterData_WarQuestSelectionMaster = (UserQuestInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)listManager,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    listManager = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_96;
    listManager = UserQuestInfoMaster__TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    listManager,
                    questId,
                    0LL);
    if ( (listManager & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_96;
      listManager = (int64_t)this->fields.listManager;
      if ( !listManager )
        goto LABEL_96;
      QuestInformationListViewManager__CreateRewardList(
        (QuestInformationListViewManager_o *)listManager,
        0,
        entity->fields.dropItemIds,
        entity->fields.dropSvtIds,
        v43);
      goto LABEL_58;
    }
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_96;
    listManager = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)listManager,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_96;
    listManager = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)listManager,
                    &v83,
                    questId,
                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (listManager & 1) != 0 )
    {
      if ( !v83 )
        goto LABEL_96;
      listManager = (int64_t)this->fields.listManager;
      if ( !listManager )
        goto LABEL_96;
      QuestInformationListViewManager__CreateEmptyRewardList(
        (QuestInformationListViewManager_o *)listManager,
        0,
        (int32_t)v83->fields.age,
        *(&v83->fields.id + 1),
        v70);
LABEL_58:
      tabLsprite = this->fields.tabLsprite;
      listManager = (int64_t)QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        listManager = (int64_t)QuestInformationComponent_TypeInfo;
      }
      v72 = **(_QWORD **)(listManager + 184);
      if ( !v72 )
        goto LABEL_96;
      if ( *(_DWORD *)(v72 + 24) )
      {
        v73 = *(_QWORD *)(v72 + 32);
        if ( !v73 )
          goto LABEL_96;
        if ( *(_DWORD *)(v73 + 24) > 1u )
        {
          if ( !tabLsprite )
            goto LABEL_96;
          UISprite__set_spriteName(tabLsprite, *(System_String_o **)(v73 + 40), 0LL);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_96;
          if ( TabSpriteNames->max_length > 1 )
          {
            v75 = TabSpriteNames->m_Items[1];
            if ( !v75 )
              goto LABEL_96;
            if ( v75->max_length )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_96;
              UISprite__set_spriteName((UISprite_o *)listManager, v75->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v77 = &StringLiteral_10969/*"QUEST_INFO_TAB_REWARD"*/;
LABEL_87:
              listManager = (int64_t)LocalizationManager__Get((System_String_o *)*v77, 0LL);
              if ( tabInfoLabel )
              {
                UILabel__set_text(tabInfoLabel, (System_String_o *)listManager, 0LL);
                this->fields.settedQuestId = questId;
                titleBarInfoLabel = this->fields.titleBarInfoLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                listManager = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10970/*"QUEST_INFO_TOP"*/, 0LL);
                if ( titleBarInfoLabel )
                {
                  UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0LL);
                  listManager = (int64_t)this->fields.maskObj;
                  this->fields.mIsLetAutoOpen = 1;
                  if ( listManager )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0LL);
                    v80 = this->fields.listManager;
                    if ( v80 )
                    {
                      LOBYTE(EntityListFromQuestId) = 1;
                      v80->fields.mIsResetReady = 0;
                      return (char)EntityListFromQuestId;
                    }
                  }
                }
              }
LABEL_96:
              sub_B0D97C(listManager);
            }
          }
        }
      }
      goto LABEL_97;
    }
    goto LABEL_75;
  }
  listManager = (int64_t)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_96;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_96;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( *(_QWORD *)&EntityListFromQuestId->max_length )
    {
      v47 = QuestInformationComponent___c_TypeInfo;
      if ( (BYTE3(QuestInformationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
        v47 = QuestInformationComponent___c_TypeInfo;
      }
      static_fields = v47->static_fields;
      _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
        }
        v50 = (Il2CppObject *)static_fields->__9;
        _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_ViewEnemyEntity__int__TypeInfo,
                                                                                     v44,
                                                                                     v45);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__30_0,
          v50,
          Method_QuestInformationComponent___c__Setup_b__30_0__,
          (const MethodInfo_2619564 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
        v51 = QuestInformationComponent___c_TypeInfo->static_fields;
        v51->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v51->__9__30_0,
          (System_Int32_array **)_9__30_0,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v46,
                                                                   (System_Func_TSource__TResult__o *)_9__30_0,
                                                                   (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
      listManager = (int64_t)System_Linq_Enumerable__ToArray_int_(
                               v58,
                               (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !this->fields.listManager )
        goto LABEL_96;
      QuestInformationListViewManager__CreateEnemyList(
        this->fields.listManager,
        0,
        questId,
        (System_Int32_array *)listManager,
        v59);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( !listManager )
        goto LABEL_96;
      listManager = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)listManager, questId, v60);
      v61 = this->fields.tabLsprite;
      v62 = (QuestEntity_o *)listManager;
      v63 = QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        v63 = QuestInformationComponent_TypeInfo;
      }
      v64 = v63->static_fields->TabSpriteNames;
      if ( !v64 )
        goto LABEL_96;
      if ( v64->max_length )
      {
        v65 = v64->m_Items[0];
        if ( !v65 )
          goto LABEL_96;
        if ( v65->max_length )
        {
          if ( !v61 )
            goto LABEL_96;
          UISprite__set_spriteName(v61, v65->m_Items[0], 0LL);
          v66 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !v66 )
            goto LABEL_96;
          if ( v66->max_length > 1 )
          {
            v67 = v66->m_Items[1];
            if ( !v67 )
              goto LABEL_96;
            if ( v67->max_length > 1 )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_96;
              UISprite__set_spriteName((UISprite_o *)listManager, v67->m_Items[1], 0LL);
              if ( !v62 )
                goto LABEL_96;
              if ( v62->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(v62, v68)) == 0LL )
                p_flag = &v62->fields.flag;
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
                v77 = &StringLiteral_10968/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v77 = &StringLiteral_10967/*"QUEST_INFO_TAB_ENEMY"*/;
              }
              goto LABEL_87;
            }
          }
        }
      }
LABEL_97:
      v81 = sub_B0D9A8(listManager);
      sub_B0D948(v81, 0LL);
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
    sub_B0D97C(this);
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
  Il2CppObject *v3; // x19
  struct QuestInformationComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42124CE & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationComponent___c_TypeInfo, v1);
    byte_42124CE = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestInformationComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestInformationComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  float y; // s8
  QuestInformationComponent_c *v7; // x0

  v2 = this;
  if ( (byte_42124CF & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_B0D8A4(&QuestInformationComponent_TypeInfo, method);
    byte_42124CF = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL),
        (v4 = v2->fields.mo) == 0LL) )
  {
    sub_B0D97C(this);
  }
  tgtTitleBarObj = v2->fields.tgtTitleBarObj;
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
    (float)((float)v7->static_fields->BAR_BASE_OFFSET - y) - (float)v2->fields.offsetX,
    0LL);
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  int32_t tgt_x; // w22
  QuestInformationComponent_c *v5; // x0
  QuestInformationListViewManager_o *listManager; // x0
  struct QuestInformationComponent_o *_4__this; // x8
  struct QuestInformationComponent_o *v8; // x8
  struct QuestInformationComponent_o *v9; // x8
  struct QuestInformationComponent_o *v10; // x8

  if ( (byte_42124D0 & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, method);
    byte_42124D0 = 1;
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
  v8 = this->fields.__4__this;
  if ( !v8
    || (listManager = v8->fields.listManager) == 0LL
    || (QuestInformationListViewManager__DestroyList(listManager, 0LL), (v9 = this->fields.__4__this) == 0LL)
    || (listManager = (QuestInformationListViewManager_o *)v9->fields.maskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0LL),
        (v10 = this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(listManager);
  }
  v10->fields.settedQuestId = -1;
}