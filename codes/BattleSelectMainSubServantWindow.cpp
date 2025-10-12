void BattleSelectMainSubServantWindow___ctor(BattleSelectMainSubServantWindow_o *this, const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


bool BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21

  if ( (byte_4C3AFCF & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C3AFCF = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_45709708(v5, servantData, 0, 0, 0, 0, 0, 1, 0),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_45487792(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0,
                                                       0,
                                                       0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  return this->fields.m_CancellationTokenSource == 0;
}


void BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v7; // x21
  int max_length; // w9
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v10; // x21
  int v11; // w9

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_15;
  v7 = 0;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
LABEL_17:
      sub_1C32E84(parentPanel);
    parentPanel = (UnityEngine_GameObject_o *)mainSvtList->m_Items[v7];
    if ( parentPanel )
    {
      BattleSelectServantComponent__ClearFaceAtlas((BattleSelectServantComponent_o *)parentPanel, 0);
      mainSvtList = this->fields.mainSvtList;
      ++v7;
      if ( mainSvtList )
        continue;
    }
    goto LABEL_15;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_15:
    sub_1C32E7C(parentPanel);
  v10 = 0;
  while ( 1 )
  {
    v11 = subSvtList->max_length;
    if ( (int)v10 >= v11 )
      break;
    if ( (unsigned int)v10 >= v11 )
      goto LABEL_17;
    parentPanel = (UnityEngine_GameObject_o *)subSvtList->m_Items[v10];
    if ( parentPanel )
    {
      BattleSelectServantComponent__ClearFaceAtlas((BattleSelectServantComponent_o *)parentPanel, 0);
      subSvtList = this->fields.subSvtList;
      ++v10;
      if ( subSvtList )
        continue;
    }
    goto LABEL_15;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


// attributes: thunk
void BattleSelectMainSubServantWindow__Open(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow__OpenImpl(this, call, method);
}


void BattleSelectMainSubServantWindow__OpenImpl(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v6; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v8; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v9; // x20

  if ( (byte_4C3AFCB & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    sub_1C32C20(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C3AFCB = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v6 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0);
  BattleSelectMainSubServantWindow__SetServantData(this, v6, SubPlayerServantList, v8);
  battleData = (BattleData_o *)this->fields.parentPanel;
  if ( !battleData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleData, 1, 0),
        (battleData = (BattleData_o *)this->fields.actButton) == 0)
    || (((void (__fastcall *)(BattleData_o *, _QWORD, const MethodInfo *))battleData->klass->vtable._5_isAiTarget.methodPtr)(
          battleData,
          0,
          battleData->klass->vtable._5_isAiTarget.method),
        (battleData = (BattleData_o *)this->fields.actButton) == 0) )
  {
LABEL_9:
    sub_1C32E7C(battleData);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.fields)(
    battleData,
    3,
    1,
    battleData->klass[1]._1.events);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C32E6C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack((BattleWindowOuterClickManagerComponent_o *)this, v9, 0);
}


void BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callBack = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callBack, (int32_t)callback, (int32_t)method, v3);
}


void BattleSelectMainSubServantWindow__SetServantData(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_array *mainList,
        BattleServantData_array *subList,
        const MethodInfo *method)
{
  UILabel_o *title_label; // x22
  System_String_o *v8; // x0
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v10; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v12; // x28
  unsigned __int64 v13; // x9
  BattleSelectServantComponent_o *v14; // x22
  BattleServantData_o *v15; // x23
  BattleSelectServantComponent_CallBack_o *v16; // x24
  const MethodInfo *v17; // x2
  struct BattleSelectServantComponent_array *v18; // x8
  BattleSelectServantComponent_o *v19; // x22
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v21; // x24
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x27
  unsigned __int64 v24; // x9
  BattleSelectServantComponent_o *v25; // x21
  BattleServantData_o *v26; // x22
  BattleSelectServantComponent_CallBack_o *v27; // x23
  const MethodInfo *v28; // x2
  struct BattleSelectServantComponent_array *v29; // x8
  BattleSelectServantComponent_o *v30; // x21

  if ( (byte_4C3AFCA & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectMainSubServantWindow_selectSvt__);
    sub_1C32C20(&BattleSelectServantComponent_CallBack_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2750/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/);
    byte_4C3AFCA = 1;
  }
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2750/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0);
  if ( !title_label )
    goto LABEL_39;
  UILabel__set_text(title_label, v8, 0);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_39;
  v10 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(mainSvtList->max_length);
    v12 = v10 - 4;
    if ( v10 - 4 >= (int)max_length_low )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v12 >= max_length_low )
LABEL_41:
      sub_1C32E84(v8);
    v13 = LODWORD(mainList->max_length);
    v14 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v10);
    if ( (__int64)v12 >= (int)v13 )
    {
      if ( !v14 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v10), 0);
    }
    else
    {
      if ( v12 >= v13 )
        goto LABEL_41;
      v15 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v10);
      v16 = (BattleSelectServantComponent_CallBack_o *)sub_1C32E6C(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0);
      if ( !v14 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v14, v15, 1, v10 - 4, v16, 0);
      v18 = this->fields.mainSvtList;
      if ( !v18 )
        goto LABEL_39;
      if ( v12 >= LODWORD(v18->max_length) || v12 >= LODWORD(mainList->max_length) )
        goto LABEL_41;
      v19 = (BattleSelectServantComponent_o *)*((_QWORD *)&v18->obj.klass + v10);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&mainList->obj.klass + v10),
                                v17);
      if ( !v19 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v19, (unsigned __int8)v8 & 1, 0, 16, 1, 0);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v10;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1C32E7C(v8);
  v21 = 4;
  while ( 1 )
  {
    v22 = LODWORD(subSvtList->max_length);
    v23 = v21 - 4;
    if ( v21 - 4 >= (int)v22 )
      break;
    if ( !subList )
      goto LABEL_39;
    if ( v23 >= v22 )
      goto LABEL_41;
    v24 = LODWORD(subList->max_length);
    v25 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v21);
    if ( (__int64)v23 >= (int)v24 )
    {
      if ( !v25 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v21), 0);
    }
    else
    {
      if ( v23 >= v24 )
        goto LABEL_41;
      v26 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v21);
      v27 = (BattleSelectServantComponent_CallBack_o *)sub_1C32E6C(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v27,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0);
      if ( !v25 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v25, v26, 2, v21 - 1, v27, 0);
      v29 = this->fields.subSvtList;
      if ( !v29 )
        goto LABEL_39;
      if ( v23 >= LODWORD(v29->max_length) || v23 >= LODWORD(subList->max_length) )
        goto LABEL_41;
      v30 = (BattleSelectServantComponent_o *)*((_QWORD *)&v29->obj.klass + v21);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&subList->obj.klass + v21),
                                v28);
      if ( !v30 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v30, (unsigned __int8)v8 & 1, 0, 16, 1, 0);
    }
    subSvtList = this->fields.subSvtList;
    ++v21;
    if ( !subSvtList )
      goto LABEL_39;
  }
}


