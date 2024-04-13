void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Int32_array **v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x20
  __int64 v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x20
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  QuestInformationComponent_c *v75; // x8
  __int64 v76; // x0
  __int64 v77; // x0

  if ( (byte_42E8AEF & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string_____TypeInfo, v4, v5, v6);
    sub_B5D5C4(&string___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_21939/*"questinfo_tab_btn_txt_02_off"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_21937/*"questinfo_tab_btn_txt_01_off"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_21940/*"questinfo_tab_btn_txt_02_on"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21938/*"questinfo_tab_btn_txt_01_on"*/, v19, v20, v21);
    byte_42E8AEF = 1;
  }
  v22 = (System_Int32_array **)sub_B5D5DC(string_____TypeInfo, 2LL);
  v23 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v23 )
    goto LABEL_33;
  v31 = (System_Int32_array **)v23;
  v32 = StringLiteral_21937/*"questinfo_tab_btn_txt_01_off"*/;
  if ( StringLiteral_21937/*"questinfo_tab_btn_txt_01_off"*/ )
  {
    v32 = sub_B5D684(StringLiteral_21937/*"questinfo_tab_btn_txt_01_off"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_32;
    v33 = (System_Int32_array **)StringLiteral_21937/*"questinfo_tab_btn_txt_01_off"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !*((_DWORD *)v31 + 6) )
    goto LABEL_31;
  v31[4] = (System_Int32_array *)v33;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 4), v33, v25, v26, v27, v28, v29, v30);
  v32 = StringLiteral_21938/*"questinfo_tab_btn_txt_01_on"*/;
  if ( StringLiteral_21938/*"questinfo_tab_btn_txt_01_on"*/ )
  {
    v32 = sub_B5D684(StringLiteral_21938/*"questinfo_tab_btn_txt_01_on"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_32;
    v40 = (System_Int32_array **)StringLiteral_21938/*"questinfo_tab_btn_txt_01_on"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 1u )
    goto LABEL_31;
  v31[5] = (System_Int32_array *)v40;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 5), v40, v34, v35, v36, v37, v38, v39);
  if ( !v22 )
    goto LABEL_33;
  v32 = sub_B5D684(v31, *(_QWORD *)&(*v22)->m_Items[9]);
  if ( !v32 )
    goto LABEL_32;
  if ( !*((_DWORD *)v22 + 6) )
    goto LABEL_31;
  v22[4] = (System_Int32_array *)v31;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 4), v31, v41, v42, v43, v44, v45, v46);
  v23 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v23 )
LABEL_33:
    sub_B5D69C(v23, v24);
  v53 = (System_Int32_array **)v23;
  v32 = StringLiteral_21939/*"questinfo_tab_btn_txt_02_off"*/;
  if ( StringLiteral_21939/*"questinfo_tab_btn_txt_02_off"*/ )
  {
    v32 = sub_B5D684(StringLiteral_21939/*"questinfo_tab_btn_txt_02_off"*/, *(_QWORD *)&(*v53)->m_Items[9]);
    if ( !v32 )
      goto LABEL_32;
    v54 = (System_Int32_array **)StringLiteral_21939/*"questinfo_tab_btn_txt_02_off"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( !*((_DWORD *)v53 + 6) )
    goto LABEL_31;
  v53[4] = (System_Int32_array *)v54;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 4), v54, v47, v48, v49, v50, v51, v52);
  v32 = StringLiteral_21940/*"questinfo_tab_btn_txt_02_on"*/;
  if ( StringLiteral_21940/*"questinfo_tab_btn_txt_02_on"*/ )
  {
    v32 = sub_B5D684(StringLiteral_21940/*"questinfo_tab_btn_txt_02_on"*/, *(_QWORD *)&(*v53)->m_Items[9]);
    if ( !v32 )
      goto LABEL_32;
    v61 = (System_Int32_array **)StringLiteral_21940/*"questinfo_tab_btn_txt_02_on"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_31;
  v53[5] = (System_Int32_array *)v61;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 5), v61, v55, v56, v57, v58, v59, v60);
  v32 = sub_B5D684(v53, *(_QWORD *)&(*v22)->m_Items[9]);
  if ( !v32 )
  {
LABEL_32:
    v77 = sub_B5D6BC(v32);
    sub_B5D668(v77, 0LL);
  }
  if ( *((_DWORD *)v22 + 6) <= 1u )
  {
LABEL_31:
    v76 = sub_B5D6C8(v32);
    sub_B5D668(v76, 0LL);
  }
  v22[5] = (System_Int32_array *)v53;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 5), v53, v62, v63, v64, v65, v66, v67);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v22;
  sub_B5D560(static_fields, v22, v69, v70, v71, v72, v73, v74);
  v75 = QuestInformationComponent_TypeInfo;
  QuestInformationComponent_TypeInfo->static_fields->BASE_X = -254;
  v75->static_fields->FRAME_OUT_POS_X = -974;
  v75->static_fields->BAR_BASE_OFFSET = -1;
  v75->static_fields->FRAME_IN_OUT_MV_SPD_TIME = 0.4;
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
    sub_B5D69C(this, questId);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *maskObj; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_BoxCollider_o *Component_srcLineSprite; // x19
  float OffsetX; // s0
  float v16; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v20; // s11
  float v21; // s12
  float v22; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8AE7 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8AE7 = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v13 = this->fields.maskObj;
    if ( !v13 )
      goto LABEL_18;
    Component_srcLineSprite = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v13,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
        v16 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center(Component_srcLineSprite, 0LL);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size(Component_srcLineSprite, 0LL);
        v20 = size.fields.y;
        size.fields.y = (float)(v16 * 0.5) + x;
        v21 = size.fields.z;
        v22 = v16 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center(Component_srcLineSprite, size, 0LL);
        v25.fields.x = v22;
        v25.fields.y = v20;
        v25.fields.z = v21;
        UnityEngine_BoxCollider__set_size(Component_srcLineSprite, v25, 0LL);
        return;
      }
LABEL_18:
      sub_B5D69C(v13, v12);
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
  __int64 v3; // x3
  QuestInformationComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  TerminalSceneComponent_c *v12; // x0

  v5 = this;
  if ( (byte_42E8AEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_QuestInformationComponent_CloseWindow__, isPlaySe, (_DWORD)method, v3);
    this = (QuestInformationComponent_o *)sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v6, v7, v8);
    byte_42E8AEC = 1;
  }
  listManager = v5->fields.listManager;
  if ( !listManager )
    goto LABEL_23;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v5->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v10 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 75) & 2) != 0 )
        v10 = (_QWORD *)sub_B5D5CC(Method_QuestInformationComponent_CloseWindow__);
      v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    }
    if ( v5->fields.displayScene != 1 )
      goto LABEL_22;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isPlaySe, (_DWORD)method, v3);
      byte_42E4B1E = 1;
    }
    v12 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v12->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0LL);
LABEL_22:
      QuestInformationComponent__Close(v5, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_23:
    sub_B5D69C(this, isPlaySe);
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
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  __int64 v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **window; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **titleBarInfo; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  float OffsetX; // s0
  double v49; // d0
  int v50; // w8
  QuestInformationComponent_c *v51; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v54; // w26
  int v55; // w27
  float LocalPositionX; // s0
  QuestInformationComponent_c *v57; // x0
  UnityEngine_GameObject_o *v58; // x20
  int v59; // w21
  float y; // s12
  float z; // s13
  float v63; // s11
  float v64; // s14
  float v65; // s15
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v73; // w8
  QuestInformationComponent_c *v74; // x0
  MoveObject_o *v75; // x20
  float v76; // s0
  float v77; // s9
  float v78; // s10
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v80; // x21
  System_Action_o *v81; // x22
  float v82; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E8AED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, is_framein, is_force, method);
    sub_B5D5C4(&FSUtility_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v10, v11, v12);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__, v19, v20, v21);
    sub_B5D5C4(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo, v22, v23, v24);
    byte_42E8AED = 1;
  }
  v25 = sub_B5D694(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  QuestInformationComponent___c__DisplayClass43_0___ctor((QuestInformationComponent___c__DisplayClass43_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_46;
  *(_QWORD *)(v25 + 48) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 48), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  window = (System_Int32_array **)this->fields.window;
  *(_QWORD *)(v25 + 16) = window;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), window, v35, v36, v37, v38, v39, v40);
  titleBarInfo = (System_Int32_array **)this->fields.titleBarInfo;
  *(_QWORD *)(v25 + 32) = titleBarInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), titleBarInfo, v42, v43, v44, v45, v46, v47);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v49 = -OffsetX;
  else
    v49 = OffsetX;
  v50 = (int)v49;
  *(_DWORD *)(v25 + 40) = (int)v49;
  v51 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v51 = QuestInformationComponent_TypeInfo;
    v50 = *(_DWORD *)(v25 + 40);
  }
  static_fields = v51->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v54 = static_fields->BASE_X - v50;
  if ( is_framein )
    v55 = static_fields->BASE_X - v50;
  else
    v55 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v25 + 44) = v55;
  if ( is_force )
    goto LABEL_19;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v25 + 16), 0LL);
  if ( v55 != UnityEngine_Mathf__RoundToInt(LocalPositionX, 0LL) )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v25 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v63 = (float)v54;
    v84 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v25 + 16), 0LL);
    v64 = v84.fields.y;
    v65 = v84.fields.z;
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  *(UnityEngine_GameObject_o **)(v25 + 16),
                                                  (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v25 + 24) = Component_UIWidget;
    sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), Component_UIWidget, v67, v68, v69, v70, v71, v72);
    if ( is_framein )
      v73 = 1;
    else
      v73 = 2;
    this->fields.dispAnimState = v73;
    v74 = QuestInformationComponent_TypeInfo;
    v75 = *(MoveObject_o **)(v25 + 24);
    if ( is_framein )
      v76 = v65;
    else
      v76 = z;
    if ( is_framein )
      v77 = v64;
    else
      v77 = y;
    if ( is_framein )
      v78 = (float)FRAME_OUT_POS_X;
    else
      v78 = (float)v54;
    if ( !is_framein )
      v63 = (float)FRAME_OUT_POS_X;
    if ( !is_framein )
      y = v64;
    if ( !is_framein )
      z = v65;
    v82 = v76;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v74 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v74->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v80,
      (Il2CppObject *)v25,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v25,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v75 )
    {
      v85.fields.z = v82;
      v85.fields.x = v78;
      v85.fields.y = v77;
      v86.fields.x = v63;
      v86.fields.y = y;
      v86.fields.z = z;
      MoveObject__Play(v75, v85, v86, FRAME_IN_OUT_MV_SPD_TIME, v80, v81, 0.0, 17, 0LL);
      return 1;
    }
LABEL_46:
    sub_B5D69C(v26, v27);
  }
  v55 = *(_DWORD *)(v25 + 44);
LABEL_19:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v25 + 16), (float)v55, 0LL);
  v57 = QuestInformationComponent_TypeInfo;
  v58 = *(UnityEngine_GameObject_o **)(v25 + 32);
  v59 = *(_DWORD *)(v25 + 44);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v57 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v58,
    (float)(v57->static_fields->BAR_BASE_OFFSET - v59 - *(_DWORD *)(v25 + 40)),
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x2
  QuestEntity_o *v18; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8AEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11, v12, v13);
    byte_42E8AEE = 1;
  }
  entity = 0LL;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(v15);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v15 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          &entity,
          targetQuestId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v18 = (QuestEntity_o *)entity;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    if ( !v18 )
      return 0;
  }
  else if ( !entity )
  {
    return 0;
  }
  return !QuestEntity__HasFlag(v18, 2LL, v17) && v18->fields.afterClear != 1;
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_25375748(
        QuestEntity_o *questEntity,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return questEntity && !QuestEntity__HasFlag(questEntity, 2LL, v2) && questEntity->fields.afterClear != 1;
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
  int v2; // w2
  __int64 v3; // x3
  QuestInformationComponent_o *v4; // x19
  struct QuestInformationListViewManager_o *listManager; // x8

  v4 = this;
  if ( (byte_42E8AEA & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AEA = 1;
  }
  if ( v4->fields.TabOpened )
  {
    listManager = v4->fields.listManager;
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
      this = (QuestInformationComponent_o *)v4->fields.listManager;
      v4->fields.TabOpened = 0;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v4->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestInformationComponent_o *v4; // x19
  struct QuestInformationListViewManager_o *listManager; // x8

  v4 = this;
  if ( (byte_42E8AEB & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AEB = 1;
  }
  if ( v4->fields.TabOpened != 1 )
  {
    listManager = v4->fields.listManager;
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
      this = (QuestInformationComponent_o *)v4->fields.listManager;
      v4->fields.TabOpened = 1;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v4->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v6; // x1
  QuestInformationListViewManager_o *v7; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_42E8AE8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AE8 = 1;
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
    v7 = this->fields.listManager;
    if ( !v7 )
      goto LABEL_16;
    QuestInformationListViewManager__DestroyList(v7, v6);
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
    v7 = (QuestInformationListViewManager_o *)this->fields.maskObj;
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v7, v6);
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
    sub_B5D69C(this, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x1
  int64_t listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  UserQuestInfoMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v81; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x21
  QuestInformationComponent___c_c *v83; // x0
  struct QuestInformationComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x22
  Il2CppObject *v86; // x23
  struct QuestInformationComponent___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  const MethodInfo *v95; // x4
  const MethodInfo *v96; // x2
  UISprite_o *v97; // x22
  QuestEntity_o *v98; // x21
  QuestInformationComponent_c *v99; // x8
  struct System_String_array_array *v100; // x8
  System_String_array *v101; // x8
  struct System_String_array_array *v102; // x8
  System_String_array *v103; // x8
  const MethodInfo *v104; // x2
  bool HasFlag; // w0
  UILabel_o *tabInfoLabel; // x21
  __int64 *v107; // x8
  const MethodInfo *v108; // x4
  UISprite_o *tabLsprite; // x21
  __int64 v110; // x8
  __int64 v111; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v113; // x8
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v115; // x8
  __int64 v116; // x0
  WarEntity_o *v118; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E8AE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, questId, displayScene, customOpen);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_ViewEnemyEntity__int___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Func_ViewEnemyEntity__int__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&NetworkManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&Method_QuestInformationComponent___c__Setup_b__30_0__, v52, v53, v54);
    sub_B5D5C4(&QuestInformationComponent___c_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_11072/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_11074/*"QUEST_INFO_TOP"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_11073/*"QUEST_INFO_TAB_REWARD"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_11071/*"QUEST_INFO_TAB_ENEMY"*/, v67, v68, v69);
    byte_42E8AE9 = 1;
  }
  entity = 0LL;
  v118 = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.customOpen,
    (System_Int32_array **)customOpen,
    *(System_String_array ***)&displayScene,
    (System_String_array **)customOpen,
    (System_Boolean_array **)customClose,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.customClose,
    (System_Int32_array **)customClose,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  listManager = (int64_t)this->fields.listManager;
  if ( !listManager )
    goto LABEL_92;
  QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)listManager, v76);
  TabOpened = this->fields.TabOpened;
  this->fields.mSetUpOnUpdate = 0;
  if ( TabOpened != 1 )
  {
    LOBYTE(EntityListFromQuestId) = 0;
    if ( TabOpened )
      return (char)EntityListFromQuestId;
    listManager = (int64_t)this->fields.baseListTabSp;
    if ( !listManager )
      goto LABEL_92;
    UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 0, 0LL);
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_92;
    MasterData_WarQuestSelectionMaster = (UserQuestInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)listManager,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    listManager = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_92;
    listManager = UserQuestInfoMaster__TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    listManager,
                    questId,
                    0LL);
    if ( (listManager & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_92;
      listManager = (int64_t)this->fields.listManager;
      if ( !listManager )
        goto LABEL_92;
      QuestInformationListViewManager__CreateRewardList(
        (QuestInformationListViewManager_o *)listManager,
        0,
        entity->fields.dropItemIds,
        entity->fields.dropSvtIds,
        v81);
      goto LABEL_61;
    }
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_92;
    listManager = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)listManager,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_92;
    listManager = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)listManager,
                    &v118,
                    questId,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (listManager & 1) != 0 )
    {
      if ( !v118 )
        goto LABEL_92;
      listManager = (int64_t)this->fields.listManager;
      if ( !listManager )
        goto LABEL_92;
      QuestInformationListViewManager__CreateEmptyRewardList(
        (QuestInformationListViewManager_o *)listManager,
        0,
        (int32_t)v118->fields.age,
        *(&v118->fields.id + 1),
        v108);
LABEL_61:
      tabLsprite = this->fields.tabLsprite;
      listManager = (int64_t)QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        listManager = (int64_t)QuestInformationComponent_TypeInfo;
      }
      v110 = **(_QWORD **)(listManager + 184);
      if ( !v110 )
        goto LABEL_92;
      if ( *(_DWORD *)(v110 + 24) )
      {
        v111 = *(_QWORD *)(v110 + 32);
        if ( !v111 )
          goto LABEL_92;
        if ( *(_DWORD *)(v111 + 24) > 1u )
        {
          if ( !tabLsprite )
            goto LABEL_92;
          UISprite__set_spriteName(tabLsprite, *(System_String_o **)(v111 + 40), 0LL);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_92;
          if ( TabSpriteNames->max_length > 1 )
          {
            v113 = TabSpriteNames->m_Items[1];
            if ( !v113 )
              goto LABEL_92;
            if ( v113->max_length )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_92;
              UISprite__set_spriteName((UISprite_o *)listManager, v113->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v107 = &StringLiteral_11073/*"QUEST_INFO_TAB_REWARD"*/;
LABEL_83:
              listManager = (int64_t)LocalizationManager__Get((System_String_o *)*v107, 0LL);
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
                listManager = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11074/*"QUEST_INFO_TOP"*/, 0LL);
                if ( titleBarInfoLabel )
                {
                  UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0LL);
                  listManager = (int64_t)this->fields.maskObj;
                  this->fields.mIsLetAutoOpen = 1;
                  if ( listManager )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0LL);
                    v115 = this->fields.listManager;
                    if ( v115 )
                    {
                      LOBYTE(EntityListFromQuestId) = 1;
                      v115->fields.mIsResetReady = 0;
                      return (char)EntityListFromQuestId;
                    }
                  }
                }
              }
