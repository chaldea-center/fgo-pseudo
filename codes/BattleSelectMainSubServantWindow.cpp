void __fastcall BattleSelectMainSubServantWindow___ctor(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


bool __fastcall BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  BattleBuffData_BuffData_array *BuffList_31040328; // x0

  if ( (byte_40F7541 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, servantData);
    byte_40F7541 = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            servantData,
                                                            method,
                                                            v3,
                                                            v4),
        BattleBuffData_CheckIndividualitiesData___ctor(v7, servantData, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (BuffList_31040328 = BattleBuffData__getBuffList_31040328(buffData, 84, v7, 1, 0, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return *(_QWORD *)&BuffList_31040328->max_length == 0LL;
}


void __fastcall BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v10; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v12; // x8
  ServantFaceIconComponent_o *servantIcon; // x0
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v15; // x21
  int v16; // w9
  BattleSelectServantComponent_o *v17; // x8
  ServantFaceIconComponent_o *v18; // x0

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
LABEL_19:
      sub_B17100(v6, v7, v8);
      sub_B170A0();
    }
    v12 = mainSvtList->m_Items[v10];
    if ( v12 )
    {
      servantIcon = v12->fields.servantIcon;
      if ( servantIcon )
      {
        ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0LL);
        mainSvtList = this->fields.mainSvtList;
        ++v10;
        if ( mainSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_17:
    sub_B170D4();
  v15 = 0LL;
  while ( 1 )
  {
    v16 = subSvtList->max_length;
    if ( (int)v15 >= v16 )
      break;
    if ( (unsigned int)v15 >= v16 )
      goto LABEL_19;
    v17 = subSvtList->m_Items[v15];
    if ( v17 )
    {
      v18 = v17->fields.servantIcon;
      if ( v18 )
      {
        ServantFaceIconComponent__ClearFaceAtlas(v18, 0LL);
        subSvtList = this->fields.subSvtList;
        ++v15;
        if ( subSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


// attributes: thunk
void __fastcall BattleSelectMainSubServantWindow__Open(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow__OpenImpl(this, call, method);
}


void __fastcall BattleSelectMainSubServantWindow__OpenImpl(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleData_o *battleData; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  BattleServantData_array *v8; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *parentPanel; // x0
  struct UIButton_o *actButton; // x0
  struct UIButton_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v18; // x20

  if ( (byte_40F753D & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSelectMainSubServantWindow_onCloseButton__, call);
    sub_B16FFC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_40F753D = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(battleData, 0LL);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v8 = FieldPlayerServantList;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v8, SubPlayerServantList, v10);
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel
    || (UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL), (actButton = this->fields.actButton) == 0LL)
    || (((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))actButton->klass->vtable._5_set_isEnabled.method)(
          actButton,
          0LL,
          actButton->klass->vtable._6_OnInit.methodPtr),
        (v13 = this->fields.actButton) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
    v13,
    3LL,
    1LL,
    v13->klass->vtable._15_OnClick.methodPtr);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v18 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v14,
                                                              v15,
                                                              v16,
                                                              v17);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v18,
    0LL);
}


void __fastcall BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.callBack = callback;
  sub_B16F98(&this->fields.callBack, callback);
}


void __fastcall BattleSelectMainSubServantWindow__SetServantData(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_array *mainList,
        BattleServantData_array *subList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *title_label; // x22
  System_String_o *v11; // x0
  BattleSelectMainSubServantWindow_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v18; // x27
  unsigned __int64 max_length; // x9
  unsigned __int64 v20; // x28
  unsigned __int64 v21; // x9
  BattleSelectServantComponent_o *v22; // x22
  BattleServantData_o *v23; // x23
  BattleSelectServantComponent_CallBack_o *v24; // x24
  int32_t v25; // w3
  const MethodInfo *v26; // x5
  struct BattleSelectServantComponent_array *v27; // x8
  BattleSelectServantComponent_o *v28; // x22
  bool v29; // w0
  const MethodInfo *v30; // x2
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v32; // x24
  unsigned __int64 v33; // x9
  unsigned __int64 v34; // x27
  unsigned __int64 v35; // x9
  BattleSelectServantComponent_o *v36; // x21
  BattleServantData_o *v37; // x22
  BattleSelectServantComponent_CallBack_o *v38; // x23
  int32_t v39; // w3
  const MethodInfo *v40; // x5
  struct BattleSelectServantComponent_array *v41; // x8
  BattleSelectServantComponent_o *v42; // x21
  bool v43; // w0
  const MethodInfo *v44; // x2

  if ( (byte_40F753C & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSelectMainSubServantWindow_selectSvt__, mainList);
    sub_B16FFC(&BattleSelectServantComponent_CallBack_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2416, v9);
    byte_40F753C = 1;
  }
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2416, 0LL);
  if ( !title_label )
    goto LABEL_40;
  UILabel__set_text(title_label, v11, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_40;
  v18 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v20 = v18 - 4;
    if ( v18 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_40;
    if ( v20 >= max_length )
    {
LABEL_42:
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v21 = mainList->max_length;
    v22 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v18);
    if ( (__int64)v20 >= (int)v21 )
    {
      if ( !v22 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v18), v13);
    }
    else
    {
      if ( v20 >= v21 )
        goto LABEL_42;
      v23 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v18);
      v24 = (BattleSelectServantComponent_CallBack_o *)sub_B170CC(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16);
      BattleSelectServantComponent_CallBack___ctor(
        v24,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v22 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v22, v23, 1, v25, v24, v26);
      v27 = this->fields.mainSvtList;
      if ( !v27 )
        goto LABEL_40;
      if ( v20 >= v27->max_length || v20 >= mainList->max_length )
        goto LABEL_42;
      v28 = (BattleSelectServantComponent_o *)*((_QWORD *)&v27->obj.klass + v18);
      v29 = BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
              v12,
              *((BattleServantData_o **)&mainList->obj.klass + v18),
              v14);
      if ( !v28 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v28, v29, v30);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v18;
    if ( !mainSvtList )
      goto LABEL_40;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_40:
    sub_B170D4();
  v32 = 4LL;
  while ( 1 )
  {
    v33 = subSvtList->max_length;
    v34 = v32 - 4;
    if ( v32 - 4 >= (int)v33 )
      break;
    if ( !subList )
      goto LABEL_40;
    if ( v34 >= v33 )
      goto LABEL_42;
    v35 = subList->max_length;
    v36 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v32);
    if ( (__int64)v34 >= (int)v35 )
    {
      if ( !v36 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v32), v13);
    }
    else
    {
      if ( v34 >= v35 )
        goto LABEL_42;
      v37 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v32);
      v38 = (BattleSelectServantComponent_CallBack_o *)sub_B170CC(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16);
      BattleSelectServantComponent_CallBack___ctor(
        v38,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v36 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v36, v37, 2, v39, v38, v40);
      v41 = this->fields.subSvtList;
      if ( !v41 )
        goto LABEL_40;
      if ( v34 >= v41->max_length || v34 >= subList->max_length )
        goto LABEL_42;
      v42 = (BattleSelectServantComponent_o *)*((_QWORD *)&v41->obj.klass + v32);
      v43 = BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
              v12,
              *((BattleServantData_o **)&subList->obj.klass + v32),
              v14);
      if ( !v42 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v42, v43, v44);
    }
    subSvtList = this->fields.subSvtList;
    ++v32;
    if ( !subSvtList )
      goto LABEL_40;
  }
}


