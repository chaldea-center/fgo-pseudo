void __fastcall QuestInformationComponent___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x20
  __int64 v11; // x0
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x20
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  QuestInformationComponent_c *v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_42B01FE & 1) == 0 )
  {
    sub_B52984(&QuestInformationComponent_TypeInfo);
    sub_B52984(&string_____TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_21826/*"questinfo_tab_btn_txt_02_off"*/);
    sub_B52984(&StringLiteral_21824/*"questinfo_tab_btn_txt_01_off"*/);
    sub_B52984(&StringLiteral_21827/*"questinfo_tab_btn_txt_02_on"*/);
    sub_B52984(&StringLiteral_21825/*"questinfo_tab_btn_txt_01_on"*/);
    byte_42B01FE = 1;
  }
  v1 = (System_Int32_array **)sub_B5299C(string_____TypeInfo, 2LL);
  v2 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v2 )
    goto LABEL_33;
  v10 = (System_Int32_array **)v2;
  v11 = StringLiteral_21824/*"questinfo_tab_btn_txt_01_off"*/;
  if ( StringLiteral_21824/*"questinfo_tab_btn_txt_01_off"*/ )
  {
    v11 = sub_B52A44(StringLiteral_21824/*"questinfo_tab_btn_txt_01_off"*/, *(_QWORD *)&(*v10)->m_Items[9]);
    if ( !v11 )
      goto LABEL_32;
    v12 = (System_Int32_array **)StringLiteral_21824/*"questinfo_tab_btn_txt_01_off"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !*((_DWORD *)v10 + 6) )
    goto LABEL_31;
  v10[4] = (System_Int32_array *)v12;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 4), v12, v4, v5, v6, v7, v8, v9);
  v11 = StringLiteral_21825/*"questinfo_tab_btn_txt_01_on"*/;
  if ( StringLiteral_21825/*"questinfo_tab_btn_txt_01_on"*/ )
  {
    v11 = sub_B52A44(StringLiteral_21825/*"questinfo_tab_btn_txt_01_on"*/, *(_QWORD *)&(*v10)->m_Items[9]);
    if ( !v11 )
      goto LABEL_32;
    v19 = (System_Int32_array **)StringLiteral_21825/*"questinfo_tab_btn_txt_01_on"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( *((_DWORD *)v10 + 6) <= 1u )
    goto LABEL_31;
  v10[5] = (System_Int32_array *)v19;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 5), v19, v13, v14, v15, v16, v17, v18);
  if ( !v1 )
    goto LABEL_33;
  v11 = sub_B52A44(v10, *(_QWORD *)&(*v1)->m_Items[9]);
  if ( !v11 )
    goto LABEL_32;
  if ( !*((_DWORD *)v1 + 6) )
    goto LABEL_31;
  v1[4] = (System_Int32_array *)v10;
  sub_B52920((BattleServantConfConponent_o *)(v1 + 4), v10, v20, v21, v22, v23, v24, v25);
  v2 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v2 )
LABEL_33:
    sub_B52A5C(v2, v3);
  v32 = (System_Int32_array **)v2;
  v11 = StringLiteral_21826/*"questinfo_tab_btn_txt_02_off"*/;
  if ( StringLiteral_21826/*"questinfo_tab_btn_txt_02_off"*/ )
  {
    v11 = sub_B52A44(StringLiteral_21826/*"questinfo_tab_btn_txt_02_off"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v11 )
      goto LABEL_32;
    v33 = (System_Int32_array **)StringLiteral_21826/*"questinfo_tab_btn_txt_02_off"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !*((_DWORD *)v32 + 6) )
    goto LABEL_31;
  v32[4] = (System_Int32_array *)v33;
  sub_B52920((BattleServantConfConponent_o *)(v32 + 4), v33, v26, v27, v28, v29, v30, v31);
  v11 = StringLiteral_21827/*"questinfo_tab_btn_txt_02_on"*/;
  if ( StringLiteral_21827/*"questinfo_tab_btn_txt_02_on"*/ )
  {
    v11 = sub_B52A44(StringLiteral_21827/*"questinfo_tab_btn_txt_02_on"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v11 )
      goto LABEL_32;
    v40 = (System_Int32_array **)StringLiteral_21827/*"questinfo_tab_btn_txt_02_on"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 1u )
    goto LABEL_31;
  v32[5] = (System_Int32_array *)v40;
  sub_B52920((BattleServantConfConponent_o *)(v32 + 5), v40, v34, v35, v36, v37, v38, v39);
  v11 = sub_B52A44(v32, *(_QWORD *)&(*v1)->m_Items[9]);
  if ( !v11 )
  {
LABEL_32:
    v56 = sub_B52A7C(v11);
    sub_B52A28(v56, 0LL);
  }
  if ( *((_DWORD *)v1 + 6) <= 1u )
  {
LABEL_31:
    v55 = sub_B52A88(v11);
    sub_B52A28(v55, 0LL);
  }
  v1[5] = (System_Int32_array *)v32;
  sub_B52920((BattleServantConfConponent_o *)(v1 + 5), v32, v41, v42, v43, v44, v45, v46);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, v1, v48, v49, v50, v51, v52, v53);
  v54 = QuestInformationComponent_TypeInfo;
  QuestInformationComponent_TypeInfo->static_fields->BASE_X = -254;
  v54->static_fields->FRAME_OUT_POS_X = -974;
  v54->static_fields->BAR_BASE_OFFSET = -1;
  v54->static_fields->FRAME_IN_OUT_MV_SPD_TIME = 0.4;
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
    sub_B52A5C(this, questId);
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
  UnityEngine_BoxCollider_o *Component_srcLineSprite; // x19
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

  if ( (byte_42B01F6 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B01F6 = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskObj, 0LL, 0LL) )
  {
    v5 = this->fields.maskObj;
    if ( !v5 )
      goto LABEL_18;
    Component_srcLineSprite = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v5,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
        v8 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center(Component_srcLineSprite, 0LL);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size(Component_srcLineSprite, 0LL);
        v12 = size.fields.y;
        size.fields.y = (float)(v8 * 0.5) + x;
        v13 = size.fields.z;
        v14 = v8 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center(Component_srcLineSprite, size, 0LL);
        v17.fields.x = v14;
        v17.fields.y = v12;
        v17.fields.z = v13;
        UnityEngine_BoxCollider__set_size(Component_srcLineSprite, v17, 0LL);
        return;
      }
LABEL_18:
      sub_B52A5C(v5, v4);
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
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  TerminalSceneComponent_c *v8; // x0

  v4 = this;
  if ( (byte_42B01FB & 1) == 0 )
  {
    sub_B52984(&Method_QuestInformationComponent_CloseWindow__);
    this = (QuestInformationComponent_o *)sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B01FB = 1;
  }
  listManager = v4->fields.listManager;
  if ( !listManager )
    goto LABEL_23;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v4->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v6 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 75) & 2) != 0 )
        v6 = (_QWORD *)sub_B5298C(Method_QuestInformationComponent_CloseWindow__);
      v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_22;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v8->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0LL);
LABEL_22:
      QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_23:
    sub_B52A5C(this, isPlaySe);
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
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **window; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **titleBarInfo; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float OffsetX; // s0
  double v31; // d0
  int v32; // w8
  QuestInformationComponent_c *v33; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v36; // w26
  int v37; // w27
  float LocalPositionX; // s0
  QuestInformationComponent_c *v39; // x0
  UnityEngine_GameObject_o *v40; // x20
  int v41; // w21
  float y; // s12
  float z; // s13
  float v45; // s11
  float v46; // s14
  float v47; // s15
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t v55; // w8
  QuestInformationComponent_c *v56; // x0
  MoveObject_o *v57; // x20
  float v58; // s0
  float v59; // s9
  float v60; // s10
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v62; // x21
  System_Action_o *v63; // x22
  float v64; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42B01FC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B52984(&QuestInformationComponent_TypeInfo);
    sub_B52984(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__);
    sub_B52984(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__);
    sub_B52984(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
    byte_42B01FC = 1;
  }
  v7 = sub_B52A54(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  QuestInformationComponent___c__DisplayClass43_0___ctor((QuestInformationComponent___c__DisplayClass43_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_46;
  *(_QWORD *)(v7 + 48) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  window = (System_Int32_array **)this->fields.window;
  *(_QWORD *)(v7 + 16) = window;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), window, v17, v18, v19, v20, v21, v22);
  titleBarInfo = (System_Int32_array **)this->fields.titleBarInfo;
  *(_QWORD *)(v7 + 32) = titleBarInfo;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), titleBarInfo, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( OffsetX == INFINITY )
    v31 = -OffsetX;
  else
    v31 = OffsetX;
  v32 = (int)v31;
  *(_DWORD *)(v7 + 40) = (int)v31;
  v33 = QuestInformationComponent_TypeInfo;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v33 = QuestInformationComponent_TypeInfo;
    v32 = *(_DWORD *)(v7 + 40);
  }
  static_fields = v33->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v36 = static_fields->BASE_X - v32;
  if ( is_framein )
    v37 = static_fields->BASE_X - v32;
  else
    v37 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v7 + 44) = v37;
  if ( is_force )
    goto LABEL_19;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), 0LL);
  if ( v37 != UnityEngine_Mathf__RoundToInt(LocalPositionX, 0LL) )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v45 = (float)v36;
    v66 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
    v46 = v66.fields.y;
    v47 = v66.fields.z;
    Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                  *(UnityEngine_GameObject_o **)(v7 + 16),
                                                  (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v7 + 24) = Component_UIWidget;
    sub_B52920((BattleServantConfConponent_o *)(v7 + 24), Component_UIWidget, v49, v50, v51, v52, v53, v54);
    if ( is_framein )
      v55 = 1;
    else
      v55 = 2;
    this->fields.dispAnimState = v55;
    v56 = QuestInformationComponent_TypeInfo;
    v57 = *(MoveObject_o **)(v7 + 24);
    if ( is_framein )
      v58 = v47;
    else
      v58 = z;
    if ( is_framein )
      v59 = v46;
    else
      v59 = y;
    if ( is_framein )
      v60 = (float)FRAME_OUT_POS_X;
    else
      v60 = (float)v36;
    if ( !is_framein )
      v45 = (float)FRAME_OUT_POS_X;
    if ( !is_framein )
      y = v46;
    if ( !is_framein )
      z = v47;
    v64 = v58;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v56 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v56->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v62 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0LL);
    v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0LL);
    if ( v57 )
    {
      v67.fields.z = v64;
      v67.fields.x = v60;
      v67.fields.y = v59;
      v68.fields.x = v45;
      v68.fields.y = y;
      v68.fields.z = z;
      MoveObject__Play(v57, v67, v68, FRAME_IN_OUT_MV_SPD_TIME, v62, v63, 0.0, 17, 0LL);
      return 1;
    }
LABEL_46:
    sub_B52A5C(v8, v9);
  }
  v37 = *(_DWORD *)(v7 + 44);
LABEL_19:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), (float)v37, 0LL);
  v39 = QuestInformationComponent_TypeInfo;
  v40 = *(UnityEngine_GameObject_o **)(v7 + 32);
  v41 = *(_DWORD *)(v7 + 44);
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v39 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v40,
    (float)(v39->static_fields->BAR_BASE_OFFSET - v41 - *(_DWORD *)(v7 + 40)),
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
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x2
  QuestEntity_o *v7; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B01FD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&QuestInformationComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B01FD = 1;
  }
  entity = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, method);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
          &entity,
          targetQuestId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v7 = (QuestEntity_o *)entity;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    if ( !v7 )
      return 0;
  }
  else if ( !entity )
  {
    return 0;
  }
  return !QuestEntity__HasFlag(v7, 2LL, v6) && v7->fields.afterClear != 1;
}


bool __fastcall QuestInformationComponent__IsDisplayQuestInformation_25261680(
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
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8

  v2 = this;
  if ( (byte_42B01F9 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B01F9 = 1;
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
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8

  v2 = this;
  if ( (byte_42B01FA & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B01FA = 1;
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
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_13:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_42B01F7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B01F7 = 1;
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
    sub_B52A5C(v5, v4);
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
    sub_B52A5C(this, method);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int64_t listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  UserQuestInfoMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  QuestInformationComponent___c_c *v26; // x0
  struct QuestInformationComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__30_0; // x22
  Il2CppObject *v29; // x23
  struct QuestInformationComponent___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x2
  UISprite_o *v40; // x22
  QuestEntity_o *v41; // x21
  QuestInformationComponent_c *v42; // x8
  struct System_String_array_array *v43; // x8
  System_String_array *v44; // x8
  struct System_String_array_array *v45; // x8
  System_String_array *v46; // x8
  const MethodInfo *v47; // x2
  bool HasFlag; // w0
  UILabel_o *tabInfoLabel; // x21
  __int64 *v50; // x8
  const MethodInfo *v51; // x4
  UISprite_o *tabLsprite; // x21
  __int64 v53; // x8
  __int64 v54; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v56; // x8
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v58; // x8
  __int64 v59; // x0
  WarEntity_o *v61; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42B01F8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_ViewEnemyEntity__int___ctor__);
    sub_B52984(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestInformationComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestInformationComponent___c__Setup_b__30_0__);
    sub_B52984(&QuestInformationComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_11026/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/);
    sub_B52984(&StringLiteral_11028/*"QUEST_INFO_TOP"*/);
    sub_B52984(&StringLiteral_11027/*"QUEST_INFO_TAB_REWARD"*/);
    sub_B52984(&StringLiteral_11025/*"QUEST_INFO_TAB_ENEMY"*/);
    byte_42B01F8 = 1;
  }
  entity = 0LL;
  v61 = 0LL;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.customOpen,
    (System_Int32_array **)customOpen,
    *(System_String_array ***)&displayScene,
    (System_String_array **)customOpen,
    (System_Boolean_array **)customClose,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.customClose,
    (System_Int32_array **)customClose,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  listManager = (int64_t)this->fields.listManager;
  if ( !listManager )
    goto LABEL_92;
  QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)listManager, v19);
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
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_92;
    MasterData_WarQuestSelectionMaster = (UserQuestInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)listManager,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
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
        v24);
      goto LABEL_61;
    }
    listManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_92;
    listManager = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)listManager,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_92;
    listManager = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)listManager,
                    &v61,
                    questId,
                    (const MethodInfo_23E2334 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (listManager & 1) != 0 )
    {
      if ( !v61 )
        goto LABEL_92;
      listManager = (int64_t)this->fields.listManager;
      if ( !listManager )
        goto LABEL_92;
      QuestInformationListViewManager__CreateEmptyRewardList(
        (QuestInformationListViewManager_o *)listManager,
        0,
        (int32_t)v61->fields.age,
        *(&v61->fields.id + 1),
        v51);
LABEL_61:
      tabLsprite = this->fields.tabLsprite;
      listManager = (int64_t)QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        listManager = (int64_t)QuestInformationComponent_TypeInfo;
      }
      v53 = **(_QWORD **)(listManager + 184);
      if ( !v53 )
        goto LABEL_92;
      if ( *(_DWORD *)(v53 + 24) )
      {
        v54 = *(_QWORD *)(v53 + 32);
        if ( !v54 )
          goto LABEL_92;
        if ( *(_DWORD *)(v54 + 24) > 1u )
        {
          if ( !tabLsprite )
            goto LABEL_92;
          UISprite__set_spriteName(tabLsprite, *(System_String_o **)(v54 + 40), 0LL);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_92;
          if ( TabSpriteNames->max_length > 1 )
          {
            v56 = TabSpriteNames->m_Items[1];
            if ( !v56 )
              goto LABEL_92;
            if ( v56->max_length )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_92;
              UISprite__set_spriteName((UISprite_o *)listManager, v56->m_Items[0], 0LL);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v50 = &StringLiteral_11027/*"QUEST_INFO_TAB_REWARD"*/;
LABEL_83:
              listManager = (int64_t)LocalizationManager__Get((System_String_o *)*v50, 0LL);
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
                listManager = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"QUEST_INFO_TOP"*/, 0LL);
                if ( titleBarInfoLabel )
                {
                  UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0LL);
                  listManager = (int64_t)this->fields.maskObj;
                  this->fields.mIsLetAutoOpen = 1;
                  if ( listManager )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0LL);
                    v58 = this->fields.listManager;
                    if ( v58 )
                    {
                      LOBYTE(EntityListFromQuestId) = 1;
                      v58->fields.mIsResetReady = 0;
                      return (char)EntityListFromQuestId;
                    }
                  }
                }
              }
