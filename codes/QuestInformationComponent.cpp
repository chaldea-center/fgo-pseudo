void QuestInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x20
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct QuestInformationComponent_StaticFields *static_fields; // x8

  if ( (byte_4C3FD04 & 1) == 0 )
  {
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    sub_1C37058(&string_____TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_22903/*"questinfo_tab_btn_txt_02_off"*/);
    sub_1C37058(&StringLiteral_22901/*"questinfo_tab_btn_txt_01_off"*/);
    sub_1C37058(&StringLiteral_22904/*"questinfo_tab_btn_txt_02_on"*/);
    sub_1C37058(&StringLiteral_22902/*"questinfo_tab_btn_txt_01_on"*/);
    byte_4C3FD04 = 1;
  }
  v1 = sub_1C37100(string_____TypeInfo, 2);
  v2 = sub_1C37100(string___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_14;
  v5 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v6 = StringLiteral_22901/*"questinfo_tab_btn_txt_01_off"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_22901/*"questinfo_tab_btn_txt_01_off"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v2 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u) )
  {
LABEL_13:
    sub_1C372BC(v2);
  }
  v9 = StringLiteral_22902/*"questinfo_tab_btn_txt_01_on"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_22902/*"questinfo_tab_btn_txt_01_on"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), v9, v7, v8);
  if ( !v1 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v1 + 32) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v5, v10, v11);
  v2 = sub_1C37100(string___TypeInfo, 2);
  if ( !v2 )
LABEL_14:
    sub_1C372B4(v2);
  v14 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_13;
  v15 = StringLiteral_22903/*"questinfo_tab_btn_txt_02_off"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_22903/*"questinfo_tab_btn_txt_02_off"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v2 + 32), v15, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_13;
  v18 = StringLiteral_22904/*"questinfo_tab_btn_txt_02_on"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_22904/*"questinfo_tab_btn_txt_02_on"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 40), v18, v16, v17);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_13;
  *(_QWORD *)(v1 + 40) = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 40), v14, v19, v20);
  QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames = (struct System_String_array_array *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestInformationComponent_TypeInfo->static_fields, v1, v21, v22);
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
    sub_1C372B4(this);
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
  UnityEngine_Object_o *maskObj; // x20
  UnityEngine_GameObject_o *v4; // x0
  Il2CppObject *Component_object; // x19
  float OffsetX; // s0
  float v7; // s13
  float x; // s8
  float y; // s9
  float z; // s10
  float v11; // s11
  float v12; // s12
  float v13; // s8
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FCFC & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FCFC = 1;
  }
  maskObj = (UnityEngine_Object_o *)this->fields.maskObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskObj, 0, 0) )
  {
    v4 = this->fields.maskObj;
    if ( !v4 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v4,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
      if ( Component_object )
      {
        v7 = ceilf(OffsetX);
        center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
        x = center.fields.x;
        y = center.fields.y;
        z = center.fields.z;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
        v11 = size.fields.y;
        size.fields.y = (float)(v7 * 0.5) + x;
        v12 = size.fields.z;
        v13 = v7 + size.fields.x;
        size.fields.x = size.fields.y;
        size.fields.y = y;
        size.fields.z = z;
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
        v16.fields.x = v13;
        v16.fields.y = v11;
        v16.fields.z = v12;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v16, 0);
        return;
      }
LABEL_15:
      sub_1C372B4(v4);
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

  v4 = this;
  if ( (byte_4C3FD01 & 1) == 0 )
  {
    sub_1C37058(&Method_QuestInformationComponent_CloseWindow__);
    this = (QuestInformationComponent_o *)sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3FD01 = 1;
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
        v6 = (_QWORD *)sub_1C37070(Method_QuestInformationComponent_CloseWindow__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
    if ( v4->fields.displayScene != 1 )
      goto LABEL_20;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
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
      TerminalSceneComponent__SetQuestBoardInfoOff((TerminalSceneComponent_o *)this, 0);
LABEL_20:
      QuestInformationComponent__Close(v4, (const MethodInfo *)isPlaySe);
      return;
    }
LABEL_21:
    sub_1C372B4(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_o *window; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_GameObject_o *titleBarInfo; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float OffsetX; // s0
  int v18; // w8
  QuestInformationComponent_c *v19; // x0
  struct QuestInformationComponent_StaticFields *static_fields; // x9
  int FRAME_OUT_POS_X; // w25
  int v22; // w26
  int v23; // w27
  float LocalPositionX; // s8
  double v25; // d9
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  int v30; // w8
  QuestInformationComponent_c *v31; // x0
  UnityEngine_GameObject_o *v32; // x19
  int v33; // w21
  float y; // s12
  float z; // s10
  float v37; // s13
  float v38; // s14
  Il2CppObject *Component_object; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w8
  QuestInformationComponent_c *v43; // x0
  MoveObject_o *v44; // x21
  float v45; // s0
  float v46; // s9
  float v47; // s11
  float v48; // s13
  float FRAME_IN_OUT_MV_SPD_TIME; // s14
  System_Action_o *v50; // x22
  System_Action_o *v51; // x23
  TerminalPramsManager_c *v52; // x0
  ListViewSort_c *klass; // x8
  __int64 v54; // x8
  float from; // [xsp+4h] [xbp-9Ch]
  double iptr; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3FD02 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__);
    sub_1C37058(&Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__);
    sub_1C37058(&QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
    byte_4C3FD02 = 1;
  }
  v7 = sub_1C372A4(QuestInformationComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_73;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)this, v9, v10);
  window = this->fields.window;
  *(_QWORD *)(v7 + 16) = window;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)window, v12, v13);
  titleBarInfo = this->fields.titleBarInfo;
  *(_QWORD *)(v7 + 32) = titleBarInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)titleBarInfo, v15, v16);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
  if ( OffsetX == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)OffsetX;
  *(_DWORD *)(v7 + 40) = v18;
  v19 = QuestInformationComponent_TypeInfo;
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v19 = QuestInformationComponent_TypeInfo;
    v18 = *(_DWORD *)(v7 + 40);
  }
  static_fields = v19->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  v22 = static_fields->BASE_X - v18;
  if ( is_framein )
    v23 = static_fields->BASE_X - v18;
  else
    v23 = static_fields->FRAME_OUT_POS_X;
  *(_DWORD *)(v7 + 44) = v23;
  if ( is_force )
    goto LABEL_34;
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), 0);
  if ( !byte_4C3E100 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3E100 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v25 = LocalPositionX;
  v26 = modf(LocalPositionX, &iptr);
  if ( LocalPositionX >= 0.0 )
  {
    if ( v26 != 0.5 )
    {
      v27 = floor(v25 + 0.5);
      goto LABEL_29;
    }
    v27 = iptr;
    v28 = 1.0;
  }
  else
  {
    if ( v26 != -0.5 )
    {
      v27 = ceil(v25 + -0.5);
      goto LABEL_29;
    }
    v27 = iptr;
    v28 = -1.0;
  }
  v29 = v27 + v28;
  if ( ((__int64)v27 & 1) != 0 )
    v27 = v29;
LABEL_29:
  if ( v27 == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)v27;
  if ( v23 != v30 )
  {
    LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v58 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
    v37 = v58.fields.y;
    v38 = v58.fields.z;
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         *(UnityEngine_GameObject_o **)(v7 + 16),
                         (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    *(_QWORD *)(v7 + 24) = Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Component_object, v40, v41);
    if ( is_framein )
      v42 = 1;
    else
      v42 = 2;
    this->fields.dispAnimState = v42;
    v43 = QuestInformationComponent_TypeInfo;
    v44 = *(MoveObject_o **)(v7 + 24);
    if ( is_framein )
      v45 = v38;
    else
      v45 = z;
    if ( is_framein )
      v46 = v37;
    else
      v46 = y;
    if ( is_framein )
      v47 = (float)FRAME_OUT_POS_X;
    else
      v47 = (float)v22;
    if ( is_framein )
    {
      v48 = (float)v22;
    }
    else
    {
      z = v38;
      y = v37;
      v48 = (float)FRAME_OUT_POS_X;
    }
    from = v45;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v43 = QuestInformationComponent_TypeInfo;
    }
    FRAME_IN_OUT_MV_SPD_TIME = v43->static_fields->FRAME_IN_OUT_MV_SPD_TIME;
    v50 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__0__,
      0);
    v51 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v7,
      Method_QuestInformationComponent___c__DisplayClass43_0__FrameInOut_b__1__,
      0);
    if ( v44 )
    {
      v59.fields.z = from;
      v59.fields.x = v47;
      v59.fields.y = v46;
      v60.fields.x = v48;
      v60.fields.y = y;
      v60.fields.z = z;
      MoveObject__Play(v44, v59, v60, FRAME_IN_OUT_MV_SPD_TIME, v50, v51, 0.0, 17, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FCAF )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FCAF = 1;
      }
      v52 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v52 = TerminalPramsManager_TypeInfo;
      }
      if ( v52->static_fields->_IsBackQuestBoardDisable_k__BackingField )
        return 1;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
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
        v54 = *(_QWORD *)&klass->_2.element_size;
        if ( v54 )
        {
          v8 = *(QuestBoardListViewManager_o **)(v54 + 320);
          if ( v8 )
          {
            QuestBoardListViewManager__SetBackMaskActive(v8, !is_framein, 0, 0);
            return 1;
          }
        }
      }
    }
LABEL_73:
    sub_1C372B4(v8);
  }
  v23 = *(_DWORD *)(v7 + 44);
LABEL_34:
  GameObjectExtensions__SetLocalPositionX(*(UnityEngine_GameObject_o **)(v7 + 16), (float)v23, 0);
  v31 = QuestInformationComponent_TypeInfo;
  v32 = *(UnityEngine_GameObject_o **)(v7 + 32);
  v33 = *(_DWORD *)(v7 + 44);
  if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    v31 = QuestInformationComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(
    v32,
    (float)(v31->static_fields->BAR_BASE_OFFSET - v33 - *(_DWORD *)(v7 + 40)),
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
  QuestEntity_o *v7; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3FD03 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C3FD03 = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C372B4(MasterData_object);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          targetQuestId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
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
  return !QuestEntity__HasFlag(v7, 2, 0) && v7->fields.afterClear != 1;
}


bool QuestInformationComponent__IsDisplayQuestInformation_36556720(
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
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_4C3FCFF & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C37058(&Method_QuestInformationComponent_OnClickTabL__);
    byte_4C3FCFF = 1;
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
        v4 = (_QWORD *)sub_1C37070(Method_QuestInformationComponent_OnClickTabL__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 0;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, v6);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_1C372B4(this);
    }
  }
}


void QuestInformationComponent__OnClickTabR(QuestInformationComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *v2; // x19
  struct QuestInformationListViewManager_o *listManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_4C3FD00 & 1) == 0 )
  {
    this = (QuestInformationComponent_o *)sub_1C37058(&Method_QuestInformationComponent_OnClickTabR__);
    byte_4C3FD00 = 1;
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
        v4 = (_QWORD *)sub_1C37070(Method_QuestInformationComponent_OnClickTabR__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      this = (QuestInformationComponent_o *)v2->fields.listManager;
      v2->fields.TabOpened = 1;
      if ( this )
      {
        QuestInformationListViewManager__DestroyList((QuestInformationListViewManager_o *)this, v6);
        v2->fields.mSetUpOnUpdate = 1;
        return;
      }
LABEL_12:
      sub_1C372B4(this);
    }
  }
}


void QuestInformationComponent__OnDisable(QuestInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listManager; // x20
  const MethodInfo *v4; // x1
  QuestInformationListViewManager_o *v5; // x0
  UnityEngine_Object_o *maskObj; // x20

  if ( (byte_4C3FCFD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FCFD = 1;
  }
  this->fields.dispAnimState = 0;
  listManager = (UnityEngine_Object_o *)this->fields.listManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listManager, 0, 0) )
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
  if ( UnityEngine_Object__op_Inequality(maskObj, 0, 0) )
  {
    v5 = (QuestInformationListViewManager_o *)this->fields.maskObj;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v5);
  }
}


void QuestInformationComponent__Open(QuestInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Action_o *customOpen; // x8

  customOpen = this->fields.customOpen;
  if ( customOpen )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))customOpen->fields.invoke_impl)(
      customOpen->fields.method_code,
      customOpen->fields.method);
  }
  else if ( this->fields.dispAnimState != 1 )
  {
    QuestInformationComponent__FrameInOut(this, 1, 0, v2);
  }
}


void QuestInformationComponent__SetResetReady(QuestInformationComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationListViewManager_o *listManager; // x8

  listManager = this->fields.listManager;
  if ( !listManager )
    sub_1C372B4(this);
  listManager->fields.mIsResetReady = 1;
}


bool QuestInformationComponent__Setup(
        QuestInformationComponent_o *this,
        int32_t questId,
        int32_t displayScene,
        System_Action_o *customOpen,
        System_Action_o *customClose,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  QuestInformationListViewManager_o *listManager; // x0
  int32_t TabOpened; // w8
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  QuestInformationComponent___c_c *v20; // x0
  System_Func_object__int__o *_9__30_0; // x22
  Il2CppObject *v22; // x23
  struct QuestInformationComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  const MethodInfo *v27; // x4
  UISprite_o *v28; // x22
  QuestEntity_o *v29; // x21
  QuestInformationComponent_c *v30; // x8
  struct System_String_array_array *v31; // x8
  System_String_array *v32; // x8
  struct System_String_array_array *v33; // x8
  System_String_array *v34; // x8
  bool HasFlag; // w0
  UILabel_o *tabInfoLabel; // x21
  bool v37; // w22
  __int64 *v38; // x8
  const MethodInfo *v39; // x4
  UISprite_o *tabLsprite; // x21
  ListViewSort_c *klass; // x8
  System_String_o **data; // x8
  struct System_String_array_array *TabSpriteNames; // x8
  System_String_array *v44; // x8
  UILabel_o *titleBarInfoLabel; // x20
  struct QuestInformationListViewManager_o *v46; // x8
  Il2CppObject *v48; // [xsp+0h] [xbp-50h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3FCFE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_QuestInformationComponent___c__Setup_b__30_0__);
    sub_1C37058(&QuestInformationComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_10880/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/);
    sub_1C37058(&StringLiteral_10882/*"QUEST_INFO_TOP"*/);
    sub_1C37058(&StringLiteral_10881/*"QUEST_INFO_TAB_REWARD"*/);
    sub_1C37058(&StringLiteral_10879/*"QUEST_INFO_TAB_ENEMY"*/);
    byte_4C3FCFE = 1;
  }
  v48 = 0;
  entity = 0;
  this->fields.displayScene = displayScene;
  this->fields.customOpen = customOpen;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.customOpen,
    (int32_t)customOpen,
    displayScene,
    (const MethodInfo *)customOpen);
  this->fields.customClose = customClose;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.customClose, (int32_t)customClose, v11, v12);
  listManager = this->fields.listManager;
  if ( !listManager )
    goto LABEL_83;
  QuestInformationListViewManager__DestroyList(listManager, v13);
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
    UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 0, 0);
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)listManager,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
                                                         0);
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
        v18);
      goto LABEL_57;
    }
    listManager = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listManager,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listManager,
                                                         &v48,
                                                         questId,
                                                         (const MethodInfo_33A10EC *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)listManager & 1) != 0 )
    {
      if ( !v48 )
        goto LABEL_83;
      listManager = this->fields.listManager;
      if ( !listManager )
        goto LABEL_83;
      QuestInformationListViewManager__CreateEmptyRewardList(
        listManager,
        0,
        (int32_t)v48[1].monitor,
        HIDWORD(v48[1].klass),
        v39);
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
          UISprite__set_spriteName(tabLsprite, data[5], 0);
          TabSpriteNames = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
          if ( !TabSpriteNames )
            goto LABEL_83;
          if ( LODWORD(TabSpriteNames->max_length) > 1 )
          {
            v44 = TabSpriteNames->m_Items[1];
            if ( !v44 )
              goto LABEL_83;
            if ( LODWORD(v44->max_length) )
            {
              listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
              if ( !listManager )
                goto LABEL_83;
              UISprite__set_spriteName((UISprite_o *)listManager, v44->m_Items[0], 0);
              tabInfoLabel = this->fields.tabInfoLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v38 = &StringLiteral_10881/*"QUEST_INFO_TAB_REWARD"*/;
              goto LABEL_75;
            }
          }
        }
      }