LABEL_92:
              sub_B5D69C(listManager, v76);
            }
          }
        }
      }
      goto LABEL_93;
    }
    goto LABEL_78;
  }
  listManager = (int64_t)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_92;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_92;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( *(_QWORD *)&EntityListFromQuestId->max_length )
    {
      v83 = QuestInformationComponent___c_TypeInfo;
      if ( (BYTE3(QuestInformationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
        v83 = QuestInformationComponent___c_TypeInfo;
      }
      static_fields = v83->static_fields;
      _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
        }
        v86 = (Il2CppObject *)static_fields->__9;
        _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ViewEnemyEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__30_0,
          v86,
          Method_QuestInformationComponent___c__Setup_b__30_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_ViewEnemyEntity__int___ctor__);
        v87 = QuestInformationComponent___c_TypeInfo->static_fields;
        v87->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v87->__9__30_0,
          (System_Int32_array **)_9__30_0,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
      }
      v94 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v82,
                                                                   (System_Func_TSource__TResult__o *)_9__30_0,
                                                                   (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
      listManager = (int64_t)System_Linq_Enumerable__ToArray_int_(
                               v94,
                               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !this->fields.listManager )
        goto LABEL_92;
      QuestInformationListViewManager__CreateEnemyList(
        this->fields.listManager,
        0,
        questId,
        (System_Int32_array *)listManager,
        v95);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
      if ( !listManager )
        goto LABEL_92;
      listManager = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)listManager, questId, v96);
      v97 = this->fields.tabLsprite;
      v98 = (QuestEntity_o *)listManager;
      v99 = QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        v99 = QuestInformationComponent_TypeInfo;
      }
      v100 = v99->static_fields->TabSpriteNames;
      if ( !v100 )
        goto LABEL_92;
      if ( v100->max_length )
      {
        v101 = v100->m_Items[0];
        if ( !v101 )
          goto LABEL_92;
        if ( v101->max_length )
        {
          if ( !v97 )
            goto LABEL_92;
          UISprite__set_spriteName(v97, v101->m_Items[0], 0LL);
          v102 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !v102 )
            goto LABEL_92;
          if ( v102->max_length > 1 )
          {
            v103 = v102->m_Items[1];
            if ( !v103 )
              goto LABEL_92;
            if ( v103->max_length > 1 )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_92;
              UISprite__set_spriteName((UISprite_o *)listManager, v103->m_Items[1], 0LL);
              if ( !v98 )
                goto LABEL_92;
              HasFlag = QuestEntity__HasFlag(v98, 0x200000000000000LL, v104);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( HasFlag )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v107 = &StringLiteral_11072/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v107 = &StringLiteral_11071/*"QUEST_INFO_TAB_ENEMY"*/;
              }
              goto LABEL_83;
            }
          }
        }
      }