LABEL_92:
              sub_B52A5C(listManager, v19);
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
  listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_92;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0LL);
  if ( EntityListFromQuestId )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( *(_QWORD *)&EntityListFromQuestId->max_length )
    {
      v26 = QuestInformationComponent___c_TypeInfo;
      if ( (BYTE3(QuestInformationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
        v26 = QuestInformationComponent___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__30_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ViewEnemyEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__30_0,
          v29,
          Method_QuestInformationComponent___c__Setup_b__30_0__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
        v30 = QuestInformationComponent___c_TypeInfo->static_fields;
        v30->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v30->__9__30_0,
          (System_Int32_array **)_9__30_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v25,
                                                                   (System_Func_TSource__TResult__o *)_9__30_0,
                                                                   (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
      listManager = (int64_t)System_Linq_Enumerable__ToArray_int_(
                               v37,
                               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !this->fields.listManager )
        goto LABEL_92;
      QuestInformationListViewManager__CreateEnemyList(
        this->fields.listManager,
        0,
        questId,
        (System_Int32_array *)listManager,
        v38);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      listManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( !listManager )
        goto LABEL_92;
      listManager = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)listManager, questId, v39);
      v40 = this->fields.tabLsprite;
      v41 = (QuestEntity_o *)listManager;
      v42 = QuestInformationComponent_TypeInfo;
      if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        v42 = QuestInformationComponent_TypeInfo;
      }
      v43 = v42->static_fields->TabSpriteNames;
      if ( !v43 )
        goto LABEL_92;
      if ( v43->max_length )
      {
        v44 = v43->m_Items[0];
        if ( !v44 )
          goto LABEL_92;
        if ( v44->max_length )
        {
          if ( !v40 )
            goto LABEL_92;
          UISprite__set_spriteName(v40, v44->m_Items[0], 0LL);
          v45 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !v45 )
            goto LABEL_92;
          if ( v45->max_length > 1 )
          {
            v46 = v45->m_Items[1];
            if ( !v46 )
              goto LABEL_92;
            if ( v46->max_length > 1 )
            {
              listManager = (int64_t)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_92;
              UISprite__set_spriteName((UISprite_o *)listManager, v46->m_Items[1], 0LL);
              if ( !v41 )
                goto LABEL_92;
              HasFlag = QuestEntity__HasFlag(v41, 0x200000000000000LL, v47);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( HasFlag )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v50 = &StringLiteral_11026/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v50 = &StringLiteral_11025/*"QUEST_INFO_TAB_ENEMY"*/;
              }
              goto LABEL_83;
            }
          }
        }
      }
