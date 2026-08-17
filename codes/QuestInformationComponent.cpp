void QuestInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x20
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x20
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct QuestInformationComponent_StaticFields *static_fields; // x8

  if ( (byte_596D383 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&string_____TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_24095/*"questinfo_tab_btn_txt_02_off"*/);
    sub_2213A60(&StringLiteral_24093/*"questinfo_tab_btn_txt_01_off"*/);
    sub_2213A60(&StringLiteral_24096/*"questinfo_tab_btn_txt_02_on"*/);
    sub_2213A60(&StringLiteral_24094/*"questinfo_tab_btn_txt_01_on"*/);
    byte_596D383 = 1;
  }
  v1 = sub_2213B20(string_____TypeInfo, 2);
  v2 = sub_2213B20(string___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_14;
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v11 = StringLiteral_24093/*"questinfo_tab_btn_txt_01_off"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_24093/*"questinfo_tab_btn_txt_01_off"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9),
        (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_13:
    sub_2213CE4(v2);
  }
  v18 = StringLiteral_24094/*"questinfo_tab_btn_txt_01_on"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_24094/*"questinfo_tab_btn_txt_01_on"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( !v1 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v1 + 32) = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v19, v20, v21, v22, v23, v24);
  v2 = sub_2213B20(string___TypeInfo, 2);
  if ( !v2 )
LABEL_14:
    sub_2213CDC(v2, v3);
  v31 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_13;
  v32 = StringLiteral_24095/*"questinfo_tab_btn_txt_02_off"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_24095/*"questinfo_tab_btn_txt_02_off"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v32, v25, v26, v27, v28, v29, v30);
  if ( (*(_DWORD *)(v31 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  v39 = StringLiteral_24096/*"questinfo_tab_btn_txt_02_on"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_24096/*"questinfo_tab_btn_txt_02_on"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 40), v39, v33, v34, v35, v36, v37, v38);
  if ( (*(_DWORD *)(v1 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  *(_QWORD *)(v1 + 40) = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v1 + 40), v31, v40, v41, v42, v43, v44, v45);
  QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames = (struct System_String_array_array *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestInformationComponent_TypeInfo->static_fields,
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


void QuestInformationComponent___ctor(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
  this->fields.dispAnimState = 0;
  this->fields.mIsLetAutoOpen = 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestInformationComponent__AutoOpen(
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
    sub_2213CDC(this, *(_QWORD *)&questId);
  if ( listManager->fields.mIsBuildingList
    || !QuestInformationComponent__Setup(this, questId, displayScene, customOpen, customClose, method) )
  {
    return 0;
  }
  QuestInformationComponent__Open(this, v8);
  return 1;
}


void QuestInformationComponent__Awake(QuestInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *maskObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  float OffsetX; // s0
  float v13; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D37A & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D37A = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0, 0) )
  {
    v6 = this->fields.maskObj;
    if ( !v6 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v6,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v10, v11);
      OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
      if ( Component_object )
      {
        v13 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
        v17 = size.fields.y;
        v18 = v13 + size.fields.x;
        size.fields.y = y;
        size.fields.x = (float)(v13 * 0.5) + x;
        v19 = size.fields.z;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
        v22.fields.y = v17;
        v22.fields.z = v19;
        v22.fields.x = v18;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v22, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(v6, v5);
    }
  }
}


void QuestInformationComponent__Close(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Action_o *customClose; // x8

  customClose = this->fields.customClose;
  this->fields.settedQuestId = -1;
  if ( customClose )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))customClose->fields.invoke_impl)(
      customClose->fields.method_code,
      customClose->fields.method);
  }
  else if ( this->fields.dispAnimState != 2 )
  {
    QuestInformationComponent__FrameInOut(this, 0, 0, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationComponent__CloseWindow(QuestInformationComponent_o *this, bool isPlaySe, const MethodInfo *method)
{
  QuestInformationComponent_o *v4; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  TerminalSceneComponent_c *v8; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v10; // x2
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v12; // x20
  UnityEngine_GameObject_c *v13; // x8
  TerminalSceneComponent_c *v14; // x0
  __int64 v15; // x2
  TerminalSceneComponent_c *v16; // x0

  v4 = this;
  if ( (byte_596D37F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestInformationComponent_CloseWindow__);
    this = (QuestInformationComponent_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D37F = 1;
  }
  listManager = v4->fields.listManager;
  if ( !listManager )
    goto LABEL_54;
  if ( !listManager->fields.mIsResetReady && !listManager->fields.mIsBuildingList )
  {
    v4->fields.mIsLetAutoOpen = 0;
    if ( isPlaySe )
    {
      v6 = Method_QuestInformationComponent_CloseWindow__;
      if ( (*((_BYTE *)Method_QuestInformationComponent_CloseWindow__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_QuestInformationComponent_CloseWindow__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_53;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, method);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, method);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v8->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlaySe, method);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      this = (QuestInformationComponent_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
        this = (QuestInformationComponent_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[1].fields.window->klass;
      if ( !klass )
        goto LABEL_54;
      v12 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlaySe, v10);
      if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        this = (QuestInformationComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
          this = (QuestInformationComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        v13 = this[1].fields.window->klass;
        if ( !v13 )
          goto LABEL_54;
        this = *(QuestInformationComponent_o **)&v13->_2.static_fields_size;
        if ( !this )
          goto LABEL_54;
        ScrTerminalMap__SetVisibilitySpotWebView((ScrTerminalMap_o *)this, 1, 1, 0);
      }
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v10);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    this = (QuestInformationComponent_o *)v14->static_fields->mInstance;
    if ( this )
    {
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v16 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isPlaySe, v15);
        v16 = TerminalSceneComponent_TypeInfo;
      }
      this = (QuestInformationComponent_o *)v16->static_fields->mInstance;
      if ( this )
      {
        TerminalSceneComponent__SetQuestBoardInfoOffOnExRoom((TerminalSceneComponent_o *)this, 0);
LABEL_53:
        QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
        return;
      }
    }
LABEL_54:
    sub_2213CDC(this, isPlaySe);
  }
}


bool QuestInformationComponent__FrameIn(QuestInformationComponent_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (is_force || this->fields.dispAnimState != 1) && QuestInformationComponent__FrameInOut(this, 1, is_force, v3);
}


bool QuestInformationComponent__FrameInOut(
        QuestInformationComponent_o *this,
        bool is_framein,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x20
  QuestBoardListViewManager_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_GameObject_o *window; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UnityEngine_GameObject_o *titleBarInfo; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  float OffsetX; // s0
  QuestInformationComponent_c *v35; // x0
  int v36; // w10
  int v37; // w8
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v40; // w26
  int v41; // w27
  __int64 v42; // x1
  __int64 v43; // x2
  float LocalPositionX; // s8
  double v45; // d9
  double v46; // d0
  double v47; // d0
  double v48; // d1
  double v49; // d1
  int v50; // w8
  __int64 v51; // x1
  __int64 v52; // x2
  QuestInformationComponent_c *v53; // x0
  UnityEngine_GameObject_o *v54; // x19
  int v55; // w21
  bool v56; // w20
  float y; // s11
  float z; // s9
  float v60; // s13
  float v61; // s14
  Il2CppObject *Component_object; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x1
  __int64 v70; // x2
  QuestInformationComponent_c *v71; // x0
  float v72; // s0
  float v73; // s10
  float v74; // s12
  float v75; // s13
  int v76; // w9
  MoveObject_o *v77; // x22
  int32_t v78; // w8
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v80; // x21
  System_Action_o *v81; // x23
  __int64 v82; // x2
  TerminalPramsManager_c *v83; // x0
  ListViewSort_c *klass; // x8
  __int64 v85; // x8
  float from; // [xsp+4h] [xbp-9Ch]
  double iptr; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596D381 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__);
    sub_2213A60(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__);
    sub_2213A60(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
    byte_596D381 = 1;
  }
  v7 = sub_2213CCC(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_74;
  *(_QWORD *)(v7 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)this, v10, v11, v12, v13, v14, v15);
  window = this->fields.window;
  *(_QWORD *)(v7 + 16) = window;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)window, v17, v18, v19, v20, v21, v22);
  titleBarInfo = this->fields.titleBarInfo;
  *(_QWORD *)(v7 + 32) = titleBarInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)titleBarInfo, v24, v25, v26, v27, v28, v29);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v30, v31);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
  v35 = QuestInformationComponent_TypeInfo;
  v36 = *(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1);
  if ( OffsetX == INFINITY )
    v37 = 0x80000000;
  else
    v37 = (int)OffsetX;
  *(_DWORD *)(v7 + 40) = v37;
  if ( !v36 )
  {
    j_il2cpp_runtime_class_init_0(v35, v32, v33);
    v35 = QuestInformationComponent_TypeInfo;
    v37 = *(_DWORD *)(v7 + 40);
  }
  static_fields = v35->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v40 = static_fields->BASE_X - v37;
  if ( is_framein )
    v41 = static_fields->BASE_X - v37;
  else
    v41 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v7 + 44) = v41;
  if ( is_force )
    goto LABEL_34;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), 0);
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v42, v43);
  v45 = LocalPositionX;
  v46 = modf(LocalPositionX, &iptr);
  if ( LocalPositionX >= 0.0 )
  {
    if ( v46 != 0.5 )
    {
      v47 = floor(v45 + 0.5);
      goto LABEL_29;
    }
    v48 = 1.0;
    v47 = iptr;
  }
  else
  {
    if ( v46 != -0.5 )
    {
      v47 = ceil(v45 + -0.5);
      goto LABEL_29;
    }
    v47 = iptr;
    v48 = -1.0;
  }
  v49 = v47 + v48;
  if ( ((__int64)v47 & 1) != 0 )
    v47 = v49;
LABEL_29:
  if ( v47 == INFINITY )
    v50 = 0x80000000;
  else
    v50 = (int)v47;
  if ( v41 != v50 )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v89 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
    v60 = v89.fields.y;
    v61 = v89.fields.z;
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         *(UnityEngine_GameObject_o **)(v7 + 16),
                         (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v7 + 24) = Component_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Component_object, v63, v64, v65, v66, v67, v68);
    v71 = QuestInformationComponent_TypeInfo;
    if ( is_framein )
      v72 = v61;
    else
      v72 = z;
    if ( is_framein )
      v73 = v60;
    else
      v73 = y;
    if ( is_framein )
      v74 = (float)FRAME_OUT_POS_X;
    else
      v74 = (float)v40;
    if ( is_framein )
    {
      v75 = (float)v40;
    }
    else
    {
      z = v61;
      y = v60;
      v75 = (float)FRAME_OUT_POS_X;
    }
    v76 = *(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1);
    v77 = *(MoveObject_o **)(v7 + 24);
    if ( is_framein )
      v78 = 1;
    else
      v78 = 2;
    this->fields.dispAnimState = v78;
    from = v72;
    if ( !v76 )
    {
      j_il2cpp_runtime_class_init_0(v71, v69, v70);
      v71 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v71->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v80 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v80,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0);
    v81 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0);
    if ( v77 )
    {
      v90.fields.x = v74;
      v90.fields.z = from;
      v90.fields.y = v73;
      v91.fields.x = v75;
      v91.fields.y = y;
      v91.fields.z = z;
      MoveObject__Play(v77, v90, v91, FRAME_IN_OUT_MV_SPD_TIME, v80, v81, 0.0, 17, 0);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v82);
      if ( !byte_596D31C )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D31C = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v82);
        v83 = TerminalPramsManager_TypeInfo;
      }
      if ( v83->static_fields->_IsBackQuestBoardDisable_k__BackingField )
        return 1;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v82);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v8 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v82);
        v8 = (QuestBoardListViewManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v8->fields.sort->klass;
      if ( klass )
      {
        v85 = *(_QWORD *)&klass->_2.element_size;
        if ( v85 )
        {
          v8 = *(QuestBoardListViewManager_o **)(v85 + 328);
          if ( v8 )
          {
            v56 = 1;
            QuestBoardListViewManager__SetBackMaskActive(v8, !is_framein, 0, 0);
            return v56;
          }
        }
      }
    }
LABEL_74:
    sub_2213CDC(v8, v9);
  }
  v41 = *(_DWORD *)(v7 + 44);
LABEL_34:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), (float)v41, 0);
  v53 = QuestInformationComponent_TypeInfo;
  v54 = *(UnityEngine_GameObject_o **)(v7 + 32);
  v55 = *(_DWORD *)(v7 + 44);
  if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v51, v52);
    v53 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v54,
    (float)(v53->static_fields->BAR_BASE_OFFSET - (v55 + *(_DWORD *)(v7 + 40))),
    0);
  return 0;
}


bool QuestInformationComponent__FrameOut(QuestInformationComponent_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (is_force || this->fields.dispAnimState != 2) && QuestInformationComponent__FrameInOut(this, 0, is_force, v3);
}


bool QuestInformationComponent__IsDisplayQuestInformation(int32_t targetQuestId, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  QuestEntity_o *v9; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D382 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_596D382 = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, method);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          targetQuestId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v9 = (QuestEntity_o *)entity;
  if ( *(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( !entity )
      return 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v7, v8);
    if ( !v9 )
      return 0;
  }
  return !QuestEntity__HasFlag(v9, 2, 0) && v9->fields.afterClear != 1;
}


bool QuestInformationComponent__IsDisplayQuestInformation_43361992(
        QuestEntity_o *questEntity,
        const MethodInfo *method)
{
  return questEntity && !QuestEntity__HasFlag(questEntity, 2, 0) && questEntity->fields.afterClear != 1;
}


void QuestInformationComponent__LateUpdate(QuestInformationComponent_o *this, const MethodInfo *method)
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


void QuestInformationComponent__OnClickClose(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestInformationComponent__CloseWindow(this, 1, v2);
}


void QuestInformationComponent__OnClickTabL(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_596D37D & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_2213A60(&Method_QuestInformationComponent_OnClickTabL__);
    byte_596D37D = 1;
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
        v4 = (_QWORD *)sub_2213A78(Method_QuestInformationComponent_OnClickTabL__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 0;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_2213CDC(this, method);
    }
  }
}


void QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_596D37E & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_2213A60(&Method_QuestInformationComponent_OnClickTabR__);
    byte_596D37E = 1;
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
        v4 = (_QWORD *)sub_2213A78(Method_QuestInformationComponent_OnClickTabR__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 1;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, method);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_2213CDC(this, method);
    }
  }
}


void QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_c *v4; // x0
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  QuestInformationListViewManager_o *v8; // x0
  UnityEngine_Object_c *v9; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_596D37B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D37B = 1;
  }
  v4 = UnityEngine_Object_TypeInfo;
  listManager = (UnityEngine_Object_o *)this->fields.listManager;
  this->fields.dispAnimState = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( UnityEngine_Object__op_Inequality(listManager, 0, 0) )
  {
    v8 = this->fields.listManager;
    if ( !v8 )
      goto LABEL_14;
    QuestInformationListViewManager__DestroyList(v8, v6);
  }
  v9 = UnityEngine_Object_TypeInfo;
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  this->fields.settedQuestId = -1;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v6, v7);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0, 0) )
  {
    v8 = (QuestInformationListViewManager_o *)this->fields.maskObj;
    if ( v8 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v8, v6);
  }
}


void QuestInformationComponent__Open(QuestInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x2
  UnityEngine_GameObject_c *v13; // x8
  struct System_Action_o *customOpen; // x8

  if ( (byte_596D380 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D380 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_36;
    v11 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) && this->fields.displayScene == 1 )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v12);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v12);
        v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      v13 = v9->fields.subRootGimmickP->klass;
      if ( v13 )
      {
        v9 = *(ScrTerminalMap_o **)&v13->_2.static_fields_size;
        if ( v9 )
        {
          ScrTerminalMap__SetVisibilitySpotWebView(v9, 0, 0, 0);
          goto LABEL_32;
        }
      }
LABEL_36:
      sub_2213CDC(v9, v6);
    }
  }
LABEL_32:
  customOpen = this->fields.customOpen;
  if ( customOpen )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))customOpen->fields.invoke_impl)(
      customOpen->fields.method_code,
      customOpen->fields.method);
  }
  else if ( this->fields.dispAnimState != 1 )
  {
    QuestInformationComponent__FrameInOut(this, 1, 0, v8);
  }
}


void QuestInformationComponent__SetResetReady(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8

  listManager = this->fields.listManager;
  if ( !listManager )
    sub_2213CDC(this, method);
  listManager->fields.mIsResetReady = 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestInformationComponent__Setup(
        QuestInformationComponent_o *this,
        int32_t questId,
        int32_t displayScene,
        System_Action_o *customOpen,
        System_Action_o *customClose,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  QuestInformationListViewManager_o *listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v23; // x2
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v25; // x4
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  QuestInformationComponent___c_c *v32; // x0
  struct QuestInformationComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__30_0; // x22
  Il2CppObject *v35; // x23
  struct QuestInformationComponent___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  const MethodInfo *v44; // x4
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x2
  QuestEntity_o *v48; // x21
  UISprite_o *v49; // x22
  QuestInformationComponent_c *v50; // x8
  struct System_String_array_array *v51; // x8
  System_String_array *v52; // x8
  struct System_String_array_array *v53; // x8
  System_String_array *v54; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  bool HasFlag; // w8
  UILabel_o *tabInfoLabel; // x21
  int v59; // w9
  __int64 *v60; // x8
  const MethodInfo *v61; // x4
  UISprite_o *tabLsprite; // x21
  ListViewSort_c *klass; // x8
  System_String_o **data; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v66; // x8
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *titleBarInfoLabel; // x21
  struct QuestInformationListViewManager_o *v72; // x8
  Il2CppObject *v74; // [xsp+0h] [xbp-50h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596D37C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestInformationComponent___c__Setup_b__30_0__);
    sub_2213A60(&QuestInformationComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_11353/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/);
    sub_2213A60(&StringLiteral_11355/*"QUEST_INFO_TOP"*/);
    sub_2213A60(&StringLiteral_11354/*"QUEST_INFO_TAB_REWARD"*/);
    sub_2213A60(&StringLiteral_11352/*"QUEST_INFO_TAB_ENEMY"*/);
    byte_596D37C = 1;
  }
  v74 = 0;
  entity = 0;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.customOpen,
    (int32_t)customOpen,
    *(System_String_o **)&displayScene,
    (System_String_o *)customOpen,
    (int32_t)customClose,
    (int32_t)method,
    v6,
    v7);
  this->fields.customClose = customClose;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.customClose,
    (int32_t)customClose,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_85;
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
      goto LABEL_85;
    UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 0, 0);
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_85;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)listManager,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v23);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    listManager = (QuestInformationListViewManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v23);
      listManager = (QuestInformationListViewManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_85;
    listManager = (QuestInformationListViewManager_o *)UserQuestInfoMaster__TryGetEntity(
                                                         (UserQuestInfoMaster_o *)MasterData_object,
                                                         &entity,
                                                         *(_QWORD *)&listManager->fields.sort->fields.bonusKind,
                                                         questId,
                                                         0);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_85;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_85;
      QuestInformationListViewManager__CreateRewardList(
        listManager,
        0,
        entity->fields.dropItemIds,
        entity->fields.dropSvtIds,
        v25);
      goto LABEL_58;
    }
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_85;
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listManager,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_85;
    listManager = (QuestInformationListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listManager,
                                                         &v74,
                                                         questId,
                                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !v74 )
        goto LABEL_85;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_85;
      QuestInformationListViewManager__CreateEmptyRewardList(
        listManager,
        0,
        (int32_t)v74[1].monitor,
        HIDWORD(v74[1].klass),
        v61);