LABEL_84:
      sub_1C372BC(listManager);
    }
    goto LABEL_72;
  }
  listManager = (QuestInformationListViewManager_o *)this->fields.baseListTabSp;
  if ( !listManager )
    goto LABEL_83;
  UIBasicSprite__set_flip((UIBasicSprite_o *)listManager, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  if ( !listManager )
    goto LABEL_83;
  EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)listManager, questId, 0);
  if ( EntityListFromQuestId )
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
    if ( !EntityListFromQuestId->max_length )
    {
LABEL_72:
      LOBYTE(EntityListFromQuestId) = 0;
      return (char)EntityListFromQuestId;
    }
    v20 = QuestInformationComponent___c_TypeInfo;
    if ( !QuestInformationComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent___c_TypeInfo);
      v20 = QuestInformationComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__int__o *)v20->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = QuestInformationComponent___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__30_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ViewEnemyEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__30_0, v22, Method_QuestInformationComponent___c__Setup_b__30_0__, 0);
      static_fields = QuestInformationComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__30_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                 (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    listManager = (QuestInformationListViewManager_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v26,
                                                         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( !this->fields.listManager )
      goto LABEL_83;
    QuestInformationListViewManager__CreateEnemyList(
      this->fields.listManager,
      0,
      questId,
      (System_Int32_array *)listManager,
      v27);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    listManager = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !listManager )
      goto LABEL_83;
    listManager = (QuestInformationListViewManager_o *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)listManager,
                                                         questId,
                                                         0);
    v28 = this->fields.tabLsprite;
    v29 = (QuestEntity_o *)listManager;
    v30 = QuestInformationComponent_TypeInfo;
    if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
      v30 = QuestInformationComponent_TypeInfo;
    }
    v31 = v30->static_fields->TabSpriteNames;
    if ( !v31 )
      goto LABEL_83;
    if ( !LODWORD(v31->max_length) )
      goto LABEL_84;
    v32 = v31->m_Items[0];
    if ( !v32 )
      goto LABEL_83;
    if ( !LODWORD(v32->max_length) )
      goto LABEL_84;
    if ( !v28 )
      goto LABEL_83;
    UISprite__set_spriteName(v28, v32->m_Items[0], 0);
    v33 = QuestInformationComponent_TypeInfo->static_fields->TabSpriteNames;
    if ( !v33 )
      goto LABEL_83;
    if ( LODWORD(v33->max_length) <= 1 )
      goto LABEL_84;
    v34 = v33->m_Items[1];
    if ( !v34 )
      goto LABEL_83;
    if ( LODWORD(v34->max_length) <= 1 )
      goto LABEL_84;
    listManager = (QuestInformationListViewManager_o *)this->fields.tabRsprite;
    if ( !listManager )
      goto LABEL_83;
    UISprite__set_spriteName((UISprite_o *)listManager, v34->m_Items[1], 0);
    if ( !v29 )
      goto LABEL_83;
    HasFlag = QuestEntity__HasFlag(v29, 0x200000000000000LL, 0);
    tabInfoLabel = this->fields.tabInfoLabel;
    v37 = HasFlag;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( HasFlag )
      {
LABEL_50:
        v38 = &StringLiteral_10880/*"QUEST_INFO_TAB_ENEMY_FORCE_DISP"*/;
LABEL_75:
        listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get((System_String_o *)*v38, 0);
        if ( tabInfoLabel )
        {
          UILabel__set_text(tabInfoLabel, (System_String_o *)listManager, 0);
          this->fields.settedQuestId = questId;
          titleBarInfoLabel = this->fields.titleBarInfoLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          listManager = (QuestInformationListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10882/*"QUEST_INFO_TOP"*/,
                                                               0);
          if ( titleBarInfoLabel )
          {
            UILabel__set_text(titleBarInfoLabel, (System_String_o *)listManager, 0);
            listManager = (QuestInformationListViewManager_o *)this->fields.maskObj;
            this->fields.mIsLetAutoOpen = 1;
            if ( listManager )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 1, 0);
              v46 = this->fields.listManager;
              if ( v46 )
              {
                LOBYTE(EntityListFromQuestId) = 1;
                v46->fields.mIsResetReady = 0;
                return (char)EntityListFromQuestId;
              }
            }
          }
        }