void __fastcall BattleSelectMainSubServantWindow__atlasLoadEnd(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *FieldPlayerServantList; // x0
  BattleServantData_array *v5; // x20
  BattleServantData_array *SubPlayerServantList; // x2
  const MethodInfo *v7; // x3

  battleData = this->fields.battleData;
  if ( !battleData
    || (FieldPlayerServantList = BattleData__getFieldPlayerServantList(battleData, 0LL), !this->fields.battleData) )
  {
    sub_B170D4();
  }
  v5 = FieldPlayerServantList;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v5, SubPlayerServantList, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7540 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_40F7540 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7542 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12944, method);
    byte_40F7542 = 1;
  }
  return (System_String_o *)StringLiteral_12944;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int mainSelect_uniqueId; // w2
  int subSelect_uniqueId; // w3
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  NotificationDialog_ClickDelegate_o *v19; // x23

  if ( (byte_40F753F & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSelectMainSubServantWindow_endErrorDialog__, method);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2504, v7);
    sub_B16FFC(&StringLiteral_2505, v8);
    byte_40F753F = 1;
  }
  if ( !this->fields.isSelected )
  {
    mainSelect_uniqueId = this->fields.mainSelect_uniqueId;
    if ( mainSelect_uniqueId < 1 || (subSelect_uniqueId = this->fields.subSelect_uniqueId, subSelect_uniqueId < 1) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2505, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2504, 0LL);
      v19 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                    NotificationDialog_ClickDelegate_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
      NotificationDialog_ClickDelegate___ctor(
        v19,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_18239760(
          Instance,
          v13,
          v14,
          v19,
          -1,
          0,
          0,
          0,
          0,
          1,
          0LL,
          0LL,
          0,
          0,
          0LL,
          1,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_13;
      }
    }
    else
    {
      callBack = this->fields.callBack;
      if ( callBack )
      {
        BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
          callBack,
          1,
          mainSelect_uniqueId,
          subSelect_uniqueId,
          0LL);
LABEL_13:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        this->fields.isSelected = 1;
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0

  if ( (byte_40F753E & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40F753E = 1;
  }
  if ( !this->fields.isSelected )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_B170D4();
    BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
      callBack,
      0,
      this->fields.mainSelect_uniqueId,
      this->fields.subSelect_uniqueId,
      0LL);
    this->fields.isSelected = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__selectSvt(
        BattleSelectMainSubServantWindow_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  int32_t v6; // w20
  __int64 v7; // x21
  int v8; // w9
  BattleSelectServantComponent_o *v9; // x0
  struct BattleSelectServantComponent_array *subSvtList; // x8
  int32_t v11; // w20
  __int64 v12; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v14; // x0
  struct UIButton_o *v15; // x0
  struct UIButton_o *v16; // x0
  UIButton_c *klass; // x8
  struct UIButton_o *actButton; // x0
  struct UIButton_o *v19; // x0

  if ( position == 2 )
  {
    subSvtList = this->fields.subSvtList;
    if ( this->fields.subSelect_uniqueId == uniqueId )
      v11 = 0;
    else
      v11 = uniqueId;
    if ( !subSvtList )
      goto LABEL_34;
    v12 = 0LL;
    while ( 1 )
    {
      max_length = subSvtList->max_length;
      if ( (int)v12 >= max_length )
        break;
      if ( (unsigned int)v12 >= max_length )
      {
LABEL_35:
        sub_B17100(this, *(_QWORD *)&position, *(_QWORD *)&uniqueId);
        sub_B170A0();
      }
      v14 = subSvtList->m_Items[v12];
      if ( v14 )
      {
        BattleSelectServantComponent__setTarget(v14, v11, *(const MethodInfo **)&uniqueId);
        subSvtList = this->fields.subSvtList;
        ++v12;
        if ( subSvtList )
          continue;
      }
      goto LABEL_34;
    }
    this->fields.subSelect_uniqueId = v11;
  }
  else if ( position == 1 )
  {
    mainSvtList = this->fields.mainSvtList;
    if ( this->fields.mainSelect_uniqueId == uniqueId )
      v6 = 0;
    else
      v6 = uniqueId;
    if ( !mainSvtList )
      goto LABEL_34;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = mainSvtList->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_35;
      v9 = mainSvtList->m_Items[v7];
      if ( v9 )
      {
        BattleSelectServantComponent__setTarget(v9, v6, *(const MethodInfo **)&uniqueId);
        mainSvtList = this->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
      goto LABEL_34;
    }
    this->fields.mainSelect_uniqueId = v6;
  }
  if ( this->fields.mainSelect_uniqueId < 1 || this->fields.subSelect_uniqueId < 1 )
  {
    actButton = this->fields.actButton;
    if ( actButton )
    {
      ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))actButton->klass->vtable._5_set_isEnabled.method)(
        actButton,
        0LL,
        actButton->klass->vtable._6_OnInit.methodPtr,
        method);
      v19 = this->fields.actButton;
      if ( v19 )
      {
        klass = v19->klass;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_B170D4();
  }
  v15 = this->fields.actButton;
  if ( !v15 )
    goto LABEL_34;
  ((void (__fastcall *)(struct UIButton_o *, __int64, Il2CppMethodPointer, const MethodInfo *))v15->klass->vtable._5_set_isEnabled.method)(
    v15,
    1LL,
    v15->klass->vtable._6_OnInit.methodPtr,
    method);
  v16 = this->fields.actButton;
  if ( !v16 )
    goto LABEL_34;
  klass = v16->klass;
LABEL_33:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall BattleSelectMainSubServantWindow__setBattleData(
        BattleSelectMainSubServantWindow_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  this->fields.battleData = data;
  sub_B16F98(&this->fields.battleData, data);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = flg;
  v13 = subUniqueId;
  v14 = mainUniqueId;
  if ( (byte_40F71B7 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, flg);
    sub_B16FFC(&int_TypeInfo, v10);
    byte_40F71B7 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  BattleSelectMainSubServantWindow_SelectedCallBack_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, bool, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(bool, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v33; // [xsp+8h] [xbp-58h] BYREF

  v33 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v33;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (BattleSelectMainSubServantWindow_SelectedCallBack_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v22 = v11[v12];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(bool, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, flg, *(_QWORD *)&mainUniqueId);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25(flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v24);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v28 = *v23;
          v29 = *(_QWORD *)(v24 + 24);
          v30 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v21);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v15 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v13) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))(*v23
                                                                          + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                          + 312))(
            v23,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, _QWORD, __int64))v25)(
      v23,
      flg,
      (unsigned int)mainUniqueId,
      (unsigned int)subUniqueId,
      v24);
    goto LABEL_37;
  }
}