LABEL_58:
      tabLsprite = this->fields.tabLsprite;
      listManager = (QuestInformationListViewManager_o *)QuestInformationComponent_TypeInfo;
      if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v19, v26);
        listManager = (QuestInformationListViewManager_o *)QuestInformationComponent_TypeInfo;
      }
      klass = listManager->fields.sort->klass;
      if ( !klass )
        goto LABEL_85;
      if ( LODWORD(klass->_1.namespaze) )
      {
        data = (System_String_o **)klass->_1.byval_arg.data;
        if ( !data )
          goto LABEL_85;
        if ( ((_DWORD)data[3] & 0xFFFFFFFE) != 0 )
        {
          if ( !tabLsprite )
            goto LABEL_85;
          UISprite__set_spriteName(tabLsprite, data[5], 0);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_85;
          if ( (TabSpriteNames->max_length & 0xFFFFFFFE) != 0 )
          {
            v66 = TabSpriteNames->m_Items[1];
            if ( !v66 )
              goto LABEL_85;
            if ( LODWORD(v66->max_length) )
            {
              listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_85;
              UISprite__set_spriteName((UISprite_o *)listManager, v66->m_Items[0], 0);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
              v60 = &StringLiteral_11354/*"QUEST_INFO_TAB_REWARD"*/;
LABEL_77:
              listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get((System_String_o *)*v60, 0);
              if ( tabInfoLabel )
              {
                UILabel__set_text(tabInfoLabel, (System_String_o *)listManager, 0);
                titleBarInfoLabel = this->fields.titleBarInfoLabel;
                this->fields.settedQuestId = questId;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
                listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11355/*"QUEST_INFO_TOP"*/,
                                                                     0);
                if ( titleBarInfoLabel )
                {
                  UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0);
                  listManager = (QuestInformationListViewManager_o *)this->fields.maskObj;
                  this->fields.mIsLetAutoOpen = 1;
                  if ( listManager )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0);
                    v72 = this->fields.listManager;
                    if ( v72 )
                    {
                      LOBYTE(EntityListFromQuestId) = 1;
                      v72->fields.mIsResetReady = 0;
                      return (char)EntityListFromQuestId;
                    }
                  }
                }
              }