LABEL_93:
      v116 = sub_B5D6C8(listManager);
      sub_B5D668(v116, 0LL);
    }
LABEL_78:
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
    sub_B5D69C(this, method);
  return listManager->fields.mIsBuildingList;
}


bool __fastcall QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void __fastcall QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7EF1 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7EF1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  QuestInformationComponent___c__DisplayClass43_0_o *v4; // x19
  struct MoveObject_o *mo; // x8
  struct MoveObject_o *v6; // x8
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  float y; // s8
  QuestInformationComponent_c *v9; // x0

  v4 = this;
  if ( (byte_42E7EF2 & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_B5D5C4(
                                                                  &QuestInformationComponent_TypeInfo,
                                                                  (_DWORD)method,
                                                                  v2,
                                                                  v3);
    byte_42E7EF2 = 1;
  }
  mo = v4->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v4->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL),
        (v6 = v4->fields.mo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  tgtTitleBarObj = v4->fields.tgtTitleBarObj;
  y = v6->fields.mNow.fields.y;
  v9 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v9 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)((float)v9->static_fields->BAR_BASE_OFFSET - y) - (float)v4->fields.offsetX,
    0LL);
}


void __fastcall QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  int32_t tgt_x; // w22
  QuestInformationComponent_c *v7; // x0
  QuestInformationListViewManager_o *listManager; // x0
  __int64 v9; // x1
  struct QuestInformationComponent_o *_4__this; // x8
  struct QuestInformationComponent_o *v11; // x8
  struct QuestInformationComponent_o *v12; // x8
  struct QuestInformationComponent_o *v13; // x8

  if ( (byte_42E7EF3 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7EF3 = 1;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, (float)this->fields.tgt_x, 0LL);
  tgtTitleBarObj = this->fields.tgtTitleBarObj;
  tgt_x = this->fields.tgt_x;
  v7 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v7 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)(v7->static_fields->BAR_BASE_OFFSET - tgt_x - this->fields.offsetX),
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.dispAnimState = 0;
  if ( this->fields.tgt_x != QuestInformationComponent_TypeInfo->static_fields->FRAME_OUT_POS_X )
    return;
  v11 = this->fields.__4__this;
  if ( !v11
    || (listManager = v11->fields.listManager) == 0LL
    || (QuestInformationListViewManager__DestroyList(listManager, 0LL), (v12 = this->fields.__4__this) == 0LL)
    || (listManager = (QuestInformationListViewManager_o *)v12->fields.maskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0LL),
        (v13 = this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(listManager, v9);
  }
  v13->fields.settedQuestId = -1;
}