void BattleSelectMainSubServantWindow__atlasLoadEnd(BattleSelectMainSubServantWindow_o *this, const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v4; // x20
  BattleServantData_array *SubPlayerServantList; // x2
  const MethodInfo *v6; // x3

  battleData = this->fields.battleData;
  if ( !battleData
    || (battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0), !this->fields.battleData) )
  {
    sub_1C32E7C(battleData);
  }
  v4 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0);
  BattleSelectMainSubServantWindow__SetServantData(this, v4, SubPlayerServantList, v6);
}


void BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AFCE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3AFCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  this->fields.isSelected = 0;
}


System_String_o *BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3AFD0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_13006/*"Sprite"*/);
    byte_4C3AFD0 = 1;
  }
  return (System_String_o *)StringLiteral_13006/*"Sprite"*/;
}


void BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v2; // x19
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x21
  System_String_o *v6; // x22
  NotificationDialog_ClickDelegate_o *v7; // x23
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_4C3AFCD & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectMainSubServantWindow_endErrorDialog__);
    sub_1C32C20(&Method_BattleSelectMainSubServantWindow_onActionButton__);
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_2868/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/);
    this = (BattleSelectMainSubServantWindow_o *)sub_1C32C20(&StringLiteral_2869/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/);
    byte_4C3AFCD = 1;
  }
  if ( !v2->fields.isSelected )
  {
    if ( v2->fields.mainSelect_uniqueId < 1 || v2->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0);
      v7 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_31193120(
          (CommonUI_o *)Instance,
          v5,
          v6,
          v7,
          -1,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0);
        goto LABEL_12;
      }
    }
    else
    {
      callBack = v2->fields.callBack;
      if ( callBack )
      {
        ((void (__fastcall *)(intptr_t, __int64))callBack->fields.invoke_impl)(callBack->fields.method_code, 1);
LABEL_12:
        v8 = Method_BattleSelectMainSubServantWindow_onActionButton__;
        if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onActionButton__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C32C38(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
        v2->fields.isSelected = 1;
        return;
      }
    }
    sub_1C32E7C(this);
  }
}


void BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8

  if ( (byte_4C3AFCC & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    byte_4C3AFCC = 1;
  }
  if ( !this->fields.isSelected )
  {
    v3 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1C32E7C(v5);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callBack->fields.invoke_impl)(
      callBack->fields.method_code,
      0,
      (unsigned int)this->fields.mainSelect_uniqueId,
      (unsigned int)this->fields.subSelect_uniqueId,
      callBack->fields.method);
    this->fields.isSelected = 1;
  }
}


void BattleSelectMainSubServantWindow__selectSvt(
        BattleSelectMainSubServantWindow_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v4; // x19
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  int32_t v6; // w20
  __int64 v7; // x21
  int v8; // w9
  struct BattleSelectServantComponent_array *subSvtList; // x8
  int32_t v10; // w20
  __int64 v11; // x21
  int max_length; // w9
  BattleSelectMainSubServantWindow_c *klass; // x8

  v4 = this;
  if ( position == 2 )
  {
    subSvtList = this->fields.subSvtList;
    if ( this->fields.subSelect_uniqueId == uniqueId )
      v10 = 0;
    else
      v10 = uniqueId;
    if ( !subSvtList )
      goto LABEL_34;
    v11 = 0;
    while ( 1 )
    {
      max_length = subSvtList->max_length;
      if ( (int)v11 >= max_length )
        break;
      if ( (unsigned int)v11 >= max_length )
LABEL_35:
        sub_1C32E84(this);
      this = (BattleSelectMainSubServantWindow_o *)subSvtList->m_Items[v11];
      if ( this )
      {
        BattleSelectServantComponent__setTarget((BattleSelectServantComponent_o *)this, v10, 0);
        subSvtList = v4->fields.subSvtList;
        ++v11;
        if ( subSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.subSelect_uniqueId = v10;
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
    v7 = 0;
    while ( 1 )
    {
      v8 = mainSvtList->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_35;
      this = (BattleSelectMainSubServantWindow_o *)mainSvtList->m_Items[v7];
      if ( this )
      {
        BattleSelectServantComponent__setTarget((BattleSelectServantComponent_o *)this, v6, 0);
        mainSvtList = v4->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.mainSelect_uniqueId = v6;
  }
  if ( v4->fields.mainSelect_uniqueId < 1 || v4->fields.subSelect_uniqueId < 1 )
  {
    this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
    if ( this )
    {
      ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, _QWORD, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        0,
        this->klass->vtable._5_set_closeBtnObject.method,
        method);
      this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
      if ( this )
      {
        klass = this->klass;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1C32E7C(this);
  }
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, __int64, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    1,
    this->klass->vtable._5_set_closeBtnObject.method,
    method);
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  klass = this->klass;
LABEL_33:
  ((void (*)(void))klass[1]._1.image)();
}


void BattleSelectMainSubServantWindow__setBattleData(
        BattleSelectMainSubServantWindow_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
}


void BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_1C32E7C(gameObject);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7AE74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7AE14;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  bool v28[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v28[0] = flg;
  v27 = mainUniqueId;
  v26 = subUniqueId;
  if ( (byte_4C3AFD2 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C3AFD2 = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             bool_TypeInfo,
             v28,
             *(_QWORD *)&mainUniqueId,
             *(_QWORD *)&subUniqueId,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v24, callback, object);
}


void BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    flg,
    mainUniqueId,
    subUniqueId,
    this->fields.method);
}