LABEL_83:
        sub_1C372B4(listManager);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v37 )
        goto LABEL_50;
    }
    v38 = &StringLiteral_10879/*"QUEST_INFO_TAB_ENEMY"*/;
    goto LABEL_75;
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
    sub_1C372B4(this);
  return listManager->fields.mIsBuildingList;
}


bool QuestInformationComponent__isMoving(QuestInformationComponent_o *this, const MethodInfo *method)
{
  return this->fields.dispAnimState != 0;
}


void QuestInformationComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3FD05 & 1) == 0 )
  {
    sub_1C37058(&QuestInformationComponent___c_TypeInfo);
    byte_4C3FD05 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestInformationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestInformationComponent___c_TypeInfo->static_fields->__9 = (struct QuestInformationComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestInformationComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
  struct MoveObject_o *v4; // x8
  UnityEngine_GameObject_o *tgtTitleBarObj; // x20
  float x; // s8
  QuestInformationComponent_c *v7; // x0

  v2 = this;
  if ( (byte_4C3FD06 & 1) == 0 )
  {
    this = (QuestInformationComponent___c__DisplayClass43_0_o *)sub_1C37058(&QuestInformationComponent_TypeInfo);
    byte_4C3FD06 = 1;
  }
  mo = v2->fields.mo;
  if ( !mo
    || (GameObjectExtensions__SetLocalPositionX(v2->fields.tgt_obj, mo->fields.mNow.fields.x, 0),
        (v4 = v2->fields.mo) == 0) )
  {
    sub_1C372B4(this);
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
    0);
}


void QuestInformationComponent___c__DisplayClass43_0___FrameInOut_b__1(
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

  if ( (byte_4C3FD07 & 1) == 0 )
  {
    sub_1C37058(&QuestInformationComponent_TypeInfo);
    byte_4C3FD07 = 1;
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.tgt_obj, (float)this->fields.tgt_x, 0);
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
    0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.dispAnimState = 0;
  if ( this->fields.tgt_x != QuestInformationComponent_TypeInfo->static_fields->FRAME_OUT_POS_X )
    return;
  listManager = _4__this->fields.listManager;
  if ( !listManager
    || (QuestInformationListViewManager__DestroyList(listManager, v7), (v9 = this->fields.__4__this) == 0)
    || (listManager = (QuestInformationListViewManager_o *)v9->fields.maskObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listManager, 0, 0),
        (v10 = this->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_1C372B4(listManager);
  }
  v10->fields.settedQuestId = -1;
}