LABEL_93:
      v59 = sub_B52A88(listManager);
      sub_B52A28(v59, 0LL);
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
    sub_B52A5C(this, method);
  return listManager->fields.mIsBuildingList;
}


bool __fastcall QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void __fastcall QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF24D & 1) == 0 )
  {
    sub_B52984(&QuestInformationComponent___c_TypeInfo);
    byte_42AF24D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AF24E & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_B52984(&QuestInformationComponent_TypeInfo);
    byte_42AF24E = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL),
        (v4 = v2->fields.mo) == 0LL) )
  {
    sub_B52A5C(this, method);
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
  __int64 v7; // x1
  struct QuestInformationComponent_o *_4__this; // x8
  struct QuestInformationComponent_o *v9; // x8
  struct QuestInformationComponent_o *v10; // x8
  struct QuestInformationComponent_o *v11; // x8

  if ( (byte_42AF24F & 1) == 0 )
  {
    sub_B52984(&QuestInformationComponent_TypeInfo);
    byte_42AF24F = 1;
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
  v9 = this->fields.__4__this;
  if ( !v9
    || (listManager = v9->fields.listManager) == 0LL
    || (QuestInformationListViewManager__DestroyList(listManager, 0LL), (v10 = this->fields.__4__this) == 0LL)
    || (listManager = (QuestInformationListViewManager_o *)v10->fields.maskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0LL),
        (v11 = this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(listManager, v7);
  }
  v11->fields.settedQuestId = -1;
}