LABEL_85:
              sub_2213CDC(listManager, v19);
            }
          }
        }
      }
      goto LABEL_86;
    }
    goto LABEL_73;
  }
  listManager = (QuestInformationListViewManager_o *)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_85;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
  listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_85;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0);
  if ( EntityListFromQuestId )
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( EntityListFromQuestId->max_length )
    {
      v32 = QuestInformationComponent___c_TypeInfo;
      if ( !*(&QuestInformationComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo, v29, v30);
        v32 = QuestInformationComponent___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__30_0 = (System_Func_object__int__o *)static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !*(&v32->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v32, v29, v30);
          static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__30_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ViewEnemyEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__30_0, v35, Method_QuestInformationComponent___c__Setup_b__30_0__, 0);
        v36 = QuestInformationComponent___c_TypeInfo->static_fields;
        v36->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v36->__9__30_0,
          (int32_t)_9__30_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v31,
                                                                   (System_Func_TSource__TResult__o *)_9__30_0,
                                                                   (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
      listManager = (QuestInformationListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                           v43,
                                                           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !this->fields.listManager )
        goto LABEL_85;
      QuestInformationListViewManager__CreateEnemyList(
        this->fields.listManager,
        0,
        questId,
        (System_Int32_array *)listManager,
        v44);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45, v46);
      listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( !listManager )
        goto LABEL_85;
      listManager = (QuestInformationListViewManager_o *)QuestMaster__getQuestEntity(
                                                           (QuestMaster_o *)listManager,
                                                           questId,
                                                           0);
      v48 = (QuestEntity_o *)listManager;
      v49 = this->fields.tabLsprite;
      v50 = QuestInformationComponent_TypeInfo;
      if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v19, v47);
        v50 = QuestInformationComponent_TypeInfo;
      }
      v51 = v50->static_fields->TabSpriteNames;
      if ( !v51 )
        goto LABEL_85;
      if ( LODWORD(v51->max_length) )
      {
        v52 = v51->m_Items[0];
        if ( !v52 )
          goto LABEL_85;
        if ( LODWORD(v52->max_length) )
        {
          if ( !v49 )
            goto LABEL_85;
          UISprite__set_spriteName(v49, v52->m_Items[0], 0);
          v53 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !v53 )
            goto LABEL_85;
          if ( (v53->max_length & 0xFFFFFFFE) != 0 )
          {
            v54 = v53->m_Items[1];
            if ( !v54 )
              goto LABEL_85;
            if ( (v54->max_length & 0xFFFFFFFE) != 0 )
            {
              listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_85;
              UISprite__set_spriteName((UISprite_o *)listManager, v54->m_Items[1], 0);
              if ( !v48 )
                goto LABEL_85;
              HasFlag = QuestEntity__HasFlag(v48, 0x200000000000000LL, 0);
              tabInfoLabel = this->fields.tabInfoLabel;
              v59 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
              if ( HasFlag )
              {
                if ( !v59 )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
                v60 = &StringLiteral_11353/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
              }
              else
              {
                if ( !v59 )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
                v60 = &StringLiteral_11352/*"QUEST_INFO_TAB_ENEMY"*/;
              }
              goto LABEL_77;
            }
          }
        }
      }
LABEL_86:
      sub_2213CE4(listManager);
    }
LABEL_73:
    LOBYTE(EntityListFromQuestId) = 0;
  }
  return (char)EntityListFromQuestId;
}


int32_t QuestInformationComponent__Showing(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.settedQuestId;
}


bool QuestInformationComponent__isListBuilding(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8

  listManager = this->fields.listManager;
  if ( !listManager )
    sub_2213CDC(this, method);
  return listManager->fields.mIsBuildingList;
}


bool QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D384 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationComponent___c_TypeInfo);
    byte_596D384 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestInformationComponent___c_TypeInfo->static_fields->__9 = (struct QuestInformationComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestInformationComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestInformationComponent___c___ctor(QuestInformationComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestInformationComponent___c___Setup_b__30_0(
        QuestInformationComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_2213CDC(this, 0);
  return value->fields.enemyId;
}


void QuestInformationComponent___c__DisplayClass43_0___ctor(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__0(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent___c__DisplayClass43_0_o *v2; // x19
  struct MoveObject_o *mo; // x8
  __int64 v4; // x2
  struct MoveObject_o *v5; // x8
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  float x; // s8
  QuestInformationComponent_c *v8; // x0

  v2 = this;
  if ( (byte_596D385 & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_2213A60(&QuestInformationComponent_TypeInfo);
    byte_596D385 = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.x, 0),
        (v5 = v2->fields.mo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  tgtTitleBarObj = v2->fields.tgtTitleBarObj;
  x = v5->fields.mNow.fields.x;
  v8 = QuestInformationComponent_TypeInfo;
  if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, method, v4);
    v8 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)((float)v8->static_fields->BAR_BASE_OFFSET - x) - (float)v2->fields.offsetX,
    0);
}


void QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
        QuestInformationComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  QuestInformationComponent_c *v5; // x0
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  int32_t tgt_x; // w22
  QuestInformationListViewManager_o *listManager; // x0
  const MethodInfo *v9; // x1
  struct QuestInformationComponent_o *_4__this; // x8
  QuestInformationComponent_c *v11; // x9
  int32_t v12; // w10
  struct QuestInformationComponent_o *v13; // x8
  struct QuestInformationComponent_o *v14; // x8

  if ( (byte_596D386 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationComponent_TypeInfo);
    byte_596D386 = 1;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, (float)this->fields.tgt_x, 0);
  v5 = QuestInformationComponent_TypeInfo;
  tgtTitleBarObj = this->fields.tgtTitleBarObj;
  tgt_x = this->fields.tgt_x;
  if ( !*(&QuestInformationComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v3, v4);
    v5 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    tgtTitleBarObj,
    (float)(v5->static_fields->BAR_BASE_OFFSET - (tgt_x + this->fields.offsetX)),
    0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  v11 = QuestInformationComponent_TypeInfo;
  v12 = this->fields.tgt_x;
  _4__this->fields.dispAnimState = 0;
  if ( v12 != v11->static_fields->FRAME_OUT_POS_X )
    return;
  listManager = _4__this->fields.listManager;
  if ( !listManager
    || (QuestInformationListViewManager__DestroyList(listManager, v9), (v13 = this->fields.__4__this) == 0)
    || (listManager = (QuestInformationListViewManager_o *)v13->fields.maskObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0),
        (v14 = this->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_2213CDC(listManager, v9);
  }
  v14->fields.settedQuestId = -1;
}